# Roadmap

This roadmap is intentionally flexible. Prototype findings may change priorities.

## v0.1.x — Repository + Mechanical Cleanup

- [x] Create public repository structure.
- [x] Establish revision naming.
- [x] Add licensing documentation.
- [x] Add current left-side revision export (`r12` OBJ/MTL).
- [x] Add left-side earlier printable revisions (`r10`, `r11`).
- [x] Add right-side first printable prototype (`r01`).
- [x] Add full-size cardboard prototype photo and documentation.
- [ ] Add current left `r12` printable `.3MF`.
- [ ] Add editable native CAD for the current left revision.
- [ ] Export clean `.STEP` for current mechanical revisions where useful.
- [ ] Add current prototype renders.
- [ ] Document print orientation and measured tolerances.

## v0.2.x — V1 Controller Prototype

- [ ] Finalize left controller geometry.
- [ ] Design / finalize right controller (`r02+` expected).
- [ ] Finish button and joystick mounting.
- [ ] Complete controller wiring.
- [ ] Validate all controller inputs.
- [ ] Integrate display mount.
- [ ] Validate handheld ergonomics.
- [x] Document initial bill of materials.
- [ ] Document final V1 mechanical clearances and component-stress checks.

## v0.3.x — V1 Integrated Handheld

- [ ] Integrate battery.
- [ ] Integrate charge/boost module for display power.
- [ ] Verify power-module terminals before final wiring.
- [ ] Integrate USB-C hub on the phone/peripheral path.
- [ ] Integrate 7-inch display.
- [ ] Improve cable routing.
- [ ] Test full 3DS gameplay session.
- [ ] Record temperatures and battery runtime.

## v0.4.x — V2 Research Prototype

- [ ] Build Android companion-app proof of concept.
- [ ] Capture / isolate secondary-screen output.
- [ ] Test USB 2.0 raw framebuffer transfer.
- [ ] Test compressed transfer if necessary.
- [ ] Measure latency.
- [ ] Build receiver/display bridge prototype.
- [ ] Test touch return path.

## v0.5.x — Standalone Compute Research

- [ ] Benchmark low-cost ARM boards.
- [ ] Test 2 GB vs 4 GB RAM.
- [ ] Test native-resolution 3DS emulation.
- [ ] Test demanding titles.
- [ ] Measure CPU, GPU, RAM, thermals, and power.
- [ ] Test minimal Linux environment.
- [ ] Test service shutdown / restore on emulator launch and exit.

## v0.6.x — Custom Standalone Software

- [ ] Custom launcher prototype.
- [ ] Automatic performance profile.
- [ ] Controller auto-detection.
- [ ] Save-data management.
- [ ] Graceful shutdown.
- [ ] Recovery / maintenance mode.

## v0.7.x — Custom Electronics

- [ ] Select SBC / SoM architecture.
- [ ] Design carrier / interface PCB.
- [ ] Add battery management.
- [ ] Add charging.
- [ ] Add controller interfaces.
- [ ] Add display interfaces.
- [ ] Validate thermal design.

## v1.0.0 — First Stable Handheld

Target criteria:

- Stable enclosure.
- Stable controls.
- Reliable power system.
- Documented build process.
- Reproducible firmware/software setup.
- Tested emulator performance.
- Full bill of materials.
- Assembly documentation.
