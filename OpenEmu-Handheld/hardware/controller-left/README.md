# Left Controller

## Status

Current working revision: **r12**

This is currently the most developed mechanical subsystem.

The left-side development is being treated as an integration problem, not only a fit test. A revision may be replaced even when it functions if it introduces alignment, mechanical stress, cable-routing, or later-assembly problems.

## Revision Summary

### r10

File:

```text
printable/left-controller-r10.3mf
```

Notes:

- Functionally successful for the intended button/wire arrangement.
- Demonstrated that the basic geometry worked.

### r11

File:

```text
printable/left-controller-r11.3mf
```

Notes:

- Increased dimensions by roughly 5% to improve clearance.
- Functioned, but the larger geometry introduced alignment issues.
- Misalignment could transfer unwanted tension into installed components.
- Retained for revision history rather than recommended as the current design.

### r12 — Current

Files:

```text
interchange/left-controller-r12.obj
interchange/left-controller-r12.mtl
```

Notes:

- Corrects the stress/alignment issue found after r11.
- Avoids solving the problem by globally scaling the part.
- Adds geometry intended to support future button-extension mounting.
- Current `.OBJ`/`.MTL` export is present.
- Current printable `.3MF` and editable native CAD should be added when available.

## Layout Reference

```text
interchange/left-controller-layout-sketch.dxf
```

## Files Still Worth Adding

When available:

```text
source/left-controller-r12.<native-cad-format>
printable/left-controller-r12.3mf
interchange/left-controller-r12.step
```

A `.STEP` export is strongly recommended because it is easier to modify across CAD packages than a mesh-only export.

## Documentation Still To Add

- Overall dimensions
- Joystick model
- Button dimensions
- Fasteners
- Heat-set inserts, if used
- Wall thickness
- Print orientation
- Support requirements
- Measured tolerance / clearance assumptions
- Photos of assembled printed revision
