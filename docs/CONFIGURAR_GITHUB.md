# Configuración del repo en GitHub (solo Francisco, una vez)

## 0. Primer commit (antes de activar los ganchos)
Crea el repo vacío en GitHub (`domotica-aco941`, sin README) y sube este kit directo a `main`.
Es el único commit que va directo a `main`; por eso se hace antes de `git config core.hooksPath`.

```bash
cd domotica-aco941
git init -b main
git add -A
git commit -m "docs: estructura inicial, reglas del equipo y requisitos"
git remote add origin https://github.com/<tu-usuario>/domotica-aco941.git
git push -u origin main
git config core.hooksPath .githooks      # desde aquí, tus cambios también van en ramas docs/...
```

## 1. Visibilidad
La protección de ramas es gratis en **repos públicos**. En un repo **privado** necesitas GitHub Pro,
que viene gratis con el GitHub Student Developer Pack (education.github.com/pack).
Si el repo es público, revisa que no haya contraseñas, IPs ni el prefijo del puente (ya están en `.gitignore`).

## 2. Colaboradores
Settings → Collaborators → Add people. Da rol **Write** a los 5 compañeros (no Admin).

## 3. Proteger `main` (ruleset)
Settings → Rules → Rulesets → **New branch ruleset**:
- Nombre: `proteger-main` · Enforcement status: **Active**
- Bypass list: agrégate a ti (Repository admin), para poder fusionar tus propios PR de documentación
- Target branches: **Include default branch**
- Marca:
  - **Restrict deletions**
  - **Block force pushes**
  - **Require a pull request before merging** → Required approvals: **1** → **Require review from Code Owners**
- Create.

Resultado: nadie puede subir directo a `main`; todo entra por PR y necesita tu aprobación (CODEOWNERS te asigna todo).

## 4. CODEOWNERS
Edita `.github/CODEOWNERS` y cambia `TU_USUARIO_GITHUB` por tu usuario.

## 5. Etiquetas e issues
Issues → Labels: crea `tarea`, `bug`, `sub-ab`, `sub-c`, `sub-d`, `sub-e`, `servidor`, `docs`.
Crea un issue por subtarea (puedes pegar el checklist en Markdown que exporta la página del plan).

## 6. Merge
En cada PR usa **Create a merge commit** para conservar cada commit en el historial (cuenta en la rúbrica). No uses rebase ni force push.
