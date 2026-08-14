# RFSoC4x2 platform `rfsoc4x2-nv-1q` 1.0.0

This directory contains the exact accepted RFSoC4x2 PYNQ overlay and raw build configuration. The
artifact bytes were copied without rebuilding from the immutable external archive captured on
2026-07-21.

Copy these artifacts into a named board-server bundle as `top.bit`, `top.hwh`, and `params.json`;
install the matching wheel separately in the board's PYNQ Python environment.

Verify before use:

```bash
sha256sum -c SHA256SUMS
```

Runtime order is LMK 245.76 MHz, LMX 491.52 MHz, HWH range and RFDC-driver validation, overlay
download, then the normal board server. The run layer keeps reset asserted until a fully read-back
program is ready. Use the [RFSoC4x2 quick start](../../../../README.md) for deployment.
