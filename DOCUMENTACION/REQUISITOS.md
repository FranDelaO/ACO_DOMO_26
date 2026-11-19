# Requisitos de la Etapa 4

Fuentes: Ruta de aprendizaje ACO941 ciclo 02-2026 (Fase 4 y su rúbrica) y documento de la Fase 2 del Grupo 3.
Si algo de este archivo choca con otro documento, manda la rúbrica y luego este archivo.

## 1. Lo que pide la asignatura (Fase 4, 35 % del proyecto)

1. Integrar **al menos 4 sensores y 4 actuadores** con ESP32.
2. Comunicación **MQTT** en tiempo real (publicar **y** suscribirse).
3. **Aplicación web** (dashboard) para ver el estado y controlar, **desplegada en el servidor de la Fase 3**.
4. **Simulación o prototipo físico** que demuestre el sistema completo.
5. **Evidencias**: capturas, porcentaje de avance y código en un **repositorio Git** bien organizado.
6. **Presentación final** que integre las cuatro fases.

Entregables: sistema domótico funcional · dashboard desplegado · repositorio Git · evidencias y presentación final.
Nota: 75 % grupal (rúbrica) + 25 % test individual.

## 2. Rúbrica (meta: Destacado 8–8.99; Estratégico 9–10 donde se pueda)

| Criterio | Destacado | Estratégico (meta) | Baja a Básico si… |
|---|---|---|---|
| C1 Hardware y programación | 4 sensores y 4 actuadores integrados y estables | Programación eficiente y escalable con componentes adicionales | Faltan sensores/actuadores o funcionan parcialmente |
| C2 MQTT | Publica y recibe correctamente, integrado con el dashboard | Robusto, con manejo de errores, integrado con el servidor F3 | Solo publica o solo suscribe |
| C3 Dashboard en infraestructura F3 | Completo y funcional en el servidor web de la F3 | Robusto y claro, íntegramente en infraestructura propia | Usa una plataforma externa |
| C4 Simulación o prototipo | Operativo sin errores relevantes | Robusto y con funciones adicionales | Parcial o inestable |
| C5 Evidencias y repositorio | Portada, capturas, % logrado y código completos, repo organizado | README completo e historial de commits que permite trazar todo | Falta código o capturas |
| C6 Presentación final | Clara, muestra el funcionamiento completo | Explica proceso y resultados e integra las 4 fases | Básica o poco clara |

## 3. Diseño aprobado en la Fase 2 (implementarlo tal cual)

Simulador: **Wokwi** (soporta ESP32 y WiFi con MQTT). Microcontrolador: **ESP32**.

### Subproceso A · Iluminación
- Sensores: PIR HC-SR501 (o LD2410), BH1750 en lux (o LDR por ADC de 12 bits).
- Actuador: relé de iluminación.
- Regla: luz **ON** si hay presencia y `lux < lux_min`; **OFF** tras `ausencia_min` minutos sin presencia.

### Subproceso B · Climatización
- Sensor: DHT22 (temperatura y humedad).
- Actuadores: relé 10 A (ventilador) y SSR (aire acondicionado). En la demo, con LED o carga de 5 V.
- Regla con histéresis: ventilador **ON** a `t_on` (26 °C) y **OFF** a `t_off` (24 °C).

### Subproceso C · Seguridad y control de acceso
- Sensores: magnético MC-38, vibración SW-420, PIR (alarma armada = intrusión; desarmada = iluminación), lector RFID RC522 (SPI) y teclado matricial (PIN).
- Actuadores: cerradura solenoide (relé), servo del pestillo de ventana, sirena/buzzer, LED de estado.
- Eventos: `INTRUSION`, `ACCESO`, `FALLA`.
- Si un componente no existe en Wokwi, se representa con botón, interruptor o potenciómetro **y se documenta**.

### Subproceso D · Comunicación MQTT y pérdida de conexión
- WiFi con reintentos de espera creciente (5 s → 60 s) **sin bloquear** A, B y C.
- MQTT con usuario/contraseña (broker local) y **Last Will** en `casa/esp32/status` = `offline` (retenido).
- Al conectar: publicar `online`, suscribirse a `casa/<zona>/cmd` y `casa/config`.
- Sin servidor: guardar lecturas y eventos en un **buffer local** (cola circular) y enviarlos en orden al reconectar.
- `casa/config` se guarda en **NVS** (`Preferences`) y sobrevive a reinicios.
- Host, puerto, usuario, contraseña y `MQTT_PREFIJO` salen de `config.h`.
- Botón de prueba que corta el WiFi 2 minutos (para la prueba P-20).

