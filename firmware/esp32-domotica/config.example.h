// Copia este archivo como config.h y llena tus datos. config.h NO se sube a GitHub.
#pragma once

// --- WiFi ---
// En Wokwi: "Wokwi-GUEST" sin contraseña. En ESP32 fisico: la red de la demo.
#define WIFI_SSID      "Wokwi-GUEST"
#define WIFI_PASS      ""

// --- MQTT ---
// Wokwi:        broker publico + prefijo secreto del grupo (lo da Integrante 2).
// ESP32 fisico: "domotica.local", puerto 1883, usuario y contrasena del broker local, prefijo "".
#define MQTT_HOST      "broker.hivemq.com"
#define MQTT_PORT      1883
#define MQTT_USER      ""
#define MQTT_PASS      ""
#define MQTT_PREFIJO   "PEDIR_A_INTEGRANTE_2/"   // termina en "/"; vacio "" con el broker local
#define MQTT_CLIENT_ID "esp32-grupo3"
