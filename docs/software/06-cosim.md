# 06 — Co-simulation (cocotb + qutip ADC injection)

Run the **real control software against the real RTL**, in pure Python, with ADC data the user supplies
from their own quantum-system simulator. This is requirement #5 and the reason the [driver](03-driver.md)
is an abstract seam: the *same* experiment and program code that drives hardware drives the simulator —
only the backend swaps.

---

## 1. Purpose & scope

**In scope**

- A `CocotbDriver` that implements the [`Driver` ABC](03-driver.md) by driving a Verilated
  `PulseTableSoc` under cocotb.
- An `AdcSource` interface for feeding ADC samples into the DUT's converter inputs — open-loop (a fixed
  array / callback) and closed-loop (a user `QuantumModel`, e.g. qutip).
- A run loop that mirrors the existing SpinalSim sign-off scenarios so the Python co-sim is a faithful,
  golden-checkable stand-in for them.

**Out of scope** — the RTL itself (owned by `src/riscq/...`), and the SpinalSim Scala testbenches, which
stay as the bit-exact RTL goldens. This module is the *software-in-the-loop* complement to them: where
the Scala sims prove the hardware, the cosim proves the **software** against that hardware.

**Why cocotb.** QICK ships no software co-sim at all — "simulation" there means hand-written RTL
testbenches fed hex dumps. That is a gap, not a model to copy. This project's discipline is
golden-model + lock-step (RVLS for the core, composed goldens for DSP); a Python co-sim where the
production `Soc`/`program`/`pulse` stack runs against the Verilated SoC, with the user injecting ADC
stimulus, extends that discipline up into the software. Because `CocotbDriver` *is* a `Driver`, an
experiment validated in cosim runs unchanged on the [PYNQ backend](03-driver.md).

---

## 2. Where it lives

```
software/python/riscq/cosim/
  __init__.py
  build.py        # generate PulseTableSoc Verilog (withTest=true) + Verilate it
  driver.py       # CocotbDriver(Driver) — AXI host master + per-core test-tap master
  adc.py          # AdcSource ABC, FixedAdc, CallbackAdc; QuantumModel ABC (closed-loop)
  runner.py       # cosim entry: wires DUT + AdcSource, runs the user experiment coroutine
  examples/
    vna_open_loop.py        # reproduces PulseTableSocSim's ADC-tone VNA readout in Python
    dispersive_qutip.py     # closed-loop QuantumModel example
```

The DUT is built once (`build.py`) and reused across runs.

---

## 3. Design

### 3a. `CocotbDriver` — a `Driver` over the Verilated SoC

The DUT is `PulseTableSoc` elaborated with **`withTest=true`** (via the existing `GenPulseTableSoc` /
`SpinalVerilog`), then Verilated — the project already runs SpinalSim on Verilator, so the toolchain is
in place. `withTest=true` exposes, per core, the data-bus **test tap** (`dTap`, a Tilelink master into
`dMemPortDec`) that `PulseTableSocSim` already uses; without it the host could not reach the RF window or
the control-block reads in simulation (see below).

`CocotbDriver` implements the same minimal ABI as every other backend ([03-driver](03-driver.md)), split
across two access paths because the SoC has **two address spaces** ([01 §1](01-hardware-contract.md)):

| `Driver` call | cosim path | covers |
|---|---|---|
| `write_word/words(addr, …)` to host space | drive the DUT **host AXI4** slave master | core RAM, gate/readout envelope RAM, `robs`, host control block ([01 §6](01-hardware-contract.md)) |
| `reset_hold/reset_release()` | host AXI write to control `+0x00` | the boot gate |
| `poke(cpu_addr, …)` / `peek(cpu_addr)` to **CPU space** | drive a core's **test tap** (`dTap`) | the posted RF window + control-block reads (`time`, `res/real/imag`) — **sim-only** |

The host AXI4 master is a small AXI4 write/read driver (`cocotbext-axi`, or a ~100-line bespoke driver
against the `Axi4Config(32,32,id=2)` slave). The test-tap master mirrors `PulseTableSocSim`'s per-core
`MasterAgent` on `dMemPortDec`.

