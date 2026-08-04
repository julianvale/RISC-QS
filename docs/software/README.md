# riscq software framework

A control-software framework for the **riscq RFSoC** — the multi-qubit SpinalHDL SoC of
`qubitNum` RISC-V cores, each driving a pulse/readout DSP datapath over a posted link (see
[docs/soc/ARCH.md](../soc/ARCH.md) and [docs/soc/PulseTableSoc.md](../soc/PulseTableSoc.md)).

The framework lets a user **write/generate the control program**, **load it onto the SoC**,
**drive the SoC** (real hardware *or* simulation through the same API), and **read results back** —
from a laptop, over the network, or inside a co-simulation fed by their own quantum model.

This directory holds the **module specs**. They are a design, not yet an implementation; each spec
ends with a "minimal viable implementation" section that is the smallest first cut to build.

---

## 1. What it must do (the brief)

| # | Requirement | Module |
|---|---|---|
| 1 | Bare-metal library + build system to cross-compile software that runs on the SoC | [02-firmware](02-firmware.md) |
| 2 | Software driver that controls the SoC through its memory map | [03-driver](03-driver.md) |
| 3 | Remote access to the SoC (RPC / Pyro) | [05-remote](05-remote.md) |
| 4 | Python library to generate bare-metal control programs + pulse data | [04-pulse-and-program](04-pulse-and-program.md) |
| 5 | Python co-simulation (cocotb) with swappable driver backends — PYNQ for hardware, cocotb for sim, with user-supplied ADC data from a quantum simulator (qutip) | [06-cosim](06-cosim.md) |

Everything is anchored on one shared document, the [01-hardware-contract](01-hardware-contract.md):
the memory map + fixed-point encodings the SoC actually exposes. It is the **single source of truth**;
the C header and the Python config are both derived from it so the two sides cannot drift.

---

## 2. Design principles

These come straight from studying four reference stacks (RISC-Q's C example + `python/riscq`, QubiC,
QICK). The detailed findings live in each module spec; the distilled rules:

1. **The RISC-V core has a real toolchain — do not build a pulse-processor assembler.** QICK's and
   QubiC's biggest source of complexity is a bespoke ISA assembler/compiler for their custom sequencers
   (tProc / distributed processor). We don't need it: programs are **C compiled to an ELF**, or a list
   of **host MMIO writes**. This deletes thousands of lines before they are written.
2. **One contract, two consumers.** The address map + fixed-point scales are defined once
   ([01-hardware-contract](01-hardware-contract.md)); the C header `riscq.h` and the Python `SocConfig`
   are generated from it. The reference projects each carried 3+ divergent copies of the same map and
   drifted — we don't repeat that.
