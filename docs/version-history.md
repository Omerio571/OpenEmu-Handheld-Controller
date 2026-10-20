# Version and Revision History

Project release numbers and component revision numbers are intentionally separate.

## Project Releases

### v0.1.0

First public repository structure.

Status:

- Pre-alpha
- Mechanical design in progress
- No production-ready electronics
- No public firmware or software implementation yet

## Mechanical Revisions

Each mechanical subsystem uses its own revision sequence. A subsystem revision does not imply that the entire handheld is at the same version.

### Left-Side Controller / Button-Wire Assembly

#### r10

- Functional for the intended button and wire organization.
- Confirmed that the basic layout could work.
- Retained as an earlier printable development revision.

#### r11

- Geometry was increased by roughly 5% to gain clearance.
- Functionally worked, but the enlarged geometry introduced alignment problems.
- Those alignment changes could place unwanted tension on components.
- Kept for development history, not as the preferred current revision.

#### r12 — Current

- Corrects the alignment/component-stress issue observed after r11.
- Uses targeted geometry changes rather than simply scaling the whole part.
- Adds a feature intended to make later button-extension mounting easier.
- Current repository export is `.OBJ` + `.MTL`; a current printable `.3MF` and editable native CAD source should be added when available.

### Right-Side Controller

#### r01 — Current

- First physical right-side prototype.
- Useful as an initial geometry/fit test.
- Not considered final.
- A second revision is planned after the left side is completed so its integration lessons can be carried over.

## Naming Rule

Use:

```text
<part-name>-rXX.<extension>
```

Examples:

```text
left-controller-r12.obj
left-controller-r12.mtl
right-controller-r01.3mf
display-bracket-r03.3mf
main-shell-r02.step
```

## Why a Working Part May Still Be Revised

A revision is not considered complete only because it performs its immediate function.

A part may be revised when:

- clearances are too tight
- scaling causes misalignment
- components are held under continuous tension
- cable bends are forced
- future mounting features would be difficult to add
- assembly or service would become unnecessarily difficult
- a local geometry correction would be better than scaling the entire part

This keeps early design choices from creating larger integration problems later in the build.

## Controller archive update (October 2026)

- Added uploaded CAD archive covering historical left-side and right-side designs.
- Left V15 (`LeftSide V15 .3mf`) is the latest left-side file supplied, with printing underway as reported; not yet marked electrically verified.
- Right V4 (`RightController V4 Better Arduino COnnection + Improvements.3mf`) is the latest labelled right-side file supplied; a built right-side assembly passed button and short hand-stress tests.
- Reclassified the D2–D9 serial test as right-side firmware. Added a separate historical left-side serial test.
- See `docs/cad-inventory.csv` for complete filenames and `docs/prototypes/controller-fabrication.md` for details.
