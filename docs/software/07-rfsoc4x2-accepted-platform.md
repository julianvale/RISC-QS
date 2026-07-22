# RFSoC4x2 accepted platform provenance

This document is the Git-visible record for the accepted RFSoC4x2 platform. Detailed procedures,
raw logs, photos, failure transcripts, intermediate builds, and historical build and gate names are
retained only in the external read-only archive.

## Source and archive identity

- Platform identity: `rfsoc4x2-nv-1q` version `1.0.0`.
- Accepted source commit: `c08bb32a845b5a5cd471d860276ce2f41dfb3a5f` on branch `refactor`.
- Archive capture: `2026-07-21T16:31:31-07:00`.
- Archive path: `/home/julian/riscq-archive/rfsoc4x2-accepted-2026-07-21/`.
- Aggregate digest: SHA-256
  `14d380898c17f615528d0e23cd4eac331e50075d6fea6edf5c4d17e18300e731` for the archive's
  `SHA256SUMS` file.
- Build tools: Vivado `2025.2`, software build `6299465`, IP build `6300035`, SharedData build
  `6298862`.

The accepted artifact bytes were repackaged without rebuilding. Their exact identities are:

| Payload | SHA-256 |
|---|---|
| `PulseTableSoc.bit` | `5ffe224d38a1ee5e4a1d5eee8fa0988644a8e37492bba4a45c9412fc815eff0f` |
| `PulseTableSoc.hwh` | `d3eddfd06915e1b35d62bc44316092438758224842896143856898980b47e983` |
| `PulseTableSoc.ltx` | `c7a20dd90b02a4a8390a57d38b20b49d727b7aaca81735d8376a22d81b25fc62` |
| raw `rfsoc4x2-nv-1q.json` | `bad1e52c9c8b1417bf57b879e3c817a0a8c44ed32a71c682a92b30c4eb1d7156` |

The raw configuration is part of the identity, including `qubit_num=1`, `dac_num=2`, `adc_num=1`,
`dac_map=[[0,1]]`, `adc_map=[0]`, `mem_depth=4096`, `env_depth=1024`, `rob_depth=1024`,
`gate_pulse_num=8`, interpolation factors `4/16/4`, `link_pipe=4`, `queue_depth=4`,
`with_mul=true`, and `dsp_freq_hz=491520000.0`. A consumer must compare the complete raw document,
not a normalized subset that discards converter maps or other fields.

## Hardware contract

- Board: Real Digital RFSoC4x2.
- Device: `xczu48dr-ffvg1517-2-e`.
- Board part: `realdigital.org:rfsoc4x2:part0:1.0`.
- Standard clock programming: LMK `245.76 MHz`, then LMX `491.52 MHz`.
- DSP and RFDC AXIS clock: nominal `491.52 MHz`; batch tick `2.0345052083333335 ns`.
- PS PL clock: nominal `100 MHz`; accepted metadata records `99,999,985 Hz`.
- RISC-Q AXI aperture: `0x80000000`, range `0x10000000`.
- RFDC control aperture: `0x90000000`, range `0x00040000`.
- Core-0 RAM: host offset `0x00000000`, `16 KiB`; shared active-high reset: host offset
  `0x00050000` (physical address `0x80050000`).

Logical DAC0 is `RF_CH0` / `s20_axis` / `vout20` / physical DAC A. Logical DAC1 is `RF_CH1` /
`s00_axis` / `vout00` / physical DAC B. Logical ADC0 is `RF_CH2` / `m22_axis` / `vin2_23` /
physical ADC A. The additional enabled converter paths are clock-forwarding resources and are not
additional logical channels.

Reset is asserted at power-up. It must be held before every aligned single-word RAM or envelope
load, the complete loaded image must be read back, and a run must have a wall-clock deadline. Reset
must be reasserted after success and on every failure or exit path, including timeout, exception,
signal, and result-copy failure. The accepted RAM probe saved, wrote, read, restored, and reread one
word while reset was held.

## Accepted readiness and digital result

RFDC health is accepted only for this exact state:

| Tile | Enabled | Tile state | Block mask | Power | PLL | Role |
|---|---:|---:|---:|---:|---:|---|
| DAC0 | 1 | 15 | 1 | 1 | 1 | active |
| DAC1 | 1 | 15 | 1 | 1 | 1 | clock forwarding |
| DAC2 | 1 | 15 | 1 | 1 | 1 | active |
| DAC3 | 0 | 0 | 0 | 0 | 0 | disabled |
| ADC0 | 0 | 0 | 0 | 0 | 0 | disabled |
| ADC1 | 0 | 0 | 0 | 0 | 0 | disabled |
| ADC2 | 1 | 15 | 2 | 1 | 1 | active |
| ADC3 | 1 | 12 | 1 | 1 | 1 | clock-forwarding dummy; calibration state accepted only here |

The RFDC top-level `State` must be `0`. Readiness fails closed on any other tuple.

The platform self-test image is 520 bytes (130 aligned words), SHA-256
`837fb7d9532c1b239268cf8d6014cd03eb37e54ddf231b20d08785f918c824a5`. The accepted run loaded
and read back every word under reset, restored the image-resident magic, released reset once under a
bounded poll, and then reasserted reset. It returned status `0xD04E005C`, magic `0x52515121`, and
result `0xC05C5C01`. The final contract calculation confirmed one core, the batch timing above,
`7.86432 GSPS` DAC physical rate, `3.93216 GSPS` ADC physical rate, and `1.96608 GSPS` ADC stream
rate after x2 decimation.

## RF characterization

Physical DAC A produced one finite approximately `80.04 MHz` tone burst. Scope cursors measured
`4.992 us` against the commanded `5.000813802 us`, with `83.2 mVpp` into `50 ohms`. For a sine this
is `29.416 mVrms`, `17.306 uW`, or `-17.618 dBm`. The saved spectrum showed one dominant
approximately `80 MHz` peak with no comparable large spur. Physical DAC B completed its exact
single bounded digital run and was reported by the user to look identical using the same cable,
termination, and scope settings; no separate numeric DAC B measurement is inferred.

The direct physical DAC A to ADC A loopback passed two matched controls, one no-DAC control, and one
far-detuned control using signed I/Q magnitude:

| Control | I | Q | Magnitude |
|---|---:|---:|---:|
| matched 1 | -8,841,774 | -7,466,985 | 11,572,935.343175 |
| matched 2 | -8,854,306 | -7,476,954 | 11,588,941.964638 |
| no DAC | -14 | 994 | 994.098587 |
| far detuned, code 2924 | -83,536 | -38,883 | 92,142.015308 |

The matched high/low ratio was `1.001383`; the weaker matched response was `11641.64x` the no-DAC
response and `125.60x` the far-detuned response. Each control preserved exact completion metadata,
used a 256-batch demod-before-DAC schedule, and reasserted reset.

The independent signal-generator ADC-only check is deferred, not passed. The combined loopback does
not erase that diagnostic limitation. Additional frequency, latency, amplitude, phase/IQ,
repeatability, spectrum, and noise characterization is also deferred.

## Evidence boundary

The external archive retains the complete accepted workspace payloads, recursive inventories and
hash manifests, detailed hardware logs, photos, procedures, failure history, and historical names.
Those materials are evidence, not clean-clone runtime dependencies. Supported code, tests, commands,
and public documentation must operate without `.porting`, the external archive, or deleted build
trees.
