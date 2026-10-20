# Contributing

Thank you for your interest in OpenEmu Handheld.

The project is currently early-stage and welcomes useful non-commercial contributions in mechanical design, electronics, firmware, software, testing, and documentation.

## Before Contributing

Please:

1. Check the roadmap and existing issues.
2. Keep contributions focused on legal, independently created material.
3. Do not upload ROMs, BIOS files, console keys, proprietary firmware, copyrighted game data, or leaked documentation.
4. Do not include third-party material unless redistribution is clearly permitted by its license.
5. Describe what changed and why.

## CAD Contributions

For mechanical changes:

- Prefer editable source files when possible.
- Export a `.STEP` file for interoperability where practical.
- Include a `.3MF` or `.STL` file when the part is intended to be printed.
- Use clear revision names such as `left-controller-r10`.
- Add screenshots or renders for major geometry changes.
- Note printer tolerances, fasteners, inserts, and fit assumptions.

## Firmware / Software Contributions

When source code is added:

- Keep platform-specific code separated cleanly.
- Document build instructions.
- Document hardware assumptions.
- Avoid hard-coded local paths.
- Keep emulator-specific configuration separate from emulator binaries.
- Do not bundle third-party binaries unless their license explicitly permits redistribution.

## Commit Style

Short, descriptive commits are preferred.

Examples:

```text
Add left controller r10 STEP export
Fix joystick clearance in left shell
Document V2 USB display architecture
Add controller input test notes
```

## Pull Requests

A good pull request should include:

- What problem it solves.
- What was changed.
- How it was tested.
- Photos, renders, measurements, logs, or benchmark results where useful.
- Any compatibility or manufacturing impact.

## Licensing of Contributions

By contributing original material to this repository, you agree that your contribution may be distributed under the license that applies to the directory or file you are contributing to.

If you do not agree with those terms, do not submit the contribution.
