# RFSoC4x2 platform `rfsoc4x2-nv-1q` 1.0.0

This directory contains the exact accepted RFSoC4x2 PYNQ overlay and raw build configuration. The
artifact bytes were copied without rebuilding from the immutable external archive captured on
2026-07-21.

These are transparent release payloads. Copy them into a new named bundle as `top.bit`, `top.hwh`,
and `params.json`; install the matching wheel separately in the board's PYNQ Python environment.
There is no platform container or metadata file.

Verify before use:

```bash
sha256sum -c SHA256SUMS
```

Runtime order is LMK 245.76 MHz, LMX 491.52 MHz, HWH range and RFDC-driver validation, overlay
download, then the normal board server. The run layer keeps reset asserted until a fully read-back
program is ready. Deployment instructions are in `docs/software/07-host-deployment.md`.

`PulseTableSoc.ltx` is intentionally not included. It is an observation-only Vivado debug artifact,
not part of the PYNQ runtime overlay.