> **What the test tap is for.** In cosim you run the production way — load a compiled ELF into core RAM
> over AXI, release reset, the core runs itself — *and*, because the `withTestTap` master exists in the
> test build, you can additionally `poke`/`peek` a core's CPU-space registers (the RF window, `time`,
> `res/real/imag`) directly from Python. On **real hardware the test tap does not exist**, so direct
> register access is sim-only — use it to reproduce the register-level RTL sim (`PulseTableSocSim`) and
> for bring-up, never as a control path. Results from a real program still come back the production way
> (the on-core program writes them to data RAM; the host reads that RAM region over AXI — same as on
> hardware).

**Async nuance.** cocotb owns the event loop: the test is a coroutine the simulator drives, so every
`Driver` method here is a **coroutine** (`await` clock edges to complete a bus transaction). The same
logical API is synchronous on PYNQ and async in cosim. The user's experiment is written as an
`async def` and handed to `runner.run(...)`; a thin `await`-based facade keeps it reading like the
hardware code (`await soc.load_program(0, elf); await soc.reset_release(); r = await soc.read_core_ram(0, RESULT_OFFSET)`).
The bridge is intentionally explicit rather than hidden behind a thread, to keep determinism — the whole
point of a co-sim.

### 3b. ADC injection — the user-facing centerpiece

The cosim drives the DUT's **ADC input ports** (the `adcMap` converter-edge inputs of `PulseTableSoc`).
The user controls what those samples are through one interface:

```python
class AdcSource:
    """Supplies ADC samples for a readout window. batchSize complex samples per batch tick."""
    def adc_samples(self, core: int, t_batch: int) -> np.ndarray:  # shape (batch_size,), complex
        ...
```

Two ready implementations cover the common cases:

- **`FixedAdc(array)`** / **`CallbackAdc(fn)`** — *open-loop*. The user hands a fixed numpy waveform or a
  plain function of `(core, t_batch)`. This is the VNA-style case: a readout tone whose frequency the
  program sweeps and demodulates. It is exactly what `src/riscq/soc/sim/PulseTableSocSim.scala` already
  does at the RTL level — feed a synthetic ADC tone, fire the decoder, check the demodulated
  `res/real/imag`. Use that scenario as the **open-loop golden**: the Python `vna_open_loop.py` example
  should reproduce its tone and assert the same demod result, proving `CocotbDriver` + `AdcSource` agree
  with the established RTL sim.

- **`QuantumModel`** — *closed-loop*, the marquee extension. Each shot, the harness captures the **DAC
  drive** the SoC just played (the gate/readout-drive output ports), hands it to the user's model, and
  feeds the model's response back into the ADC ports:

```python
class QuantumModel:
    """User's physics. Given the DAC drive the SoC played this window, return the ADC response."""
    def adc_response(self, t_batch: int, dac_drive: np.ndarray) -> np.ndarray:  # complex, (batch_size,)
        ...
```

  `dac_drive` is the captured complex envelope for this batch (already reconstructed to `batch_size`
  lanes); the return is the cavity output the ADC digitizes. The harness handles the SoC side; the user
  writes only physics. A minimal dispersive-readout sketch (illustrative — not a working simulation):

```python
import qutip as qt, numpy as np

class DispersiveReadout(QuantumModel):
    def __init__(self, chi, kappa, qubit_state):       # qubit_state: 0 or 1
        self.chi, self.kappa, self.q = chi, kappa, qubit_state
        self.a = qt.destroy(10)                         # cavity Fock space
        self.cav = qt.basis(10, 0)                      # cavity starts empty

    def adc_response(self, t_batch, dac_drive):
        # cavity pulled ±chi by the qubit state; drive = the readout DAC envelope this batch
        H = (self.chi if self.q else -self.chi) * self.a.dag() * self.a
        ts = np.arange(len(dac_drive))
        res = qt.mesolve(H, self.cav, ts,
                         c_ops=[np.sqrt(self.kappa) * self.a],
                         e_ops=[self.a],
                         args={"drive": dac_drive})
        self.cav = res.states[-1]                       # carry cavity state across batches
        return np.asarray(res.expect[0])                # ⟨a⟩ → the ADC sees the leaked field
```

  The qubit-state-dependent cavity pull is what the `ReadoutDecoder` then demodulates into different
  `res` values — i.e. the whole readout chain is exercised end-to-end against a real physics model. Keep
  `QuantumModel` strictly optional: `qutip` is an extra dependency, and the open-loop `AdcSource` needs
  nothing but numpy.

### 3c. The run loop

`runner.run(dut, experiment, adc_source)` structurally mirrors the existing Scala sims:

