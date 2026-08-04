# 04 — Pulse data & program generation

The Python library that turns a user's experiment, written in **physical units**, into the two things
the SoC needs: **envelope sample data** for the pulse-envelope RAM, and a **control program** that
schedules the pulses. Two coupled parts in one module: `pulse.py` (the data) and `program.py` (the
schedule).

The governing principle ([README](README.md) §2): the RISC-V core has a real toolchain, so a control
program is **compiled C** or a **list of MMIO writes** — never a custom assembler. QICK's tProc
compiler and QubiC's distributed-processor assembler exist only because their sequencers have no
toolchain; we delete that whole layer.

---

## 1. Purpose & scope

In scope:
- A numpy **envelope library** (`gaussian`, `cos_edge_square`, `DRAG`, `square`) returning physical
  complex envelopes.
- A **packer** that lowers envelopes to the host-AXI write stream for a given channel's envelope RAM
  (01 §6), respecting that channel's interpolation.
- A small **pulse-sequence DSL** (`Program`) with **pulse-table scheduling** — pre-load each distinct
  pulse into a buffer slot, then launch by `(start time, slot index)` — lowering to C compiled to an ELF
  (the on-core program).

Out of scope (extension points, §5): parameter sweeps as first-class objects, and any gate/circuit
front-end. All fixed-point scales are owned by `SocConfig` ([01](01-hardware-contract.md) §7) — this
module imports them and never redefines Q15 (the drift trap the reference fell into).

---

## 2. Where it lives

```
software/python/riscq/
  pulse.py      # envelope generators + the envelope-RAM packer
  program.py    # the Program DSL + pulse-table allocation + C codegen
```

`pulse.py` depends only on numpy + `SocConfig`. `program.py` depends on `SocConfig` and shells out to
the [02-firmware](02-firmware.md) Makefile. Neither imports a driver — the
[03-driver](03-driver.md) consumes their outputs.

---

## 3. Design

### 3a. Pulse data — `pulse.py`

**Envelope generators.** Each returns a complex numpy array of physical samples in `[-1, 1]`, sampled
at the DAC rate `fs` (so `len == round(t_width · fs)`), mirroring RISC-Q's `pulse.py` and the QICK/QubiC
shape libraries:

```python
def gaussian(t_width, fs, sigmas=3) -> np.ndarray          # complex64, real Gaussian
def cos_edge_square(t_width, fs, ramp_fraction=0.25) -> np.ndarray   # flat-top, raised-cosine edges
def drag(t_width, fs, sigmas=3, beta=0.0) -> np.ndarray    # gaussian + i·beta·d/dt (quadrature)
def square(t_width, fs) -> np.ndarray                      # constant 1.0
```

Returning *physical* complex samples (not pre-scaled codes) keeps the library independent of bit
widths; quantization happens once, in the packer.

**Packer.** Lowers an envelope to the **envelope-RAM line format** of 01 §6: a line is `N=16` complex
samples, each a Q15 I/Q pair, real in the low half / imag in the high half of its lane. The packer:

1. Quantizes with `SocConfig.amp2code` (Q15, clamped) — one shared definition of the scale.
2. Pads the sample count up to a whole number of `N=16`-sample lines.
3. Emits the **host-AXI write stream for the target channel**, matching that channel's interpolation
   (01 §6):
   - **gate-drive** (×4): each 512-bit logical line is stored as a 128-bit line through the
     `WidthAdapter` — 16 masked 4-byte writes per line (low→high lane order).
   - **readout-drive** (×16): each line is a single 32-bit stored word — direct, no adapter.

```python
def pack_envelope(env: np.ndarray, channel: str, cfg: SocConfig) -> EnvImage
# EnvImage = ordered (byte_offset, data, mask) tuples, ready for Driver.write_words / masked writes.
```

The packer returns *host-space* offsets relative to the channel's envelope region base; the
[03-driver](03-driver.md) adds `cfg.host_gate_env(core)` / `cfg.host_readout_env(core)` and the channel
stride. The `env` field a pulse references (01 §3) is the **line index** where its waveform was packed.

### 3b. Program generation — `program.py`

