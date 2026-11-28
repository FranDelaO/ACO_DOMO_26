/* VERSION  2.0 YA CON LA CONECCION a LA VM MQTT _ Credendiales .... 
 * ============================================================================
 * Universidad Don Bosco - Arquitectura de Computadoras (ACO941) - Grupo 3
 * Sistema Domótico ESP32 para Simulación en Wokwi
 * Sincronizado 100% con diagram.json (board-esp32-devkit-c-v4)
 * ============================================================================
 * Controles rápidos para pruebas en Wokwi:
 *  - Teclado 4x3: Ingresar PIN "1234" + '#' para acceso / desarmar alarma.
 *  - Tecla '*': Borrar PIN en curso, o (si está vacío) ARMAR la alarma.
 *  - Botón azul (GPIO 25): Simula lectura de tarjeta RFID autorizada.
 *  - Monitor Serial: Escribe "UID:A1B2C3D4" para simular RFID o "ARM" para armar.
 * ============================================================================
 */

#include <WiFi.h>
#include <Wire.h>
#include <PubSubClient.h>
#include <ArduinoJson.h>
#include <Preferences.h>
#include <DHT.h>
#include <Keypad.h>
#include <ESP32Servo.h>
#include <Adafruit_NeoPixel.h>
#include <LiquidCrystal_I2C.h>

// ======================== MAPA DE PINES (diagram.json) ========================
// Subproceso A: Iluminación
const uint8_t PIN_PIR       = 34; // Input-Only
const uint8_t PIN_LDR       = 35; // ADC1 (Seguro con Wi-Fi)
const uint8_t PIN_RELAY_LUZ = 26;

// Subproceso B: Climatización
const uint8_t PIN_DHT       = 4;
const uint8_t PIN_RELAY_FAN = 27;
const uint8_t PIN_RELAY_AC  = 14;

// Subproceso C: Seguridad y Acceso
const uint8_t PIN_MC38      = 36; // VP - Input-Only con pull-up 10k externo
const uint8_t PIN_SW420     = 39; // VN - Input-Only con pull-up 10k externo
const uint8_t PIN_BTN_RFID  = 25; // INPUT_PULLUP (simulador tarjeta RFID)
const uint8_t PIN_RELAY_SOL = 13;
const uint8_t PIN_SERVO     = 15;
const uint8_t PIN_BUZZER    = 2;
const uint8_t PIN_NEOPIXEL  = 33;

// Bus I2C (LCD 16x2 0x27)
const uint8_t PIN_SDA       = 21;
const uint8_t PIN_SCL       = 22;

// Teclado Matricial 4x3 (C4 libre)
const byte ROWS = 4;
const byte COLS = 3;
char keys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};
byte rowPins[ROWS] = {19, 18, 5, 17};
byte colPins[COLS] = {16, 23, 32};

// ======================== RED WI-FI Y MQTT ========================
const char* WIFI_SSID   = "Wokwi-GUEST";
const char* WIFI_PASS   = "";
const int   WIFI_CHAN   = 6;

// En Wokwi Web usa broker público; con un ESP32 físico cambiar a "domotica.local"
const char* MQTT_HOST   = "broker.hivemq.com";
const int   MQTT_PORT   = 1883;
const char* ZONA        = "sala";

// Prefijo secreto del grupo: el MISMO que usa puente.conf en la VM.
// El puente copia <prefijo>/casa/# del broker público a casa/# en la VM.
// Con un ESP32 físico conectado directo a domotica.local, dejarlo vacío "".
// No subir el valor real al repositorio público.
const char* MQTT_PREFIX = "g3aco941-CAMBIAR";

// Tópicos MQTT (Subproceso D). Se arman en setup() con el prefijo delante.
String TOPIC_TELEMETRIA, TOPIC_ESTADO, TOPIC_EVENTO, TOPIC_STATUS;
String TOPIC_CMD_SUB, TOPIC_CONFIG_SUB;

String conPrefijo(const char* t) {
  return strlen(MQTT_PREFIX) ? String(MQTT_PREFIX) + "/" + t : String(t);
}

// Quita el prefijo de un tópico recibido para compararlo con los de la Fase 2
String sinPrefijo(const String& t) {
  String p = String(MQTT_PREFIX) + "/";
  return (strlen(MQTT_PREFIX) && t.startsWith(p)) ? t.substring(p.length()) : t;
}

