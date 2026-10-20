# Controller firmware tests

- `RightControllerSerialTest/RightControllerSerialTest.ino`: confirmed D2–D9 right-side mapping (the supplied repository mistakenly stored this as `LeftControllerTestCode`).
- `LeftControllerSerialTest/LeftControllerSerialTest.ino`: historical left-side joystick/D-pad/shoulder test reconstructed from a previous conversation; **pin mapping must be verified** on the final printed left-side assembly.

These sketches print serial states and are not yet full USB HID gamepad firmware.
