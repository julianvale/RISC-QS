# 01 — Hardware contract & `SocConfig`

The **single source of truth** for every other module: the addresses the SoC exposes, the bit
encodings of each register, the fixed-point scales, and the timing model. The C header
([02-firmware](02-firmware.md)) and the Python `SocConfig` are both *derived from this document* so the
two sides cannot drift — the failure mode that left the RISC-Q reference with three divergent `mmio.h`
copies.

Everything here is taken from the RTL: `src/riscq/soc/RiscvSoc.scala`,
`src/riscq/soc/rf/{PulseParamBuffer,ControlMemMaps}.scala`, `src/riscq/soc/link/*`,
`src/riscq/soc/{PulseTableSoc,Zcu216Top}.scala`, and confirmed against the bare-metal program
`src/riscq/soc/sim/sw/pulse_sched.S`.

---

## 1. Two address spaces

There are two distinct maps, and a module must be explicit about which it uses:

- **CPU map** (§2) — what a program running *on a core* sees on its data bus. Base `0x0`, per core.
  Used by the on-core program ([02-firmware](02-firmware.md)) and, in simulation only, by the cosim
  test-tap ([06-cosim](06-cosim.md)).
- **Host AXI map** (§6) — what an *external host* (PYNQ PS / cosim AXI master) sees. One flat window
  fanned to all cores. Used by [03-driver](03-driver.md) to load programs/envelopes and release reset.

---

## 2. CPU map (per core, data-bus base `0x0`)

Decoded in `RiscvSoc.dMemPortDec` into three regions.

### 2a. Control block `[0x0000, 0x10000)` — blocking reads/writes, core-local

| Address | R/W | Name | Meaning |
|---|---|---|---|
| `0x2000` | R | `fromHost` | host→CPU mailbox word; poll for host commands |
| `0x4000` | R/W | `timeCmp` | software-written 32-bit compare value (batch units) |
| `0x4008` | R | `waitTimeCmp` | **halting** read — CPU stalls until `time + 3 ≥ timeCmp`. The "sleep until a scheduled instant" primitive. |
| `0xbff8` | R | `time` | current 32-bit batch time (registered copy of the SoC batch clock) |
| `0x4200` | R | readout `res` | **halting** read — blocks until the integral settles; payload = sign bit of integrated I (1-bit discrimination) |
| `0x4204` | R | readout `real` | integrated I, `int32` |
| `0x4208` | R | readout `imag` | integrated Q, `int32` |