// ======================== OBJETOS PERIFÉRICOS ========================
WiFiClient espClient;
PubSubClient mqtt(espClient);
Preferences prefs;
DHT dht(PIN_DHT, DHT22);
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
Servo servoVentana;
Adafruit_NeoPixel rgb(1, PIN_NEOPIXEL, NEO_GRB + NEO_KHZ800);
LiquidCrystal_I2C lcd(0x27, 16, 2);

// ======================== PARÁMETROS CONFIGURABLES (NVS) ========================
int   cfgLuxMin      = 50;    // Umbral luz natural (lux)
float cfgTempOn      = 26.0;  // Encender ventilador (°C)
float cfgTempOff     = 24.0;  // Apagar ventilador y A/C (°C) - histéresis 2°C
float cfgTempAC      = 28.0;  // Encender A/C (°C)
int   cfgAusenciaMin = 5;     // Minutos sin presencia para apagar luz

const unsigned long AC_COMP_PROTECT_MS = 180000UL; // 3 min protección compresor
const unsigned long SOLENOIDE_MS       = 5000UL;   // 5 s pulso cerradura
const unsigned long BLOQUEO_LECTOR_MS  = 60000UL;  // 60 s bloqueo tras 3 fallos
const unsigned long CICLO_MUESTREO_MS  = 2000UL;   // 2 s ciclo principal

// Credenciales locales (copia sincronizada desde PostgreSQL)
const String PIN_VALIDO      = "1234";
const String UID_AUTORIZADO  = "A1B2C3D4";

// ======================== VARIABLES DE ESTADO ========================
// Sensores
float ultimaTemp     = 25.0;
float ultimaHum      = 50.0;
int   ultimoLux      = 100;
bool  presenciaAct   = false;
bool  puertaAbierta  = false;
bool  vibracionDet   = false;
bool  fallaDHT       = false;

// Actuadores y Modos
bool modoManualLuz   = false;
bool modoManualClima = false;
bool luzOn           = false;
bool fanOn           = false;
bool acOn            = false;
bool alarmaArmada    = false;
bool intrusionActiva = false;
bool solenoideOn     = false;

// Temporizadores no bloqueantes (millis)
unsigned long tUltimaPresencia   = 0;
unsigned long tAcApagado         = 0;
bool          acYaTuvoCiclo      = false;
unsigned long tSolenoideInicio   = 0;
unsigned long tBloqueoInicio     = 0;
bool          lectorBloqueado    = false;
int           intentosFallidos   = 0;
String        pinBuffer          = "";

unsigned long tUltimoCiclo       = 0;
unsigned long tUltimoParpadeo    = 0;
bool          estadoParpadeo     = false;
unsigned long tBeepFin           = 0;
bool          beepCortoActivo    = false;
unsigned long tLedAccesoFin      = 0;

// Reconexión no bloqueante (espera creciente 5s -> 60s)
unsigned long tUltimoIntentoRed  = 0;
unsigned long backoffRedMs       = 5000;

// Orden pendiente recibida por callback MQTT
bool   hayOrdenPendiente = false;
String ordenActuador     = "";
String ordenAccion       = "";

// Buffer circular local para eventos/telemetría offline (Subproceso D)
const int BUF_SIZE = 20; // Solo eventos: la telemetría vieja no se guarda
struct MensajeOffline {
  String topic;
  String payload;
};
MensajeOffline bufferLocal[BUF_SIZE];
int bufHead  = 0;
int bufTail  = 0;
int bufCount = 0;

void publicarEstado(); // definida más abajo

// ======================== UTILIDADES DE BUFFER Y EVENTOS ========================
void encolarOffline(const String& topic, const String& payload) {
  bufferLocal[bufHead] = {topic, payload};
  bufHead = (bufHead + 1) % BUF_SIZE;
  if (bufCount < BUF_SIZE) {
    bufCount++;
  } else {
    bufTail = (bufTail + 1) % BUF_SIZE; // Sobrescribe el más antiguo
  }
}

// guardar = true solo para eventos: así un corte de 2 min no los pisa con telemetría
void publicarConRespaldo(const String& topic, const String& payload, bool guardar) {
  if (mqtt.connected()) {
    mqtt.publish(topic.c_str(), payload.c_str());
  } else if (guardar) {
    encolarOffline(topic, payload);
  }
}

