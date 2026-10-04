# Display Client

Planned receiver software for V2 display transport.

Potential responsibilities:

- Receive framebuffer / video data over USB.
- Decode only when necessary.
- Scale native handheld resolution to the physical display.
- Present frames with low latency.
- Send touch events back to the host.

Performance tests should record:

- Resolution
- Frame rate
- Pixel format
- Bandwidth
- End-to-end latency
- CPU usage
- Dropped frames
