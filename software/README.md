# riscq software framework

Implementation of the control-software framework specified in [`docs/software/`](../docs/software/).
Each module is the smallest thing that works and is gated by a self-checking test that reuses an
existing SpinalSim scenario (or the hand-written golden `pulse_sched.S`) as the reference, keeping the
software honest against the real RTL.

## Layout

```
software/
  firmware/                 # module 02 — bare-metal C (the on-core program)
    include/riscq.h         #   GENERATED from contract.py (python -m riscq.gen_header)
    crt0.S  riscq.ld  Makefile
    examples/               #   pulse.c, readout.c, vna.c, vna_point.c
  python/riscq/
    contract.py             # module 01 — address maps + encodings (single source of truth)
    socconfig.py            #   unit conversions + address helpers + JSON snapshot
    gen_header.py           #   contract.py → firmware/include/riscq.h
    driver/                 # module 03 — Driver ABC + dummy/pynq backends
    soc.py                  #   Soc facade + ELF loader
    pulse.py  program.py    # module 04 — envelopes + packer + sequence DSL → C → ELF
    remote.py  remote_cli.py# module 05 — Pyro5 server + RemoteDriver
    cosim/                  # module 06 — CocotbDriver + AdcSource + runner (+ examples)
  deploy/riscq-rpc.service  #   systemd unit for the board-side RPC server
```

## Install / test

```bash
cd software/python
pip install -e .                       # numpy + pyelftools (board/remote/cosim extras optional)
python -m pytest                       # full suite (the cosim golden Verilates the DUT, ~45s)
RISCQ_SKIP_COSIM=1 python -m pytest    # fast suite (skip the heavy cocotb run)
```

The firmware builds with stock RV32I clang (`cd software/firmware && make`); `python -m riscq.gen_header`
regenerates `riscq.h` from the contract.

## How the tests anchor to the RTL

| Module | Test | Golden reference |
|---|---|---|
| 01 contract | `test_contract.py` | addresses in `pulse_sched.S` + `Zcu216Top.SocMemoryMap` |
| 02 firmware | `test_firmware.py` + `PulseTableSocCpuSim` (`RISCQ_ELF=…/pulse.elf`) | `pulse_sched.S` write-set; drives DAC on real RTL |
| 03 driver | `test_driver.py` | the host-AXI image `PulseTableSocCpuSim` streams to `coreMemOffset` |
| 04 pulse/program | `test_pulse_program.py` + `PulseTableSocCpuSim` (DSL-generated ELF) | `pulse_sched.S`; envelope layout vs `expandEnv`/`loadEnv` |
| 05 remote | `test_remote.py` | identical write logs local vs over a localhost daemon |
| 06 cosim | `test_cosim.py` | reproduces `PulseTableSocSim` Parts 1+3 (AXI round-trip + VNA selectivity) |

## Notes / deviations from the spec

- The host-AXI region bases scale with `qubit_num` (`region_size = pow2ceil(max_stride · qubit_num)`),
  so the 2-qubit sim build lays regions out differently from the 14-qubit default — `contract.py`
  derives them rather than hard-coding the 14q numbers.
- The available `/config/build/riscv-install/bin/clang` is a fork that pads hazard NOPs by default;
  harmless on our hazard-handling core (correctness unaffected, slightly larger images).
- The cosim drives the **ELF flow** over the top-level host AXI + ADC/DAC ports (the test-tap is
  `simPublic`, not a port), i.e. the production path — no RTL change beyond a small `CosimGen` entry.
- `fs` (DAC sample rate) defaults to 8 GSPS in `SocConfig`; pin it per build (open question, 01 §7).