void vaciarBufferOffline() {
  while (bufCount > 0 && mqtt.connected()) {
    mqtt.publish(bufferLocal[bufTail].topic.c_str(), bufferLocal[bufTail].payload.c_str());
    bufTail = (bufTail + 1) % BUF_SIZE;
    bufCount--;
  }
}

String obtenerHoraSimulada() {
  unsigned long seg = millis() / 1000;
  unsigned long h = (seg / 3600) % 24;
  unsigned long m = (seg / 60) % 60;
  unsigned long s = seg % 60;
  char buf[12];
  snprintf(buf, sizeof(buf), "%02lu:%02lu:%02lu", h, m, s);
  return String(buf);
}

void publicarEvento(const char* tipo, const char* sensor) {
  StaticJsonDocument<192> doc;
  doc["tipo"]   = tipo;
  doc["sensor"] = sensor;
  doc["hora"]   = obtenerHoraSimulada();
  String out;
  serializeJson(doc, out);
  Serial.printf("[EVENTO] %s\n", out.c_str());
  publicarConRespaldo(TOPIC_EVENTO, out, true);
}

// ======================== PERSISTENCIA NVS ========================
void cargarConfigNVS() {
  prefs.begin("domotica", true);
  cfgLuxMin      = prefs.getInt("lux_min", 50);
  cfgTempOn      = prefs.getFloat("t_on", 26.0);
  cfgTempOff     = prefs.getFloat("t_off", 24.0);
  cfgTempAC      = prefs.getFloat("t_ac", 28.0);
  cfgAusenciaMin = prefs.getInt("aus_min", 5);
  prefs.end();
}

void guardarConfigNVS() {
  prefs.begin("domotica", false);
  prefs.putInt("lux_min", cfgLuxMin);
  prefs.putFloat("t_on", cfgTempOn);
  prefs.putFloat("t_off", cfgTempOff);
  prefs.putFloat("t_ac", cfgTempAC);
  prefs.putInt("aus_min", cfgAusenciaMin);
  prefs.end();
}

// ======================== CONTROL DE ACTUADORES Y LED ========================
void setColorRGB(uint8_t r, uint8_t g, uint8_t b) {
  rgb.setPixelColor(0, rgb.Color(r, g, b));
  rgb.show();
}

void aplicarSalidasReles() {
  digitalWrite(PIN_RELAY_LUZ, luzOn ? HIGH : LOW);
  digitalWrite(PIN_RELAY_FAN, fanOn ? HIGH : LOW);
  digitalWrite(PIN_RELAY_AC,  acOn  ? HIGH : LOW);
  digitalWrite(PIN_RELAY_SOL, solenoideOn ? HIGH : LOW);
}

void dispararPitidoCorto(unsigned long duracionMs = 250) {
  if (!intrusionActiva) {
    tone(PIN_BUZZER, 1800);
    beepCortoActivo = true;
    tBeepFin = millis() + duracionMs;
  }
}

void concederAcceso(const char* metodo) {
  Serial.printf("[ACCESO] Concedido via %s\n", metodo);
  intentosFallidos = 0;
  lectorBloqueado  = false;
  alarmaArmada     = false;
  intrusionActiva  = false;
  noTone(PIN_BUZZER);

  // Abrir pestillo de ventana y activar solenoide por 5 s
  servoVentana.write(0);
  solenoideOn = true;
  tSolenoideInicio = millis();
  tLedAccesoFin    = millis() + SOLENOIDE_MS;
  setColorRGB(0, 255, 0); // LED Verde
  aplicarSalidasReles();

  publicarEvento("ACCESO_AUTORIZADO", metodo);
}

void registrarIntentoFallido(const char* metodo) {
  intentosFallidos++;
  Serial.printf("[ACCESO] Denegado (%d/3) via %s\n", intentosFallidos, metodo);
  setColorRGB(255, 0, 0);
  tLedAccesoFin = millis() + 800;
  dispararPitidoCorto(300);

  if (intentosFallidos >= 3) {
    lectorBloqueado = true;
    tBloqueoInicio  = millis();
    Serial.println("[SEGURIDAD] Lector bloqueado 60 segundos");
    publicarEvento("ACCESO_NO_AUTORIZADO", metodo);
  }
}

