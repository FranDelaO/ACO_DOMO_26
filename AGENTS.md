# AGENTS.md — Instrucciones para asistentes de IA (y personas)

Proyecto: **Sistema domótico IoT con ESP32** · ACO941 Arquitectura de Computadoras · UDB · Grupo 3 · Etapa 4.
Entrega y defensa: **sábado 28 de noviembre de 2026**.

Este archivo lo leen automáticamente Codex, Cursor, GitHub Copilot, Gemini CLI y Claude Code (vía `CLAUDE.md`).
Si eres un asistente de IA: **lee este archivo completo y `docs/REQUISITOS.md` antes de escribir código.**

---

## 1. Reglas obligatorias de Git (no negociables)

1. **Nunca hagas commit ni push en `Entrega` o `DESAROLLO` .** Todo cambio va en una rama y entra por Pull Request.
2. Antes de cambiar cualquier archivo, revisa la rama actual con `git branch --show-current`.
   Si es `Entrega` o `DESAROLLO`, crea o cambia a la rama del subproceso (tabla de la sección 3):
   ```bash
   git switch main && git pull
   git switch -c feat/sub-ab      # o la rama que te corresponda
   ```
3. Verifica que los ganchos del repo estén activos: `git config core.hooksPath` debe responder `.githooks`.
   Si no, ejecuta `git config core.hooksPath .githooks`.
4. **Prohibido** `git push --force`, `git commit --no-verify`, `git reset --hard` sobre trabajo ajeno, y borrar ramas de otros.
5. Commits pequeños con prefijo: `feat:`, `fix:`, `docs:`, `test:`, `refactor:`. Ejemplo: `feat: lectura DHT22 cada 5 s`.
6. **Nunca subas secretos:** contraseñas de WiFi, del broker MQTT, IP de la VM ni el prefijo del puente.
   Van solo en `firmware/esp32-domotica/config.h`, que está en `.gitignore`. Usa `config.example.h` como plantilla.
7. Al terminar, abre un Pull Request hacia `main` con la plantilla del repo. **Solo Francisco revisa y aprueba.**

## 2. Qué se construye

Un sistema domótico con ESP32 simulado en **Wokwi**, que se comunica por **MQTT** con un **servidor Linux virtual**
(el de la Fase 3) donde corren, como servicios systemd (sin Docker): Mosquitto, Node-RED + Dashboard 2.0,
MongoDB, PostgreSQL, Grafana y bind9 (`domotica.local`).

Wokwi no llega a la VM directamente: el ESP32 publica en `broker.hivemq.com` con un prefijo secreto del grupo
y Mosquitto de la VM tiene un **puente** que copia `casa/#` en ambos sentidos quitando el prefijo.
Node-RED solo usa el broker local.

Requisitos completos, rúbrica y criterios de aceptación: **`docs/REQUISITOS.md`**.
Ruta de trabajo, responsables y fechas: **`docs/PLAN.md`**.

## 3. Quién toca qué (no edites fuera de tu área sin avisar en el PR)

| Rama | Subproceso | Archivos propios |
|---|---|---|
| `feat/sub-ab` | A Iluminación + B Climatización | `firmware/esp32-domotica/iluminacion.*`, `clima.*` |
| `feat/sub-c` | C Seguridad y acceso | `firmware/esp32-domotica/seguridad.*` |
| `feat/sub-d` | D Comunicación MQTT + integración | `firmware/esp32-domotica/esp32-domotica.ino`, `comunicacion.*`, `config.example.h`, `simulacion/wokwi/` |
| `feat/sub-e` | E Node-RED, dashboard y datos | `server/node-red/`, `server/grafana/`, `server/db/` |
| `feat/servidor` | Servidor y puente MQTT | `server/mosquitto/`, `server/dns/`, `scripts/verificar_servicios.sh` |
| `docs/...` | Documentación (Francisco) | `docs/`, `README.md` |

Si tu cambio necesita modificar un archivo de otro subproceso, **no lo hagas**: descríbelo en el PR para que lo coordine Francisco.

## 4. Contrato MQTT (no cambiar sin aprobación)

Definido en la Fase 2. Todos los mensajes son JSON salvo `status`.

| Sentido (ESP32) | Tópico | Ejemplo |
|---|---|---|
| Publica | `casa/<zona>/telemetria` | `{"temp": 27.4, "hum": 61, "lux": 35, "presencia": true}` |
| Publica | `casa/<zona>/estado` | `{"luz": "ON", "ventilador": "OFF", "ac": "OFF", "alarma": "ARMADA"}` |
| Publica | `casa/<zona>/evento` | `{"tipo": "INTRUSION", "sensor": "MC-38", "hora": "21:14:05"}` |
| Publica | `casa/esp32/status` | `online` / `offline` (Last Will, retenido) |
| Suscribe | `casa/<zona>/cmd` | `{"actuador": "luz", "accion": "ON"}` (QoS 1) |
| Suscribe | `casa/config` | `{"lux_min": 50, "t_on": 26, "t_off": 24, "ausencia_min": 5}` |

- En Wokwi, el firmware antepone `MQTT_PREFIJO` (de `config.h`) a cada tópico. Node-RED **nunca** usa el prefijo.
- Zonas y campos extra: ver `docs/REQUISITOS.md` §4. Si falta algo, pregunta; no inventes tópicos nuevos.

## 5. Reglas de código

**Firmware (ESP32, Arduino core):**
- Un archivo `.h/.cpp` por subproceso con funciones `xxx_setup()` y `xxx_loop()`; el `.ino` solo llama a esas funciones.
- **No uses `delay()`** en el ciclo principal: temporiza con `millis()`. La lógica local debe seguir funcionando sin red.
- Librerías: `WiFi.h`, `PubSubClient`, `ArduinoJson`, `DHT sensor library`, `Keypad`, `ESP32Servo`, `Preferences` (NVS).
- Pines y umbrales como constantes con nombre; nunca números sueltos.
- Lecturas inválidas (NaN, fuera de rango) → publicar evento `FALLA` y no actuar con ese dato.
- Comentarios en español, breves, explicando el *por qué*.

**Node-RED:** exporta el flujo a `server/node-red/flows.json` tras cada cambio. Valida JSON y rangos antes de guardar.
Credenciales con variables de entorno o el gestor de credenciales de Node-RED, nunca dentro del flujo exportado.

**Servidor:** configuración real en `server/` como copia de referencia; sin contraseñas (usa `*.example`).

## 6. Antes de abrir el Pull Request

- [ ] Compila (Arduino IDE / arduino-cli con placa *ESP32 Dev Module*) o el flujo importa sin errores.
- [ ] Probado en Wokwi o con `scripts/simulador_sensores.py`; adjunta captura o video corto.
- [ ] Respeta el contrato MQTT de la sección 4.
- [ ] Sin secretos en el diff (`git diff --cached`).
- [ ] Actualizaste la tabla de pines o la documentación de tu subproceso en `docs/`.
- [ ] Indicas en el PR qué criterio de la rúbrica (C1–C6) y qué pruebas (P-xx) cubre.

## 7. Qué NO hacer

- No cambiar a Docker, a otro broker local, ni a otra plataforma de dashboard: el dashboard **debe** estar en la VM de la Fase 3 (si no, la rúbrica baja a Básico).
- No renombrar tópicos, carpetas ni ramas acordadas.
- No borrar ni reescribir el historial de commits: el historial cuenta para la nota.
- No agregar dependencias pesadas sin justificarlo en el PR.