```
reset_hold()                                   # host control +0x00 = 1   (cores held; time frozen)
load_program(core, elf)                        # AXI → core RAM           (like PulseTableSocCpuSim)
load_envelopes(core, channel, samples)         # AXI → env RAM            (packed per 04 / 01 §6)
reset_release()                                 # host control +0x00 = 0   (time advances, cores run)
fork: adc_service(adc_source)                   # each readout window: drive ADC ports from the source
                                               #   closed loop → capture DAC drive, call QuantumModel
await experiment(soc)                           # wait, then read results from core RAM
results = read_back()                           # core-RAM AXI reads
```

A register-level test (reproducing `PulseTableSocSim`) skips the ELF: it `poke()`s the RF/control
sequence over the test tap and `peek()`s `res/real/imag` — a sim-only shortcut that needs no toolchain,
not a hardware path.

The `adc_service` coroutine runs alongside the experiment, watching the DUT time and the
decoder/`startTime` windows, and presenting `adc_source.adc_samples(...)` (or the closed-loop response)
on the ADC ports for each window. Same `Soc` facade, same envelope packer, same program — only the
backend is `CocotbDriver`.

---

## 4. Connections

- [03-driver](03-driver.md) — `CocotbDriver` is one more `Driver` backend; `Soc` and all loaders are
  reused verbatim. Swapping `PynqDriver` ↔ `CocotbDriver` is the entire HW-vs-sim difference.
- [04-pulse-and-program](04-pulse-and-program.md) — the compiled program and the envelope packer are
  backend-agnostic; the cosim consumes them unchanged.
- [01-hardware-contract](01-hardware-contract.md) — the host AXI map (§6) drives core RAM/env/control;
  the CPU map (§2) is reached over the test tap; the field encodings (§3) and the envelope-line format
  (§6) are shared with the packer.
- RTL sims — `PulseTableSocSim` (open-loop ADC tone, register-level over the test tap) and
  `PulseTableSocCpuSim` (ELF load, on-core program) are the structural and golden references for this loop.

---

## 5. Extension points

- **Closed-loop physics** beyond qutip — any object implementing `QuantumModel.adc_response` works
  (analytic model, a cached impulse response, a different simulator).
- **Multi-qubit / crosstalk** — `adc_samples(core, …)` is already per-core; a model spanning cores can
  key on all captured DAC drives.
- **Other simulators** — Icarus instead of Verilator if a non-Verilator path is ever needed; the cocotb
  layer is simulator-agnostic.
- **Noise/imperfections** — wrap an `AdcSource` to add measurement noise, IQ imbalance, or converter
  quantization on top of any model.

---

## 6. Minimal viable implementation

1. `build.py` — emit `PulseTableSoc` Verilog (`withTest=true`) and Verilate it.
2. `CocotbDriver` with the host-AXI path + reset gating; `DummyAdc` (zeros) on the ADC ports.
3. `FixedAdc` reproducing `PulseTableSocSim`'s VNA readout tone in pure Python, asserting the same
   demodulated `res/real/imag` — the open-loop golden. (The test-tap poke path is the quickest first
   target — no toolchain needed; the on-core ELF flow follows.)
4. `CallbackAdc` for swept/parametric tones.
5. `QuantumModel` + the `dispersive_qutip.py` example as the closed-loop demonstrator.

Each step is gated by matching an existing RTL-sim result, keeping the Python co-sim honest.

---

## 7. Open questions

- **ADC-port surface in the Verilated DUT.** Confirm the `adcMap` inputs and DAC-drive outputs are
  top-level ports of `PulseTableSoc` (and not buried behind converter-edge boxes); if buried, add thin
  `simPublic`/IO taps in the test build so cocotb can read DAC drive and write ADC samples.
- **Closed-loop timing granularity.** Per-batch `QuantumModel` calls are simplest but may be slow for
  long readout windows; an alternative is one model call per readout window with the full drive vector.
  Pick per-window if per-batch qutip is too costly.
- **Sample-rate bridging.** The model works in physical time; the harness maps batches↔seconds via
  `SocConfig` ([01 §3](01-hardware-contract.md), `fs`/`batch_size`). Confirm `fs` so injected ADC
  waveforms land at the right phase.
- **cocotb sync bridge ergonomics.** Whether to expose only the `async` API or also a blocking
  convenience wrapper for users who don't want to write coroutines.