### Subproceso E · Servidor (Node-RED)
- Recibe por Mosquitto local, **valida JSON y rangos**; descarta y registra mensajes inválidos.
- MongoDB: histórico de telemetría, eventos, alertas y acciones (usuario, orden, resultado).
- PostgreSQL: usuarios y tarjetas RFID; copia de la telemetría para Grafana (Grafana no lee MongoDB gratis).
- Alertas: T > 32 °C, falla de sensor, intrusión, ESP32 offline. Las críticas en rojo con sonido hasta que el usuario las reconozca.
- Órdenes: requieren sesión válida; se publican en `casa/<zona>/cmd` con QoS 1 y se espera confirmación en `estado` **5 s**; si no llega, mostrar “orden no confirmada”.
- Grafana en `:3000` con el historial.

### Servidor (Fase 3)
- VM Linux en VirtualBox, red en **modo puente**, discos de 500 GB y 250 GB con 2 particiones cada uno.
- Servicios **systemd** (sin Docker), todos con `systemctl enable`: Mosquitto, Node-RED, MongoDB, PostgreSQL, Grafana, bind9.
- DNS: `domotica.local` (y `grafana.domotica.local`).
- Mosquitto: `allow_anonymous false` + puente hacia `broker.hivemq.com` (`topic casa/# both 1 "" <prefijo>/`).

## 4. Contrato MQTT

Ver la tabla en `AGENTS.md` §4.
- Zonas (propuesta, confirmar con Francisco): `sala` (A y B) y `entrada` (C).
- Campos extra de `estado` para C (propuesta): `"cerradura": "ABIERTA|CERRADA"`, `"pestillo": "ABIERTO|CERRADO"`, `"sirena": "ON|OFF"`.
- Valores de `accion`: `"ON"`, `"OFF"`; para la alarma: `"ARMAR"`, `"DESARMAR"`.

## 5. Criterios de aceptación (pruebas)

| ID | Prueba | Se acepta si… |
|---|---|---|
| P-01 | Servicios tras reiniciar la VM | `verificar_servicios.sh` muestra todo `active` |
| P-02 | DNS | `nslookup domotica.local` responde la IP de la VM |
| P-03 | Seguridad del broker local | Conexión sin usuario rechazada |
| P-04 | Puente MQTT | Mensajes pasan en ambos sentidos, sin prefijo del lado local |
| P-05 | DHT22 | 50 lecturas en 15–40 °C y 20–95 %, sin NaN |
| P-06 | PIR | `presencia` pasa a true y luego a false |
| P-07 | Luz | `lux` cambia y cruza `lux_min` |
| P-08 | Sensores de seguridad | Evento `INTRUSION` con sensor y hora |
| P-09 | Control de acceso | Válido abre solenoide; inválido niega y genera evento |
| P-10 | Actuadores | Todos responden a `cmd` y publican estado |
| P-11 | Latencia telemetría → dashboard | Promedio < 3 s |
| P-12 | Orden desde el dashboard | Confirmación < 5 s y control actualizado |
| P-13 | Orden sin respuesta | Muestra “orden no confirmada” |
| P-14 | Subproceso A | ON con presencia y lux < 50; OFF tras ausencia |
| P-15 | Subproceso B | ON a 26 °C, OFF a 24 °C |
| P-16 | Subproceso C con servidor | Sirena, alerta crítica y registro en MongoDB |
| P-17 | Configuración remota | Se aplica y persiste tras reinicio |
| P-18 | Persistencia | MongoDB con histórico/eventos/acciones; Grafana grafica |
| P-19 | Acceso móvil y sesión | Pide usuario; con sesión controla un actuador |
| P-20 | Pérdida de WiFi | A, B y C siguen; buffer se reenvía en orden |
| P-21 | Reinicio del broker local | Puente y Node-RED se reconectan solos |
| P-22 | Corte de internet de la VM | Puente se reconecta y los datos vuelven |
| P-23 | Last Will | “Dispositivo desconectado” en ≤ 30 s |
| P-24 | Reinicio de la VM | Todo vuelve sin comandos manuales |
| P-25 | Mensaje inválido | Se descarta y registra; el dashboard no se rompe |
| P-26 | Operación continua | 60 min sin caídas ni huecos |
| P-27 | Regresión | P-05 a P-19 aprobadas tras correcciones |

Evidencia de cada prueba aprobada: `docs/evidencias/P-xx_descripcion.png` (o `.mp4`).