A `Program` describes an experiment as **pulse definitions** plus a **timeline of launches**, in
physical units. The split mirrors the hardware: a [`PulseParamBuffer`](01-hardware-contract.md#2b-rf-window-0x10000-0x50000--posted-write-only)
holds a small *table* of pulse-parameter entries (`pulseNum` = 4 on the gate buffer, 1 on readout
drive), and `fire(slot)` enqueues `table[slot]` at the buffer's current `startTime`. So the cost of a
launch splits too: programming an entry is 4–5 register writes; *re-firing* an already-loaded entry is
just `set_start_time` + `fire` — two writes. The whole reason the buffer is a table (not one register
set) is to be loaded once and fired by index.

```python
p = Program(cfg)
x90  = p.define_pulse("gate", env=g90,  freq=4.9e9, phase=0.0, amp=0.33, dur=24e-9)  # → slot 0
x180 = p.define_pulse("gate", env=g180, freq=4.9e9, phase=0.0, amp=0.66, dur=24e-9)  # → slot 1
p.play(x90,  t=300e-9)        # launch: set_start_time + fire(0)
p.play(x180, t=500e-9)        # launch: set_start_time + fire(1)
p.play(x90,  t=700e-9)        # re-fire slot 0 — no re-programming
ro = p.readout(t=900e-9, demod_freq=7.1e9, demod_phase=0.0, dur=200e-9)
p.sleep_until(t=1.2e-6); p.read_result(ro)
```

Channels map to the CPU sub-windows (01 §2b): `"gate"`→`0x10000`, `"readout"`→`0x20000`,
`"demod"`→`0x30000`, `"decoder"`→`0x40000`.

**Pulse-table scheduling (the headline).** `define_pulse(channel, **params)` assigns the parameter set
`{phase, amp, env, dur}` to a **slot** on that channel's buffer — deduplicating identical sets — and
records the entry's carrier `freq`. The lowering emits the slot's four field writes **once, in the init
block**. `play(handle, t)` then emits only `set_start_time(buf, ns2batch(t))` + `fire(buf, slot)`. **When
the number of distinct pulses on a buffer is `≤ pulseNum`, every launch is two writes** — precisely the
"start time + index" the buffer was built for. This is the main lever on the core's two real limits: CPU
cycles per launch and 4 KiB of program space.

- *`freq` is shared per buffer*, not per slot ([01 §2b](01-hardware-contract.md)). The allocator tracks
  the buffer's current `freq` and inserts a `set_freq` before a `fire` only when the next pulse's carrier
  differs — so a fixed-frequency drive line (the common case: one qubit frequency; gates differing in
  envelope/amp/phase/duration) writes `freq` once in init and never again.
- *Overflow fallback.* If a buffer needs more than `pulseNum` distinct pulses (e.g. a continuous phase or
  amplitude sweep), the allocator spills — re-programming only the changed fields right before the `fire`
  for the pulses that don't fit. `program.py` `log`s cached-vs-reprogrammed launch counts so a tight
  program can see the cost.
- An inline `p.play("gate", t=…, env=…, freq=…, phase=…, amp=…, dur=…)` is sugar: it `define_pulse`s on
  first sight (dedup by parameter tuple) and launches, so the optimization applies even without explicit
  handles.

**Lowering to C.** Every physical value goes through `SocConfig` (Hz→code, rad→code, ns→batch); the
schedule honors the **lead-time contract** ([01 §5](01-hardware-contract.md)) — the first timed op reads
`time`, each absolute `t` becomes `startTime = now + LEAD` (configurable, default ≈1024 batches), and
**co-firing channels get the same `startTime`** so they rise together. The result is one `main()` of
`riscq.h` calls ([02-firmware](02-firmware.md)) — the QubiC `codegen_c.py` shape, adapted to our header —
which `program.py` compiles with the firmware `Makefile` to an ELF. **All physical→code conversion
happens in Python**; the emitted C carries only integer code literals (the core never does soft-float).
Envelopes are *not* embedded — `pulse.py` packs them and the [driver](03-driver.md) loads them;
`define_pulse(... env=g ...)` resolves to the line index where `g` was packed.

```c
#include "riscq.h"
int main(void) {
  /* ---- init: load the pulse table once ---- */
  set_freq (GATE, 1800);                                                       /* shared carrier */
  set_phase(GATE, 0, 2000); set_amp(GATE, 0,  9000); set_env(GATE, 0, 10); set_dur(GATE, 0, 6);  /* slot 0 */
  set_phase(GATE, 1, 0);    set_amp(GATE, 1, 18000); set_env(GATE, 1, 22); set_dur(GATE, 1, 6);  /* slot 1 */
  /* ---- schedule: launch by (start time, index) ---- */
  set_start_time(GATE, now() + 1024); fire(GATE, 0);    /* slot 0 */
  set_start_time(GATE, t1);           fire(GATE, 1);     /* slot 1 */
  set_start_time(GATE, t2);           fire(GATE, 0);     /* slot 0 again — two writes, no re-program */
}
```

> **No host-driven lowering.** A core's RF window/control block aren't in the host AXI map
> ([01 §6](01-hardware-contract.md)), so on real hardware only the on-core program can reach them, and
> `program.py` emits **C only**. The cosim can `poke`/`peek` those registers over the test tap for the
> register-level golden and bring-up ([06-cosim](06-cosim.md)) — an ad-hoc debug capability of the cosim
> driver, not a `program.py` output.

### Honesty check
The emitted init+launch for slot 0 must reproduce, field-for-field, the addresses and `<<16` packing of
`src/riscq/soc/sim/sw/pulse_sched.S` (01 §5 worked example): `set_freq`→`0x10004`, slot-0
fields→`0x10010/14/18/1C`, `set_start_time`→`0x14100`, `fire`→`0x10000`. That hand-written program is the
module's golden reference.

---

## 4. Connections

- **← [01-hardware-contract](01-hardware-contract.md):** `SocConfig` supplies every conversion + the
  CPU/host addresses. This module hard-depends on it and adds nothing to the contract.
- **→ [02-firmware](02-firmware.md):** emits C against `riscq.h` and compiles with its Makefile.
- **→ [03-driver](03-driver.md):** the driver loads the ELF and the packed envelopes. `Program` and
  `pulse.py` produce data; the driver moves it.
- **→ [06-cosim](06-cosim.md):** runs the same ELF + envelopes against the Verilated SoC; its test-tap
  `poke`/`peek` is the only direct-register surface, and it is sim-only.

---

## 5. Extension points

- **Parameter sweeps as first-class objects** — a `Sweep(start, stop, n, loop=...)` value usable in
  place of any physical argument (QICK's `QickParam`/`QickSweep1D`). It lowers to a C loop that rewrites
  the swept field and re-fires; when the swept dimension fits in `pulseNum` slots it stays in the cached
  table, otherwise it spills (§3b). Deferred until a second experiment needs it.
- **Gate / circuit front-end** — a layer that resolves named gates against a calibration store into
  pulses (QubiC's `distproc` passes + `QChip`), emitting into this `Program`. Explicitly out of v1
  scope; the DSL here is the lowering target it would target.
- **Envelope dedup** — content-hash envelopes across a program and pack each unique waveform once
  (QubiC `_hash_env`, QICK's named envelope library), so repeated pulses share a line index.

---

## 6. Minimal viable implementation

1. `pulse.py`: `gaussian` + `cos_edge_square` + the **gate-drive** packer (×4 / `WidthAdapter`).
2. `program.py`: `define_pulse` / `play` / `readout` / `sleep_until`, **pulse-table allocation**
   (load-once, fire-by-index), lead-time resolution, and the C codegen.
3. Golden-check the emitted slot-0 init+launch against `pulse_sched.S`; compile it with the firmware
   Makefile and confirm it loads + runs in `PulseTableSocCpuSim`.

Add the readout-drive packer, the overflow/spill fallback, and `wait_host` once the cached path is proven.

## 7. Open questions

- **DSL altitude.** Is the per-channel `play/readout` API the right ceiling, or should v1 already expose
  a thin "gate" convenience (still no compiler, just named pulse macros)? Default: keep it at pulses.
- **LEAD selection.** Fixed default vs computed from `linkPipe` + program length. Default: a generous
  constant, surfaced as a `Program(lead=...)` knob.
- **Multi-core programs.** One `Program` per core vs a multi-core container that emits N ELFs. Default:
  one `Program` per core; the [03-driver](03-driver.md) `Soc` facade loops over cores.
- **How many launches can be queued ahead.** `fire` enqueues into the generator's `TimedQueue`, so the
  CPU can stage several `(set_start_time, fire)` pairs before any have played — bounded by that queue's
  depth. Confirm the depth from the RTL and have the scheduler either pace with `sleep_until` once it is
  full, or document the max in-flight launch count. (Until pinned, the allocator stays conservative —
  one launch outstanding per buffer.)
