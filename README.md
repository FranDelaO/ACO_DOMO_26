# Sistema Domótico Inteligente

Proyecto de diseño e implementación de un sistema de domótica para el control automático, monitoreo y seguridad de una vivienda, desarrollado para la asignatura **Arquitectura de Computadoras (ACO941)** de la **Universidad Don Bosco (El Salvador)**.

## Base del Desarrollo

El documento **FASE II: Diseño conceptual del sistema domótico** constituye la base fundamental para el desarrollo de este proyecto. En él se establecen los requerimientos arquitectónicos, la selección del simulador y microcontrolador, la lógica de los subprocesos de automatización (diagramas de flujo), el protocolo de comunicación y la arquitectura del servidor que guían la implementación de las siguientes fases.

---

## Arquitectura General

El sistema se divide en dos capas principales comunicadas mediante **MQTT** sobre Wi-Fi (2.4 GHz):

* **Capa de Dispositivos (Vivienda):** Centralizada en un microcontrolador **ESP32** (simulado en **Wokwi**), encargado de la lectura de sensores, ejecución de lógica local autónoma y control de actuadores.
* **Servidor Virtual Linux:** Infraestructura encargada del procesamiento, almacenamiento y visualización mediante **Mosquitto** (Broker MQTT), **Node-RED** (reglas y dashboard), **PostgreSQL** (usuarios y RFID), **MongoDB** (eventos y alertas), **Grafana** (historial) y **DNS bind9** (`domotica.local`).

---

## Subprocesos del Sistema

1. **Control de Iluminación (Subproceso A):** Detección de presencia (PIR HC-SR501 / radar mmWave LD2410) y nivel de luz natural (LDR / BH1750) para accionar luminarias mediante relé optoacoplador.
2. **Control de Climatización (Subproceso B):** Monitoreo de temperatura y humedad (DHT22) con control de ventilación (relé mecánico 10A) y aire acondicionado (Relé de Estado Sólido SSR) bajo lógica de histéresis.
3. **Seguridad y Control de Acceso (Subproceso C):** Monitoreo de puertas/ventanas (MC-38), vibración (SW-420) y movimiento (PIR), junto con autenticación por RFID (RC522) o teclado matricial para accionar cerradura solenoide y sirena/buzzer.

---

## Equipo de Proyecto — Grupo 3

**Docente:** Mg. Denis Altuve Santamaria  
**Institución:** Universidad Don Bosco — UDB Virtual

| # | Nombre completo | Carnet |
| :-: | :--- | :---: |
| 1 | Francisco Adalberto De la O González | DG200722 |
| 2 | Mauricio Armando Duran Cortez | DC150312 |
| 3 | José Ángel García Gómez | GG253638 |
| 4 | Samuel Isaac Hernández Rosa | HR090176 |
| 5 | Biron Edenilson Ramiréz Mendoza | RM201524 |
| 6 | Hollman Alexander Rubio León | RL201130 |