3. **The driver is a swappable seam.** A tiny abstract `Driver` (write/read words, bulk write, reset,
   block-load) has interchangeable backends — `PynqDriver` (real ZCU216), `CocotbDriver` (simulation),
   `DummyDriver` (unit tests). Experiment code never knows which is underneath. This is exactly what
   makes "PYNQ for hardware, cocotb for sim" fall out for free (QubiC's `AbstractCircuitRunner` and
   QICK's `SocIP`/Pyro split both rely on this).
4. **Remote = the same interface over a wire.** The remote client *is* a `Driver`; the board-side
   server just wraps a local one. Unit-conversion math runs on the client from a config snapshot, so
   only real hardware actions cross the network (QICK's Pyro pattern).
5. **Lead-time scheduling, not host-in-the-loop timing.** The CPU programs pulse parameters and an
   absolute `startTime`, then the DSP datapath fires autonomously at that batch tick. Software never
   bit-bangs samples. The framework's job is to compute parameters + timestamps, not to meet real-time
   deadlines.
6. **Simple first, extensible by construction.** Each module ships the smallest thing that works; the
   gate/circuit-compiler layer, parameter sweeps, calibration store, and closed-loop qutip are named
   **extension points**, not v1 scope.

---

## 3. How the SoC is controlled

There is **one** control path — the one the hardware actually supports on the board: a **compiled C
program that runs on the core**. The host loads it into the 4 KiB core RAM, releases reset, and the core
issues its own register writes, sleeps on the wall clock, and leaves the readout in RAM — no host in the
loop during a shot. This matches the posted-link + per-buffer `startTime` contract and gives the lowest
timing jitter.

```
 program.py / C  ──compile──►  firmware.elf
                   load over driver ──► core I/D RAM @0x80000000
                   release reset ──► CPU runs main(), issues its own MMIO writes,
                                     sleeps on the wall clock, leaves results in RAM
 (mirrors src/riscq/soc/sim/PulseTableSocCpuSim.scala)
```

**Why not host-driven register pokes?** A core's RF window and control block sit behind the *core's*
data bus, not the host AXI map ([01 §6](01-hardware-contract.md)) — a deliberate consequence of the
posted-link floorplan. So the host *cannot* reach those registers on real hardware; only a program on
the core can. The one place direct register poking exists is **simulation**, through the `withTestTap`
master: the cosim exposes it as a sim-only `poke()`/`peek()` debug capability
([06-cosim](06-cosim.md)) — used to reproduce the register-level RTL sim (`PulseTableSocSim`) and for
bring-up. It is not a deployment path, so the framework keeps a single program path rather than dressing
it up as a second "mode."

---

## 4. Module map

```
            ┌──────────────────────── host (laptop / PYNQ PS / cosim) ─────────────────────────┐
            │                                                                                   │
 pulse.py ──┤  envelopes (numpy) ──► fixed-point pack ──┐                                        │
            │                                            ▼                                        │
 program.py ─► sequence DSL ──► C codegen ─► clang ─► firmware.elf ───────────┐                    │
            │                                                                ▼                    │
 SocConfig ─┤  (unit conversions, from the contract)            ┌──────────────────┐             │
 (01)       │                                                   │   Soc  (facade)  │  load_program│
            │                                                   │  knows the memmap │  load_env    │
            │                                                   └─────────┬────────┘  reset/read   │
            │                                                             ▼                         │
            │                                              ┌──────────  Driver (ABC) ───────────┐  │
            │                                              │  write_word / write_words / read   │  │
            │                                              │  reset(hold|release)               │  │
            │                                              └───┬───────────┬───────────┬────────┘  │
            └──────────────────────────────────────────────── │ ───────── │ ───────── │ ──────────┘
                                                       PynqDriver   CocotbDriver   RemoteDriver
                                                       (real HW)    (sim + ADC      (Pyro proxy →
                                                                     injection)      board server)
            firmware (C) ── runs on the core itself, talks to the same memory map from the inside
```

- [**01-hardware-contract**](01-hardware-contract.md) — the memory map, encodings, `SocConfig`.
- [**02-firmware**](02-firmware.md) — `libriscq` C library + linker/crt0 + build (the on-core program).
- [**03-driver**](03-driver.md) — `Driver` ABC, backends, `Soc` facade, ELF + envelope loaders.
- [**04-pulse-and-program**](04-pulse-and-program.md) — envelope generation + the sequence DSL.
- [**05-remote**](05-remote.md) — Pyro5 server/proxy.
- [**06-cosim**](06-cosim.md) — cocotb backend + qutip ADC injection.

---

## 5. Proposed repository layout

Specs live here, in `docs/software/`. The code the specs describe goes in a new top-level `software/`
tree, kept entirely separate from the SpinalHDL sources under `src/riscq/`:

```
software/
  firmware/                 # libriscq — bare-metal C (the on-core program)
    include/riscq.h         #   canonical MMIO header (GENERATED from the contract)
    crt0.S  riscq.ld        #   startup + linker script
    Makefile                #   clang rv32i build, one ELF per program
    examples/               #   pulse.c, readout.c, vna.c
  python/
    riscq/                  # the host-side package
      contract.py           #   the address map + encodings (source of truth, or loaded from JSON)
      socconfig.py          #   unit conversions built on contract.py
      driver/               #   Driver ABC + pynq / cocotb / dummy / remote backends
      soc.py                #   Soc facade
      pulse.py              #   envelope library + packers
      program.py            #   sequence DSL → C / MMIO list
      remote.py             #   Pyro5 server + client
      cosim/                #   cocotb harness + AdcSource
      gen_header.py         #   contract.py → firmware/include/riscq.h
    pyproject.toml
docs/software/              # ← these specs
```

The contract ideally is **emitted from SpinalHDL elaboration** (a small generator beside
`GenPulseTableSoc`) so it can never drift from the RTL; until then `contract.py` is hand-maintained to
match the Scala constants, and `gen_header.py` derives the C header from it. See
[01-hardware-contract](01-hardware-contract.md) §5.

---

## 6. Key decisions & alternatives

Defaults chosen for simplicity; each is reversible and called out where it lives.

| Decision | Default | Alternative / when to revisit |
|---|---|---|
| Program altitude | Pulse-sequence DSL → C / MMIO | A gate/circuit compiler (QubiC `distproc` front-end) on top, if quantum-circuit input is wanted. Out of v1 scope. |
| Toolchain | Stock RV32I clang at `/config/build/riscv-install/bin/clang` | Our core handles hazards in hardware (standard `rv32ui`/`um` ELFs pass under RVLS lock-step), so **no NOP-padding fork is required** — unlike the RISC-Q reference core. RV32IM if `withMul` is enabled. |
| Remote transport | Pyro5 (numpy-friendly, proxy objects) | gRPC/REST/msgpack if a language-neutral API is needed. Avoid the references' raw-`pickle`-over-HTTP. |
| Co-sim engine | cocotb over Verilated `PulseTableSoc.v` | The project already uses Verilator for SpinalSim; reuse it. Icarus if a non-Verilator path is needed. |
| Contract source | Generated from elaboration (goal); hand-mirrored `contract.py` (interim) | — |

Open questions that the user may want to steer are collected at the end of the relevant specs (notably
[04](04-pulse-and-program.md) on DSL altitude and [06](06-cosim.md) on the ADC-injection interface).

---

## 7. Build order (roadmap)

1. **Contract + header gen** ([01](01-hardware-contract.md)) — write `contract.py`, generate `riscq.h`,
   diff against the existing `src/riscq/soc/sim/sw/pulse_sched.S` addresses.
2. **Firmware** ([02](02-firmware.md)) — crt0 + linker + `Makefile`; rebuild `pulse.c`/`readout.c`
   examples; confirm the ELF loads and runs in `PulseTableSocCpuSim`.
3. **Driver + Soc** ([03](03-driver.md)) — `DummyDriver` first, then `PynqDriver`; ELF + envelope
   loaders; `Soc.load_program/reset_release/read_core_ram`.
4. **Pulse + program gen** ([04](04-pulse-and-program.md)) — envelope library, then the DSL with C
   codegen; golden-check the emitted `main()` against `pulse_sched.S`.
5. **Co-sim** ([06](06-cosim.md)) — `CocotbDriver` + a fixed ADC array; then the `AdcSource` callback;
   then the qutip closed-loop example.
6. **Remote** ([05](05-remote.md)) — wrap `Soc` in a Pyro5 daemon; `RemoteDriver` proxy.

Steps 3–6 each have a self-checking test that reuses an existing SpinalSim scenario as the golden
reference, keeping the framework honest against the real RTL.

---

## RFSoC4x2 addition

The RFSoC4x2 uses the same board server and remote driver as the ZCU216. Its board files and service
setup are documented in [RFSoC4x2 deployment](rfsoc4x2-deployment.md).
