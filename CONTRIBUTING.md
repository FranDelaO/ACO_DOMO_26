# Cómo trabajar en este repo

## Una sola vez, al clonar

```bash
git clone <URL-del-repo>
cd domotica-aco941
git config core.hooksPath .githooks          # activa el bloqueo de commits en main
cp firmware/esp32-domotica/config.example.h firmware/esp32-domotica/config.h   # y llena tus datos
```

En Windows usa Git Bash para estos comandos.

## Cada vez que empiezas a trabajar

```bash
git switch main
git pull                                   # trae lo último aprobado
git switch feat/sub-ab                     # tu rama (créala la primera vez con: git switch -c feat/sub-ab)
git merge main                             # pone tu rama al día
```

## Mientras trabajas

```bash
git add <archivos>
git commit -m "feat: lectura DHT22 cada 5 s"
git push -u origin feat/sub-ab             # solo la primera vez lleva -u
```

## Cuando terminas una parte

1. En GitHub: **Compare & pull request** → base `DESARROLLO` ← tu rama.
2. Llena la plantilla (pruebas, capturas, criterio de la rúbrica).
3. Espera la revisión de Francisco. Si pide cambios, haz nuevos commits en la misma rama: el PR se actualiza solo.

## Si usas IA para programar

El asistente lee `AGENTS.md` (o `CLAUDE.md` / `GEMINI.md` / `.github/copilot-instructions.md`, que apuntan a lo mismo).
Igual revisa lo que propone: tú respondes por el código en la defensa y en el test individual.
Si la IA quiere tocar archivos de otro subproceso o cambiar el contrato MQTT, no lo aceptes.

## Si algo sale mal

- “No se hacen commits en main”: estás en `entrega` o `DESARROLLO`. Ejecuta `git switch -c feat/<tu-rama>` y vuelve a hacer el commit.
- Conflictos al hacer `git merge main`: pide ayuda en el grupo antes de resolverlos a ciegas.