void armarAlarma() {
  alarmaArmada    = true;
  intrusionActiva = false;
  servoVentana.write(90); // Cerrar pestillos de ventana
  setColorRGB(255, 160, 0); // LED Ámbar
  Serial.println("[SEGURIDAD] Alarma ARMADA (pestillos cerrados)");
  publicarEvento("ALARMA_ARMADA", "SISTEMA");
}

// ======================== CALLBACK MQTT (Subproceso D) ========================
void mqttCallback(char* topic, byte* payload, unsigned int length) {
  StaticJsonDocument<256> doc;
  DeserializationError err = deserializeJson(doc, payload, length);
  if (err) {
    Serial.println("[MQTT] JSON inválido descartado");
    return;
  }

  String t = sinPrefijo(String(topic));
  if (t == "casa/config") {
    if (doc.containsKey("lux_min"))      cfgLuxMin      = doc["lux_min"];
    if (doc.containsKey("t_on"))         cfgTempOn      = doc["t_on"];
    if (doc.containsKey("t_off"))        cfgTempOff     = doc["t_off"];
    if (doc.containsKey("t_ac"))         cfgTempAC      = doc["t_ac"];
    if (doc.containsKey("ausencia_min")) cfgAusenciaMin = doc["ausencia_min"];
    guardarConfigNVS();
    Serial.println("[CONFIG] Umbrales actualizados y guardados en NVS");
  } else if (t.endsWith("/cmd")) {
    ordenActuador     = doc["actuador"] | "";
    ordenAccion       = doc["accion"]   | "";
    hayOrdenPendiente = true;
  }
}

void ejecutarOrdenUsuario() {
  if (!hayOrdenPendiente) return;
  hayOrdenPendiente = false;
  Serial.printf("[CMD] Ejecutando: %s -> %s\n", ordenActuador.c_str(), ordenAccion.c_str());

  if (ordenActuador == "luz") {
    if (ordenAccion == "AUTO") {
      modoManualLuz = false;
    } else {
      modoManualLuz = true;
      luzOn = (ordenAccion == "ON");
    }
  } else if (ordenActuador == "ventilador") {
    if (ordenAccion == "AUTO") {
      modoManualClima = false;
    } else {
      modoManualClima = true;
      fanOn = (ordenAccion == "ON");
    }
  } else if (ordenActuador == "ac") {
    if (ordenAccion == "AUTO") {
      modoManualClima = false;
    } else {
      modoManualClima = true;
      bool nuevoAC = (ordenAccion == "ON");
      if (acOn && !nuevoAC) { tAcApagado = millis(); acYaTuvoCiclo = true; }
      acOn = nuevoAC;
    }
  } else if (ordenActuador == "puerta" && ordenAccion == "ABRIR") {
    concederAcceso("DASHBOARD");
  } else if (ordenActuador == "alarma") {
    if (ordenAccion == "ARMAR") armarAlarma();
    else if (ordenAccion == "DESARMAR") concederAcceso("DASHBOARD");
  }

  aplicarSalidasReles();
  // Confirmación inmediata para el dashboard (debe llegar en menos de 5 s)
  publicarEstado();
}

// ======================== LECTURA DE SENSORES ========================
int leerLuxLDR() {
  int raw = analogRead(PIN_LDR);
  // Conversión estándar del módulo wokwi-photoresistor-sensor (ADC 12 bits)
  if (raw <= 5)    return 10000;
  if (raw >= 4090) return 0;
  const float GAMMA = 0.7;
  const float RL10  = 50.0;
  float resistencia = 10000.0 * ((float)raw / (4095.0 - (float)raw));
  float lux = pow(RL10 * 1e3 * pow(10, GAMMA) / resistencia, (1.0 / GAMMA));
  return constrain((int)lux, 0, 10000);
}

bool leerDHTConReintentos() {
  for (int i = 0; i < 3; i++) {
    float t = dht.readTemperature();
    float h = dht.readHumidity();
    if (!isnan(t) && !isnan(h)) {
      ultimaTemp = t;
      ultimaHum  = h;
      fallaDHT   = false;
      return true;
    }
  }
  if (!fallaDHT) {
    fallaDHT = true;
    publicarEvento("FALLA_SENSOR", "DHT22");
  }
  return false;
}

