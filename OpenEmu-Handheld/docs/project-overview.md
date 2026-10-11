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
- Full-size physical mock-ups when they can expose ergonomic or packaging issues early
- Per-component revision numbers rather than treating every part change as a new whole-project version
- Revising a part even after it works if its tolerance, alignment, component stress, or future integration would create downstream problems

## Current Stage

The project is currently focused on Version 1 mechanical development.

The present repository starts at public release `v0.1.0`. Individual parts have independent revision histories; the current documented left-side revision is `r12` and the right-side prototype is `r01`.

## Current V1 Architecture

```text
Android phone
     │
     ▼
USB-C hub
  ├── HDMI video ─────────► 7-inch display
  ├── controller USB ─────► Pro Micro
  └── touch USB ──────────► display touch interface (if required)

5000 mAh battery
     │
     ▼
charge / boost module
     │
     └── regulated 5 V ───► display power
```

The phone/hub path and display-battery power path are intentionally separated in the current prototype to simplify integration and reduce unnecessary load on the phone.

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
