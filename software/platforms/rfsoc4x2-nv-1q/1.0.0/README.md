# RFSoC4x2 platform `rfsoc4x2-nv-1q` 1.0.0

This directory contains the exact accepted RFSoC4x2 PYNQ overlay and raw build configuration. The
artifact bytes were copied without rebuilding from the immutable external archive captured on
2026-07-21.

These are transparent release payloads. Provisioning renames the three source files to
`platform.bit`, `platform.hwh`, and `params.json` in a named directory and places the matching wheel
beside them. There is no platform container or metadata file.

Verify before use:

```bash
sha256sum -c SHA256SUMS
```

Runtime order is LMK 245.76 MHz, LMX 491.52 MHz, HWH range and RFDC-driver validation, overlay
download, immediate RISC-Q reset assertion, and exact RFDC health validation. Payload identity,
provenance, the complete readiness contract, and accepted hardware results are documented in
`docs/software/07-rfsoc4x2-accepted-platform.md`.

`PulseTableSoc.ltx` is intentionally not included. It is an observation-only Vivado debug artifact,
not part of the PYNQ runtime overlay.