// ======================== SUBPROCESO A: ILUMINACIÓN ========================
void subprocesoIluminacion() {
  if (modoManualLuz) return;

  // Con la alarma armada el PIR se reserva para intrusión
  if (alarmaArmada) return;

  unsigned long ausenciaMs = (unsigned long)cfgAusenciaMin * 60000UL;
  bool luzAnterior = luzOn;

  if (presenciaAct) {
    tUltimaPresencia = millis();
    // Anti-bucle: si la luz ya está encendida NO reevaluar lux
    if (!luzOn && ultimoLux < cfgLuxMin) {
      luzOn = true;
    }
  } else {
    if (luzOn && (millis() - tUltimaPresencia >= ausenciaMs)) {
      luzOn = false;
    }
  }

  if (luzOn != luzAnterior) {
    publicarEvento(luzOn ? "LUZ_ON" : "LUZ_OFF", "SUBPROCESO_A");
  }
}

// ======================== SUBPROCESO B: CLIMATIZACIÓN ========================
void subprocesoClimatizacion() {
  if (fallaDHT || modoManualClima) return;

  if (ultimaTemp > cfgTempOn) {
    fanOn = true;
    if (ultimaTemp > cfgTempAC) {
      bool compresorListo = !acYaTuvoCiclo || (millis() - tAcApagado >= AC_COMP_PROTECT_MS);
      if (!acOn && compresorListo) {
        acOn = true;
      }
    }
  } else if (ultimaTemp < cfgTempOff) {
    fanOn = false;
    if (acOn) {
      acOn = false;
      tAcApagado = millis();
      acYaTuvoCiclo = true;
    }
  }
  // Entre cfgTempOff (24°C) y cfgTempOn (26°C): zona de histéresis (mantiene estado)
}

// ======================== SUBPROCESO C: SEGURIDAD Y ACCESO ========================
void gestionarEntradasAcceso() {
  // Desbloqueo automático tras 60 segundos
  if (lectorBloqueado && (millis() - tBloqueoInicio >= BLOQUEO_LECTOR_MS)) {
    lectorBloqueado  = false;
    intentosFallidos = 0;
    Serial.println("[SEGURIDAD] Lector desbloqueado");
  }

  // Apagar solenoide tras 5 segundos
  if (solenoideOn && (millis() - tSolenoideInicio >= SOLENOIDE_MS)) {
    solenoideOn = false;
    aplicarSalidasReles();
  }

  // 1. Teclado matricial 4x3
  char tecla = keypad.getKey();
  if (tecla) {
    dispararPitidoCorto(60);
    if (lectorBloqueado) {
      Serial.println("[TECLADO] Bloqueado por intentos fallidos");
    } else if (tecla == '*') {
      if (pinBuffer.length() == 0) {
        armarAlarma();
      } else {
        pinBuffer = "";
        Serial.println("[TECLADO] PIN borrado");
      }
    } else if (tecla == '#') {
      if (pinBuffer == PIN_VALIDO) concederAcceso("TECLADO_PIN");
      else registrarIntentoFallido("TECLADO_PIN");
      pinBuffer = "";
    } else {
      pinBuffer += tecla;
      Serial.printf("[TECLADO] Digitos ingresados: %d\n", pinBuffer.length());
    }
  }

  // 2. Botón físico simulador de RFID (GPIO 25)
  static bool btnRfidPrev = HIGH;
  bool btnRfidNow = digitalRead(PIN_BTN_RFID);
  if (btnRfidPrev == HIGH && btnRfidNow == LOW && !lectorBloqueado) {
    concederAcceso("RFID_BOTON");
  }
  btnRfidPrev = btnRfidNow;

  // 3. Simulación de tarjeta RFID o comandos por Monitor Serial
  if (Serial.available()) {
    String linea = Serial.readStringUntil('\n');
    linea.trim();
    if (linea.startsWith("UID:")) {
      if (lectorBloqueado) {
        Serial.println("[RFID] Lector bloqueado");
      } else {
        String uid = linea.substring(4);
        if (uid == UID_AUTORIZADO) concederAcceso("RFID_SERIAL");
        else registrarIntentoFallido("RFID_SERIAL");
      }
    } else if (linea.equalsIgnoreCase("ARM")) {
      armarAlarma();
    }
  }
}

