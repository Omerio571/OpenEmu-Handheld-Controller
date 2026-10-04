# Hardware

This directory contains original mechanical and electronics design work.

## Mechanical Files

Each physical subsystem should keep:

- `source/` — editable CAD source
- `printable/` — `.3MF` / `.STL` exports
- `interchange/` — `.STEP`, `.OBJ`, and similar exchange formats where useful

## PCB Files

PCB designs are separated by subsystem:

- `controller/`
- `power/`
- `display/`

## Revision Naming

Use:

```text
part-name-rXX.ext
```

Do not overwrite older meaningful revisions after they have been released. Add a new revision instead.