The readout result is served **core-locally** (not over the link) and is **armed/cleared when the CPU
writes the decoder `dur`** at `0x40000` (see §2b). So the canonical readout sequence is: write decoder
`startTime` + `dur` → read `res`/`real`/`imag` (the reads block until that window's integral lands).

### 2b. RF window `[0x10000, 0x50000)` — posted, **write-only**

Stores here are acked locally in 1 cycle and posted down the link as an ordered `Flow(RfCmd)`. **Reads
are not supported.** Four generator sub-windows, each `0x10000` wide:

| Sub-window | CPU base | Kind |
|---|---|---|
| gate drive | `0x10000` | `PulseParamBuffer`, `pulseNum=4` table |
| readout drive | `0x20000` | `PulseParamBuffer`, `pulseNum=1` table |
| demod LO | `0x30000` | free-running `DemodChannel` |
| readout decoder | `0x40000` | `ReadoutDecoder` |

**Pulse-drive sub-window** offsets (`PulseParamBufferParams`):

| Offset | Name | Notes |
|---|---|---|
| `+0x0` | `fire` | write table index `outId` → enqueue `table[outId]` at this buffer's `startTime` |
| `+0x4` | `freq` | shared carrier frequency (one per buffer, not per slot) |
| `+(i+1)*0x10 +0x0` | `table[i].phase` | |
| `+(i+1)*0x10 +0x4` | `table[i].amp` | |
| `+(i+1)*0x10 +0x8` | `table[i].env` | envelope-RAM line index |
| `+(i+1)*0x10 +0xC` | `table[i].dur` | pulse length in batches |
| `+0x4100` | `startTime` | this buffer's own 32-bit start time |

So gate `table[0]` is `0x10010/14/18/1C`, gate `freq` `0x10004`, gate `fire` `0x10000`, gate
`startTime` `0x14100` — exactly the addresses in `pulse_sched.S`.

**Demod LO** (`0x30000`): `+0x0` `freq`, `+0x4` `phase`. No table, no `startTime` (the LO is not gated).

**Readout decoder** (`0x40000`): `+0x0` `dur` (12-bit; **arms one integration window AND clears the
result sink**), `+0x4100` `startTime`. Results are read back from the control block (§2a), not here.

### 2c. Instruction/data RAM — base `0x80000000`

One shared true-dual-port BRAM, `memDepth=4096 × 32-bit = 16 KiB`. Code, data, and stack all live here;
fetch and load/store both view it at `0x80000000`. **Programs + any tables must fit in 16 KiB.** Reset /
boot PC = `0x80000000`.

---

## 3. Field encoding

The one rule that governs almost every register:

> **Every 16-bit DSP parameter is read from bus bits `[31:16]`** — the stored word is `value << 16`.
> The low 16 bits are ignored. (`bitOffset = 16` in `PulseParamBufferParams`.)

Two exceptions, written in the **low** bits:

- `startTime` (pulse + decoder) — full 32-bit value at `[31:0]`.
- `fire`/`outId` — table index in `[log2Up(pulseNum)-1:0]`.

The control-block registers (`timeCmp`, the readout reads) are plain 32-bit, no shift.

| Field | Type | Fixed-point | Physical meaning |
|---|---|---|---|
| `phase` | s16 | `code = round(θ/π · 2¹⁵)` | angle θ in radians; full turn = 65536 codes |
| `amp` | s16 | `code = round(a · 2¹⁵)`, clamp ±(2¹⁵−1) | amplitude `a ∈ [-1, 1)` |
| `freq` | s16 | `code = round(f/fs · 2¹⁶)` | per-sample phase increment; normalized carrier `= code/65536` cycles/sample |
| `env` | u10 | line index | envelope-RAM base line (0…1023) |
| `dur` (pulse) | u16 | batches | window `[startTime, startTime+dur)` |
| `dur` (decoder) | u12 | batches | window `[startTime, startTime+dur]` (dur+1 inclusive at `timeOffset=0`) |
| `startTime` | u32 | batches | absolute fire time |
| `time` | u32 | batches | current batch counter |

**Batch ↔ time.** `time`, `startTime`, `dur` are all in **batch ticks**, where 1 batch =
`batchSize` (=16) DAC samples. With DAC sample rate `fs`, one batch tick = `batchSize/fs` seconds, so
`batch = round(t_seconds · fs / batchSize)`. (The RISC-Q reference's "1 tick = 2 ns" macro was for its
single-sample 500 MHz clock and does **not** apply here — ours is batch-based; carry `fs` and
`batchSize` in `SocConfig`.)

The waveform the DSP plays for a fired pulse, for lane `k = 0…15` of batch `t`:

```
pulse[k](t) = env[env_line·N + k] · (amp/2¹⁵) · exp( iπ · (freq·(N·t+k) + phase) / 2¹⁵ )   # N = batchSize
```

valid only for `t ∈ [startTime, startTime+dur)`.

---

## 4. Link payloads (informational)

A program never touches these directly — they are the on-wire forms behind the posted RF window and the
readout up-link, documented so the cosim and any RTL-level test agree on them.

```
RfCmd        { address : UInt(18)   # byte offset within the RF window
               data    : Bits(32) } # the raw store word
ReadoutResult{ res  : Bool
               real : SInt(32)
               imag : SInt(32) }
```

One `RfCmd` per accepted CPU store, ordered, no down-path ack. One `ReadoutResult` beat per integration
window, latched into the core-local `ReadoutResultSink`.

---

## 5. Lead-time scheduling contract

The timing model the software must honor:

1. Read `time` (`0xbff8`) to learn "now" (batches).
2. Choose `startTime = time + LEAD`, where **`LEAD` must exceed the posted-link latency** (≈ `linkPipe`
   RegNext stages each way + a few cycles; the sims use 400–1024 batches — generous is fine).
3. Write the buffer's `startTime`, then the table fields, then `fire` — all on the **same ordered
   posted path**, so `fire` enqueues the just-written `startTime`. The arrival time of these writes is
   irrelevant as long as they land before `time` reaches `startTime`.
4. To make two channels (e.g. gate + readout drive) rise on the **same** output cycle, write the
   **same** `startTime` value to both buffers — a software contract backed by equal time-broadcast delay
   to every buffer.

This is why link latency is invisible and why the host never needs to meet a real-time deadline:
parameters are staged ahead, the hardware fires on the clock.

### Worked example (the whole gate-pulse sequence, from `pulse_sched.S`)

```
t        = read32(0xbff8)            # now, in batches
start    = t + 1024                  # LEAD = 1024 batches
write32(0x14100, start)              # gate buffer startTime (full 32-bit)
write32(0x10004, 1800 << 16)         # freq  code 1800
write32(0x10010, 2000 << 16)         # table[0].phase code 2000
write32(0x10014, 9000 << 16)         # table[0].amp   code 9000
write32(0x10018,   10 << 16)         # table[0].env   line 10
write32(0x1001C,    6 << 16)         # table[0].dur   6 batches
write32(0x10000, 0)                  # fire table index 0
```

---

## 6. Host AXI map (`SocMemoryMap`, `Zcu216Top`)

AXI slave `Axi4Config(addressWidth=32, dataWidth=32, idWidth=2)`, host clock domain. The absolute base
is assigned by the Zynq PS block design (the `riscvsoc-bd` flow); offsets below are relative to the slave
base. Five equal regions; per-core sub-windows are a `stride` apart. **Strides
and `regionSize` are derived from `qubitNum`** — for the 14-qubit config they compute to the values
shown, but the framework should read concrete numbers from the contract source (§7), not hard-code them.

| Region | Base | Per-core stride (14q) | Contents |
|---|---|---|---|
| core I/D RAM | `0x000000` | `0x10000` | program/data image → shared BRAM (CPU sees it at `0x80000000`) |
| gate-drive envelope RAM | `0x100000` | `0x4000` | 512-bit complex lines (×4 interpolated → 128-bit stored, via a `WidthAdapter`: 16 masked 4-byte writes per line) |
| readout-drive envelope RAM | `0x200000` | `0x1000` | ×16 interpolated → 32-bit stored lines (direct, no adapter) |
| readout buffers (`robs`) | `0x300000` | `0x2000` | captured ADC trace, host read-back |
| host control block | `0x400000` | — (shared) | see below |

**Host control block** (`MemMapDriverFiber`, base `0x400000`):

| Offset | Name | Meaning |
|---|---|---|
| `+0x00` | `riscqReset` (bit 0) | write `1` to hold **all** cores in reset, `0` to release — the boot gate |
| `+0x10` | `fromHost` | 32-bit host→CPU mailbox (each core reads it at CPU `0x2000`) |
| `+0x40` | `timeOffset[31:0]` | added to free-running `refTime` to form the broadcast batch `time` |
| `+0x44` | `timeOffset[63:32]` | |

**Boot sequence** the host must perform: hold reset → load each core's program into its RAM region →
load envelopes → release reset. Until reset is released, `time` does not advance and the cores are held.
(See `PulseTableSocCpuSim` for the reference flow.)

### Envelope-RAM line format

One RAM line = the whole batch of `N` complex I/Q samples. Logical (reconstructed) width = `N·2·w` =
**512 bits** at `N=16, w=16`; lane `k` at bits `[(2k+2)w−1 : 2kw]`, real in the lower half, imag in the
upper. The host-facing widths are the **interpolated** ones above (gate ×4 → 128-bit, readout-drive ×16
→ 32-bit); the packer in [04-pulse-and-program](04-pulse-and-program.md) must match the interpolation of
the target channel.

---

## 7. `SocConfig` (the Python object) and the source of truth

`SocConfig` is the host-side counterpart of this document — a small, JSON-serializable object that
carries the parameters and *does the unit conversions*, mirroring QICK's `QickConfig`. The
[remote](05-remote.md) client reconstructs it locally from a snapshot so all math runs client-side and
only hardware actions cross the network.

```python
@dataclass
class SocConfig:
    qubit_num: int
    fs: float            # DAC sample rate (Hz)
    batch_size: int = 16 # N samples per batch tick
    data_width: int = 16
    env_addr_width: int = 10
    dur_width: int = 16
    # maps (from the contract): region bases + per-core strides, CPU sub-window offsets

    # unit conversions (all return ints unless noted)
    def freq2code(self, f_hz):  return clamp_s16(round(f_hz / self.fs * 2**16))
    def phase2code(self, rad):  return clamp_s16(round(rad / pi * 2**15))
    def amp2code(self, a):      return clamp_s16(round(a * 2**15))
    def ns2batch(self, t_ns):   return round(t_ns * 1e-9 * self.fs / self.batch_size)
    def batch2ns(self, b):      return b * self.batch_size / self.fs * 1e9

    # address helpers (CPU space and host space)
    def cpu_gate_table(self, i, field): ...      # 0x10000 + (i+1)*0x10 + {phase:0,amp:4,env:8,dur:0xC}
    def host_core_ram(self, core):  return 0x000000 + core * self.core_stride
    def host_gate_env(self, core):  return 0x100000 + core * self.gate_env_stride
    def host_control(self):         return 0x400000
```

**Source of truth & generation.** The goal is to **emit the map + scales from SpinalHDL elaboration** (a
small generator beside `GenPulseTableSoc` that writes `contract.json`), so the contract can never drift
from the RTL — the QubiC/QICK lesson of pinning software to a build-generated map. Until that exists,
`software/riscq/map.py` is the supported evaluated map implementation, and
`gen_header.py` derives `firmware/include/riscq.h` from it (§02). A round-trip check — diff the
generated header's addresses against `pulse_sched.S` — keeps the hand-maintained version honest.

### Minimal viable implementation
Hand-write `contract.py` with the constants in §2/§3/§6 for the default 14-qubit config, plus
`SocConfig` with the conversions above. Add `gen_header.py` (contract → `riscq.h`). Defer the
elaboration-emitted JSON until the hand-written version is proven against the sims.

### Open questions
- Confirm `fs` for the target board (sets every freq/time conversion). The DSP docs quote 720–830 MHz
  OOC fmax and a 500 MHz reference clock; the *DAC sample rate* `fs` must be pinned per build.
- Whether to fold `withMul` (RV32IM) and `qubitNum` into the generated contract so one snapshot fully
  describes a build.
