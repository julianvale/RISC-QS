# 03 — Local driver and run layer

The supported software separates address-map knowledge, raw board access, and execution safety.
Host applications normally use the [`Board` facade](08-host-deployment.md); these lower layers are
for tests, calibration code, and adapter development.

## Supported modules

```text
software/riscq/
  map.py                         # SocParams and derived SocMap
  run.py                         # load, reset, parameter, poll, and result operations
  driver/cosim.py                # host-only co-simulation adapter
  board/pynq_driver.py           # existing ZCU216 adapter
  board/rfsoc4x2_driver.py       # explicit accepted RFSoC4x2 adapter
  deployment/                    # bundle identity and bounded RFSoC deployment engine
```

The low-level driver seam is four 32-bit/block methods:

```python
read32(offset) -> int
write32(offset, value) -> None
read_block(offset, nbytes) -> bytes
write_block(offset, data) -> None
```

`SocMap` derives every RAM, envelope, result, and host-control offset from the exact raw platform
parameters. Firmware result addresses come from bundle symbols; supported execution does not use
experiment-specific hard-coded offsets.

## Safe execution contract

`riscq.run` and `riscq.deployment.engine` enforce the common load/run sequence:

1. Assert reset before image or parameter writes.
2. Require a nonempty word-aligned image and use aligned single-word loads.
3. Read back the complete image before release.
4. Validate required manifest symbols, bounds, alignment, and platform/map/ABI identity.
5. Poll against a wall-clock deadline.
6. Copy only named results.
7. Reassert reset after success and every failure path.

The deployment engine additionally verifies the active bit, HWH, raw configuration, map, and ABI
identity before touching reset or memory. It can reuse an unchanged verified image for parameter-only
reruns.

## Board separation

`board.pynq_driver.PynqDriver` preserves the established ZCU216 startup behavior, including its
defaults, clock programming, automatic MTS, Nyquist-zone setup, and optional DAC-current setup.

`board.rfsoc4x2_driver.Rfsoc4x2Driver` is separate. Its stages are explicit, its accepted artifact
hashes are fixed, and it does not inherit ZCU216 MTS, Nyquist, or DAC-current actions. RFSoC bundle
and execution internals live under `riscq.deployment`, making their scope visible in both source and
imports.

## Reachability

The host AXI window exposes core RAM, envelope RAM, readout capture RAM, and the host-control block.
Core-local CPU RF/control addresses are not host-addressable on the accepted board design. Real-board
experiments therefore run on-core firmware and return results through manifest-backed RAM symbols;
direct CPU-register poking remains a co-simulation-only facility.

No live-board action is required to build, inspect, or test these modules. Platform programming and
hardware acceptance are documented separately and require explicit authorization.
