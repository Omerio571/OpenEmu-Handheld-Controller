# Controller fabrication and testing — Prototype V1

## Current process

- The left side began as manually routed metal wires in printed grooves.
- The right side uses a single adhesive copper sheet, trimmed along printed cutting grooves to isolate tracks.
- The Arduino Pro Micro uses pins soldered through its plated holes. A redesigned sloped/level landing is intended to avoid approximately 2.5 mm solder-only bridges.
- The right side was successfully tested using `INPUT_PULLUP`, common GND, and pins D2–D9. Individual and simultaneous button presses worked; the user also reported a brief squeezing/handling stress test without detectable faults. This is **not** a long-term durability certification.
- Planned: left-side V15 print and test, inter-half structural bridge, display mount, battery and hub mount, enclosure, then phone holder; continue software integration and end-to-end testing.

## Confirmed right-side pin mapping

| Pro Micro pin | Function |
|---|---|
| GND | Shared ground |
| 2 | Select |
| 3 | Start |
| 4 | Home |
| 5 | Right |
| 6 | Down |
| 7 | Left |
| 8 | Up |
| 9 | Right shoulder |

Use `firmware/controller/RightControllerSerialTest/RightControllerSerialTest.ino` for the verified pin mapping.

## Assembly checklist

1. Remove isolated copper strips fully; inspect at bends and solder pads.
2. Confirm no unintended shorts with a multimeter.
3. Confirm expected continuity for each trace.
4. Fit Arduino pins without forcing the PCB or using solder as a structural bridge.
5. Test each button, simultaneous presses, and gentle flexing; repeat with final housing assembled.
6. Confirm battery and USB supply compatibility before power integration; avoid unsupported lithium charging arrangements.

## Notes

File names in CAD archives reflect designer exports and aren't always a complete revision timeline; some versions are ambiguous. Do not infer electrical verification from CAD alone.
