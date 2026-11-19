# Plan de trabajo · Etapa 4

Página completa con checklist, Gantt y pruebas: https://claude.ai/artifact/N8TzJe5JLTb7saGGw5YdTb (privada; pedir acceso a Francisco).

## Responsables

| Persona | Rol | Rama |
|---|---|---|
| Francisco | Único revisor y auditor, GitHub, documentación, simulador Python, guion | `docs/...` |
| Integrante 2 | Servidor, Mosquitto + puente, bind9, servicios systemd, script Bash | `feat/servidor` |
| Integrante 3 | Subprocesos A y B (iluminación y clima) | `feat/sub-ab` |
| Integrante 4 | Subproceso C (seguridad y acceso) | `feat/sub-c` |
| Integrante 5 | Subproceso E (Node-RED, dashboard, MongoDB, PostgreSQL, Grafana) | `feat/sub-e` |
| Integrante 6 | Subproceso D (comunicación), circuito Wokwi, unión del firmware | `feat/sub-d` |

## Calendario (noviembre 2026)

| Fecha | Qué |
|---|---|
| Mié 18 – Jue 19 | Arranque, contrato MQTT, prefijo del puente, auditoría F1–F3, repo |
| Jue 19 – Dom 22 | Desarrollo en paralelo por subproceso; puente MQTT listo el 20 |
| Dom 22 – Lun 23 | Integración; etiqueta `v0.9-integracion` |
| Mar 24 | Pruebas P-01 a P-10 (componentes y puente) |
| Mié 25 | Pruebas P-11 a P-19 (integración y subprocesos) |
| Jue 26 | Pruebas P-20 a P-27 (robustez y regresión); etiqueta `v1.0-entrega` |
| Vie 27 | Auditoría final, documento, README, video y ensayo |
| Sáb 28 | Entrega y defensa |

## Merge diario

Francisco revisa y hace merge de los Pull Requests todos los días a las 9 p. m.
Un PR que no pase la plantilla de revisión vuelve con comentarios.
