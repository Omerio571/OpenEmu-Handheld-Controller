# OpenEmu Handheld

OpenEmu Handheld is an experimental handheld gaming controller and dual-screen platform focused on mobile and standalone emulation.

The project is currently in **pre-alpha hardware development**. At this stage, the repository mainly contains mechanical/CAD work, design documentation, and planning for later firmware and software.

> **Current public release:** `v0.1.0`  
> **Current left-controller CAD revision:** `r09`

## Project Goals

- Build a compact, low-cost handheld controller platform.
- Support a phone-based configuration first.
- Support a dedicated secondary display.
- Explore low-bandwidth USB display transport for future versions.
- Eventually support a standalone ARM Linux system.
- Keep the hardware modular and repairable.
- Publish mechanical designs and documentation for non-commercial community use.
- Avoid bundling copyrighted ROMs, BIOS files, console keys, firmware, or other proprietary game-console assets.

## Planned System Support

The project is intended to work with existing emulators for systems such as:

- Game Boy / Game Boy Color
- Game Boy Advance
- Nintendo DS
- Nintendo 3DS
- PlayStation 1
- PSP
- Other retro systems where practical

This project does **not** include or redistribute commercial games, console firmware, encryption keys, or copyrighted emulator assets.

## Development Stages

### Version 1 — Phone-Based Prototype

Goal: prove the physical controller, display, power, and enclosure concept using a phone that already supports external display output.

Planned / current components include:

- Android phone as the main compute device
- 7-inch HDMI touchscreen
- External physical controls
- Microcontroller-based controller input
- USB-C hub / display connection
- Battery-powered handheld enclosure
- 3D-printed mechanical parts

### Version 2 — USB Secondary Display

Goal: support phones that do not provide native display output by sending the emulator's secondary-screen data over USB.

Research areas include:

- Android companion application
- USB 2.0 bandwidth limits
- Secondary-screen framebuffer transport
- Low-latency video transfer
- Display receiver / bridge board
- Touch return channel
- Integrated controller communication

### Version 3 — Standalone Handheld

Goal: remove the phone dependency and run emulators directly on an ARM processor.

Research areas include:

- ARM SBC / SoM selection
- Minimal Linux image
- Emulator-focused launcher
- Native-resolution rendering
- Performance-mode service control
- Custom PCB / carrier board
- Battery and thermal management

## Repository Layout

```text
OpenEmu-Handheld/
├── README.md
├── LICENSE.md
├── CONTRIBUTING.md
├── CHANGELOG.md
├── SECURITY.md
├── THIRD_PARTY.md
├── docs/
├── hardware/
├── firmware/
├── software/
├── configs/
├── tests/
├── media/
└── .github/
```

See [`docs/project-overview.md`](docs/project-overview.md) for the project overview and [`docs/roadmap.md`](docs/roadmap.md) for the current roadmap.

## Prototype Documentation

Current V1 documentation:

- [V1 Phone-Based Prototype](docs/prototypes/v1-phone-prototype.md)
- [V1 Phone Prototype Bill of Materials](docs/bom/v1-phone-prototype-bom.md)

Prototype photos, sketches, diagrams, and renders are stored under [`media/`](media/).

## File Naming

Mechanical revisions use the format:

```text
left-controller-r09.f3d
left-controller-r09.3mf
left-controller-r09.step
left-controller-r09.obj
left-controller-r09.mtl
```

Project releases use semantic-style version numbers:

```text
v0.1.0   Initial public hardware repository
v0.2.0   Major prototype update
v0.x.x   Continued pre-release development
v1.0.0   First complete, stable public release
```

A CAD revision number such as `r09` is independent from the GitHub release number.

## Current Status

The project is experimental. Mechanical dimensions, electronics, firmware interfaces, and software architecture may change significantly before `v1.0.0`.

## Licensing

See [`LICENSE.md`](LICENSE.md).

In short:

- Hardware designs, CAD files, printable files, documentation, diagrams, and media created for this project are intended for **non-commercial use** under **CC BY-NC-SA 4.0**, unless a file says otherwise.
- Future software and firmware may use a separate non-commercial software license.
- Commercial manufacturing, resale, or incorporation into a paid product requires separate permission from the project owner.

Because commercial use is restricted, this repository should be described as **source-available / open-hardware-inspired**, not OSI-approved open source.

## Legal Notice

Nintendo, Sony, PlayStation, PSP, Game Boy, Nintendo DS, Nintendo 3DS, Android, Linux, and other names may be trademarks of their respective owners.

This project is independent and is not affiliated with or endorsed by Nintendo, Sony, Google, the Linux Foundation, emulator developers, or console manufacturers.
