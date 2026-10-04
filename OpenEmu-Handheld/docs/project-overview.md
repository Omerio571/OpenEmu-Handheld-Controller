# Project Overview

## Summary

OpenEmu Handheld is a modular handheld controller and display project intended to evolve from a phone accessory into a standalone emulation platform.

The project is being developed in stages so that each major technical risk can be tested independently.

## Design Philosophy

The project prioritizes:

- Low cost
- Repairability
- Modular parts
- Replaceable controls
- Practical 3D printing
- Low-latency input
- Efficient display transport
- Native-resolution emulation where useful
- Minimal background software on standalone hardware
- Clear separation between original project files and third-party emulator software

## Current Stage

The project is currently focused on Version 1 mechanical development.

The present repository starts at public release `v0.1.0`, while individual CAD parts may already have higher internal revision numbers such as `r09`.

## Long-Term Architecture

### Phone-Based Mode

```text
Android phone
├── emulator
├── main display
└── external / secondary display path
        ↓
controller / display hardware
```

### Standalone Mode

```text
ARM SoC / SoM
      ↓
minimal Linux
      ↓
custom launcher
      ↓
emulator
      ↓
integrated displays + controls
```

## Non-Goals

The repository is not intended to:

- Distribute copyrighted games.
- Distribute console BIOS or firmware.
- Distribute console encryption keys.
- Circumvent platform security.
- Repackage third-party emulators as original project code.
