# Architecture

This document describes the planned architecture at a high level. It will evolve as prototypes are tested.

## V1 — Phone + External Display + Physical Controls

The first version uses an Android phone as the main compute device.

```text
                     ┌─────────────────┐
                     │  Android Phone  │
                     │    Emulator     │
                     └────────┬────────┘
                              │
                         USB-C / Hub
                 ┌────────────┼─────────────┐
                 │            │             │
                 ▼            ▼             ▼
             HDMI video   Controller     Touch USB
                 │          input        (if needed)
                 │
                 ▼
          7" HDMI display
                 ▲
                 │ 5 V power
                 │
        ┌────────┴─────────┐
        │ charge / boost   │◄──── USB-C charger
        │     module       │
        └────────┬─────────┘
                 │
            3.7 V battery
```

Current V1 power intent:

- The battery connects to the charge/boost module, not to the USB hub.
- The module supplies regulated 5 V power to the display.
- The phone supplies the hub/controller/touch peripheral path.
- HDMI from the hub carries video to the display.
- The exact charge-module pad labels must be verified before final wiring.
- Phone charging from the handheld battery is not a V1 requirement.

Primary goals:

- Validate ergonomics.
- Validate control layout.
- Validate screen placement.
- Validate battery / cable routing.
- Validate mechanical clearances and component stress.
- Validate sustained emulator performance.

## V2 — USB Secondary Display Transport

The V2 concept aims to support phones that do not provide native external-display output.

```text
Android phone
    │
    ├── emulator
    │
    └── secondary-screen framebuffer
                  │
                  ▼
              USB-C 2.0
                  │
                  ▼
       receiver / display bridge
                  │
                  ▼
                HDMI
                  │
                  ▼
            second display
```

Research questions:

- What resolution and frame rate can be transferred reliably?
- Is raw pixel transport practical at native handheld-console resolutions?
- When is compression required?
- What latency is introduced?
- How should touch data return to the phone?
- Can controller data share the same USB connection?

## V3 — Standalone ARM Handheld

```text
                  ┌───────────────┐
                  │ ARM SoC / SoM │
                  └───────┬───────┘
                          │
             ┌────────────┼────────────┐
             ▼            ▼            ▼
          Display      Controls      Storage
             │            │            │
             └──────┬─────┴─────┬──────┘
                    ▼           ▼
               Minimal Linux   Power
                    │
                    ▼
              Custom Launcher
                    │
                    ▼
                 Emulator
```

Performance strategy:

- Prefer native console resolution where practical.
- Prefer original game frame rate.
- Disable unnecessary rendering enhancements.
- Minimize nonessential background services.
- Use a performance CPU governor during emulation where appropriate.
- Restore normal services when exiting the emulator.
- Avoid rebooting unless testing shows a real benefit.

## Hardware Selection Principles

For demanding emulation, board choice should prioritize:

1. CPU architecture / IPC
2. Single-thread performance
3. GPU capability and driver quality
4. Memory bandwidth
5. RAM capacity
6. Thermals
7. Price
