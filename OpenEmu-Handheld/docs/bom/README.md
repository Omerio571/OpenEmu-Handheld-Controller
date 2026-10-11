# Bills of Materials

This directory contains bills of materials (BOMs) for OpenEmu Handheld prototypes.

Each BOM records the parts used for a specific prototype, including purchase quantity, quantity used, cost, purpose, and supplier links. Prices are development references and may change over time.

## Current BOM

- [`OpenEmu-Handheld-V1-BOM-with-Realistic-Cost.xlsx`](OpenEmu-Handheld-V1-BOM-with-Realistic-Cost.xlsx) — V1 phone-based prototype

The current workbook distinguishes between:

- **purchase cost** — the total price actually paid for the purchased packages
- **realistic used-part cost** — a proportional estimate based on the quantity actually consumed from multipacks

Current recorded totals:

- Purchase cost: **$91.76 CAD**
- Estimated used-part cost: **$69.65 CAD**

These totals remain preliminary and do not yet include every construction material such as filament, wiring, connectors, fasteners, copper/PCB materials, shipping, or taxes.

## Power Note

The current V1 architecture uses the battery and charge/boost module primarily for the display power path. The battery is not intended to connect through the USB hub.

Before assembly, verify the exact battery/input/5 V terminal markings on the specific power module in hand rather than relying only on generic module layouts.