void subprocesoSeguridad() {
  // MC-38 con pull-up 10k externo: HIGH = puerta abierta, LOW = puerta cerrada
  puertaAbierta = (digitalRead(PIN_MC38) == HIGH);
  // SW-420 con pull-up 10k externo: LOW = botón pulsado (vibración)
  vibracionDet  = (digitalRead(PIN_SW420) == LOW);

  if (alarmaArmada) {
    servoVentana.write(90);
    if (!intrusionActiva && (puertaAbierta || vibracionDet || presenciaAct)) {
      intrusionActiva = true;
      const char* origen = puertaAbierta ? "MC-38" : (vibracionDet ? "SW-420" : "PIR");
      Serial.printf("[ALERTA] ¡INTRUSION DETECTADA POR %s!\n", origen);
      publicarEvento("INTRUSION", origen);
    }
  }
}

void actualizarIndicadores() {
  // Detener pitido corto cuando expire
  if (beepCortoActivo && millis() >= tBeepFin) {
    beepCortoActivo = false;
    if (!intrusionActiva) noTone(PIN_BUZZER);
  }

  // Parpadeo rojo + sirena si hay intrusión activa
  if (intrusionActiva) {
    if (millis() - tUltimoParpadeo >= 300) {
      tUltimoParpadeo = millis();
      estadoParpadeo = !estadoParpadeo;
      setColorRGB(estadoParpadeo ? 255 : 0, 0, 0);
      if (estadoParpadeo) tone(PIN_BUZZER, 2200);
      else tone(PIN_BUZZER, 1500);
    }
    return;
  }

  // Mantener LED temporal de acceso/error si corresponde
  if (millis() < tLedAccesoFin) return;

  if (alarmaArmada) setColorRGB(255, 160, 0); // Ámbar
  else              setColorRGB(0, 40, 0);    // Verde tenue (reposo)
}

// ======================== COMUNICACIÓN MQTT Y LCD ========================
void gestionarRedYMQTT() {
  if (WiFi.status() != WL_CONNECTED) {
    if (millis() - tUltimoIntentoRed >= backoffRedMs) {
      tUltimoIntentoRed = millis();
      Serial.println("[WIFI] Reintentando conexion...");
      WiFi.begin(WIFI_SSID, WIFI_PASS, WIFI_CHAN);
      backoffRedMs = min(backoffRedMs * 2, 60000UL);
    }
    return;
  }

  if (!mqtt.connected()) {
    if (millis() - tUltimoIntentoRed >= backoffRedMs) {
      tUltimoIntentoRed = millis();
      String clientId = "ESP32-ACO941-" + String((uint32_t)ESP.getEfuseMac(), HEX);
      // Conexión con Last Will and Testament (LWT) retenido
      if (mqtt.connect(clientId.c_str(), TOPIC_STATUS.c_str(), 1, true, "offline")) {
        Serial.printf("[MQTT] Conectado a %s con prefijo '%s'\n", MQTT_HOST, MQTT_PREFIX);
        backoffRedMs = 5000;
        mqtt.publish(TOPIC_STATUS.c_str(), "online", true);
        mqtt.subscribe(TOPIC_CMD_SUB.c_str(), 1);
        mqtt.subscribe(TOPIC_CONFIG_SUB.c_str(), 1);
        vaciarBufferOffline();
      } else {
        Serial.printf("[MQTT] Fallo rc=%d. Modo local autonomo.\n", mqtt.state());
        backoffRedMs = min(backoffRedMs * 2, 60000UL);
      }
    }
  } else {
    mqtt.loop();
  }
}

void publicarEstado() {
  StaticJsonDocument<192> est;
  est["luz"]        = luzOn ? "ON" : "OFF";
  est["ventilador"] = fanOn ? "ON" : "OFF";
  est["ac"]         = acOn  ? "ON" : "OFF";
  est["alarma"]     = intrusionActiva ? "INTRUSION" : (alarmaArmada ? "ARMADA" : "DESARMADA");
  String sEst;
  serializeJson(est, sEst);
  publicarConRespaldo(TOPIC_ESTADO, sEst, false);
}

void publicarTelemetriaYEstado() {
  StaticJsonDocument<192> tel;
  tel["temp"]      = round(ultimaTemp * 10.0) / 10.0;
  tel["hum"]       = (int)round(ultimaHum);
  tel["lux"]       = ultimoLux;
  tel["presencia"] = presenciaAct;
  String sTel;
  serializeJson(tel, sTel);
  publicarConRespaldo(TOPIC_TELEMETRIA, sTel, false);
  publicarEstado();
}

