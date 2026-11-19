# Sistema domótico IoT con ESP32 · Grupo 3

Universidad Don Bosco · ACO941 Arquitectura de Computadoras · Ciclo 02-2026
Docente: Mg. Denis Altuve Santamaria

> Estado: en desarrollo (Etapa 4). Este README se completa el 27 de noviembre con capturas, porcentaje logrado y créditos.

## Qué es
Sistema de domótica para una vivienda: iluminación, climatización y seguridad con control de acceso, controlado por un ESP32
(simulado en Wokwi) que se comunica por MQTT con un servidor Linux propio, donde corre el dashboard de monitoreo y control.

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

## Arquitectura
ESP32 (Wokwi) → broker público → **puente Mosquitto** → servidor virtual Linux (Fase 3): Mosquitto, Node-RED + Dashboard 2.0,
MongoDB, PostgreSQL, Grafana, bind9 (`domotica.local`) → navegador o celular del usuario.

Diagramas de bloques y de flujo: `docs/diagramas/`.

## Fases del proyecto
| Fase | Contenido | Documento |
|---|---|---|
| 1 | Presupuesto de la infraestructura | `docs/fase1/` |
| 2 | Diseño conceptual del sistema domótico | `docs/fase2/` |
| 3 | Implementación del servidor virtual | `docs/fase3/` |
| 4 | Implementación y despliegue del sistema | `docs/fase4/` |

## Cómo ejecutarlo
1. Servidor: ver `server/` y ejecutar `scripts/verificar_servicios.sh` en la VM.
2. Firmware: copiar `config.example.h` como `config.h`, abrir el proyecto de `simulacion/wokwi/` y correr la simulación.
3. Dashboard: `http://domotica.local` desde un equipo de la misma red.

## Para el equipo
- Reglas de trabajo y para asistentes de IA: [`AGENTS.md`](AGENTS.md)
- Requisitos y criterios de aceptación: [`docs/REQUISITOS.md`](docs/REQUISITOS.md)
- Plan y responsables: [`docs/PLAN.md`](docs/PLAN.md)
- Flujo de Git paso a paso: [`CONTRIBUTING.md`](CONTRIBUTING.md)

## Porcentaje logrado
_Se completa con la tabla de requisitos al final de las pruebas._


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