void actualizarLCD() {
  lcd.setCursor(0, 0);
  if (fallaDHT) {
    lcd.print("DHT22 FALLA!    ");
  } else {
    char l1[17];
    snprintf(l1, sizeof(l1), "T:%4.1fC H:%2d%%   ", ultimaTemp, (int)round(ultimaHum));
    lcd.print(l1);
  }

  lcd.setCursor(0, 1);
  const char* st = intrusionActiva ? "INTRU" : (alarmaArmada ? "ARMAD" : "OK   ");
  char l2[17];
  snprintf(l2, sizeof(l2), "L:%4dlx %s %s", min(ultimoLux, 9999), st, mqtt.connected() ? "M" : "-");
  lcd.print(l2);
}

// ======================== SETUP Y LOOP PRINCIPAL ========================
void setup() {
  Serial.begin(115200);
  Serial.println("\n=== Sistema Domotico ESP32 - ACO941 Grupo 3 ===");

  // 1. Inicializar pines y relés en estado seguro (OFF)
  pinMode(PIN_PIR, INPUT);
  pinMode(PIN_LDR, INPUT);
  pinMode(PIN_MC38, INPUT);
  pinMode(PIN_SW420, INPUT);
  pinMode(PIN_BTN_RFID, INPUT_PULLUP);

  pinMode(PIN_RELAY_LUZ, OUTPUT);
  pinMode(PIN_RELAY_FAN, OUTPUT);
  pinMode(PIN_RELAY_AC,  OUTPUT);
  pinMode(PIN_RELAY_SOL, OUTPUT);
  pinMode(PIN_BUZZER,    OUTPUT);
  aplicarSalidasReles();

  // 2. Inicializar periféricos I2C, DHT, Servo y NeoPixel
  Wire.begin(PIN_SDA, PIN_SCL);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0); lcd.print("Domotica ACO941 ");
  lcd.setCursor(0, 1); lcd.print("Iniciando ESP32 ");

  dht.begin();
  servoVentana.attach(PIN_SERVO);
  servoVentana.write(0); // Ventana destrabada inicialmente
  rgb.begin();
  rgb.setBrightness(80);
  setColorRGB(0, 0, 255); // Azul durante arranque

  // 3. Cargar umbrales desde NVS
  cargarConfigNVS();

  // 4. Tópicos con el prefijo del grupo
  TOPIC_TELEMETRIA = conPrefijo("casa/sala/telemetria");
  TOPIC_ESTADO     = conPrefijo("casa/sala/estado");
  TOPIC_EVENTO     = conPrefijo("casa/sala/evento");
  TOPIC_STATUS     = conPrefijo("casa/esp32/status");
  TOPIC_CMD_SUB    = conPrefijo("casa/+/cmd");
  TOPIC_CONFIG_SUB = conPrefijo("casa/config");
  Serial.printf("[MQTT] Publicando en %s\n", TOPIC_TELEMETRIA.c_str());

  // 5. Iniciar Wi-Fi (canal 6 para conexión instantánea en Wokwi) y MQTT
  WiFi.begin(WIFI_SSID, WIFI_PASS, WIFI_CHAN);
  tUltimoIntentoRed = millis(); // no repetir WiFi.begin() mientras conecta
  mqtt.setServer(MQTT_HOST, MQTT_PORT);
  mqtt.setCallback(mqttCallback);

  tUltimaPresencia = millis();
}

void loop() {
  // Tareas de respuesta inmediata (sin bloqueos)
  gestionarRedYMQTT();
  gestionarEntradasAcceso();
  ejecutarOrdenUsuario();
  actualizarIndicadores();

  // Detección inmediata de vibración (pulsador momentáneo)
  if (alarmaArmada && !intrusionActiva && digitalRead(PIN_SW420) == LOW) {
    subprocesoSeguridad();
  }

  // Ciclo principal de muestreo cada 2 segundos
  if (millis() - tUltimoCiclo >= CICLO_MUESTREO_MS) {
    tUltimoCiclo = millis();

    // Leer sensores
    presenciaAct = (digitalRead(PIN_PIR) == HIGH);
    ultimoLux    = leerLuxLDR();
    leerDHTConReintentos();

    // Ejecutar subprocesos A, B y C
    subprocesoIluminacion();
    subprocesoClimatizacion();
    subprocesoSeguridad();
    aplicarSalidasReles();

    // Subproceso D y monitoreo local
    publicarTelemetriaYEstado();
    actualizarLCD();
  }
}
