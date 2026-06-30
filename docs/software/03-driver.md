# 03 — Driver layer & the `Soc` facade

The Python layer that **controls the SoC through its memory map**, and the seam that makes every
backend interchangeable. Experiment code, program generation ([04](04-pulse-and-program.md)), and the
`Soc` facade talk to an abstract `Driver`; whether the bytes land on a real ZCU216, a cocotb
simulation, or a remote board is a one-line choice of backend.

Grounded entirely in the [01-hardware-contract](01-hardware-contract.md) host AXI map (§6).

---

## 1. Purpose & scope

**In scope:** the `Driver` abstract interface and its backends; the `Soc` facade that knows the memory
map and exposes program-load / envelope-load / reset / read-back; the shared **ELF loader** and
**envelope-write** plumbing.

**Out of scope:** how programs and envelopes are *generated* ([04](04-pulse-and-program.md)); the
network transport ([05](05-remote.md)) and cocotb harness ([06](06-cosim.md)) — those are *backends*
that implement this module's `Driver` interface, defined in their own specs.

The design distills the RISC-Q reference `driver.py` (a 5-method swappable ABI), QICK's `SocIP`
register-over-MMIO + config-dict, and QubiC's `PLInterface` name-dispatch + `AbstractCircuitRunner`
(local and RPC interchangeable). The single idea behind all three: **one narrow interface, many
backends.**

---

## 2. Where it lives

```
software/python/riscq/
  driver/
    base.py      # Driver ABC
    pynq.py      # PynqDriver        (real ZCU216, board-only deps)
    dummy.py     # DummyDriver       (host-side testing)
    # cocotb.py  → CocotbDriver  lives in cosim/ ([06])
    # remote.py  → RemoteDriver  lives in remote.py ([05])
  soc.py         # Soc facade + ELF loader + envelope-write
```

`CocotbDriver` and `RemoteDriver` are written in their own modules but **import and subclass
`driver.base.Driver`** so they drop into `Soc` exactly like the others.

---

## 3. Design

### 3a. The `Driver` ABC

The whole seam is five methods over the **host AXI address space** ([01](01-hardware-contract.md) §6),
plus two board-only optionals. Everything else (`Soc`, program-gen, remote) is built on top.

```python
class Driver(ABC):
    # --- the core ABI: raw access to the host AXI window ---
    @abstractmethod
    def write_word(self, addr: int, data: int) -> None: ...
    @abstractmethod
    def write_words(self, addr: int, words: Sequence[int]) -> None: ...   # bulk; the load path
    @abstractmethod
    def read_word(self, addr: int) -> int: ...

    # --- boot gate (host control block +0x00) ---
    @abstractmethod
    def reset_hold(self) -> None: ...        # write 1
    @abstractmethod
    def reset_release(self) -> None: ...     # write 0

    # --- board-only, optional (no-op elsewhere) ---
    def set_ref_clks(self, lmk_freq=None, lmx_freq=None) -> None: ...     # xrfclk
    def program_bitstream(self, path: str) -> None: ...                   # pynq.Overlay
```

`write_words` is the load primitive — **lean on it, never loop `write_word` for bulk data.** The
reference shipped programs/envelopes one 32-bit word per HTTP request; that is the slow path and we
avoid it. A backend implements `write_words` as the most efficient bulk transfer it has (a tight MMIO
loop, an AXI burst BFM call, one RPC).

All addresses passed to a `Driver` are **host-AXI offsets**; the `Soc` facade is the only thing that
knows the region/stride arithmetic, so backends stay dumb.

### 3b. Backends

**`PynqDriver`** — the real ZCU216, running on the Zynq PS under PYNQ.

```python
class PynqDriver(Driver):
    def __init__(self, base=AXI_BASE, span=AXI_SPAN, bitstream=None):
        from pynq import MMIO            # board-only, imported lazily
        if bitstream: self.program_bitstream(bitstream)
        self.mmio = MMIO(base, span)
    def write_word(self, addr, data):   self.mmio.write(addr, data)
    def write_words(self, addr, words): # contiguous MMIO writes
        for w in words: self.mmio.write(addr, int(w)); addr += 4
    def read_word(self, addr):          return self.mmio.read(addr, 4)
    def reset_hold(self):    self.write_word(self.ctrl(0x00), 1)
    def reset_release(self): self.write_word(self.ctrl(0x00), 0)
    def set_ref_clks(self, lmk_freq=None, lmx_freq=None):
        import xrfclk; xrfclk.set_ref_clks(lmk_freq=lmk_freq, lmx_freq=lmx_freq)
    def program_bitstream(self, path):
        from pynq import Overlay; self.overlay = Overlay(path)
```

`pynq`/`xrfclk` are **board-only** and imported lazily, gated behind a `riscq[board]` install extra so
the host package installs cleanly on a laptop. (`ctrl(off)` = the host control-block address; `Soc`
supplies it — see 3c.)

**`DummyDriver`** — host-side testing / golden checks. Records every write and serves a backing dict so
tests can assert the exact `(addr, data)` stream a load (or a test-tap poke sequence) produces.

```python
class DummyDriver(Driver):
    def __init__(self): self.mem = {}; self.writes = []
    def write_word(self, addr, data): self.mem[addr] = data; self.writes.append((addr, data))
    def write_words(self, addr, words):
        for w in words: self.write_word(addr, w); addr += 4
    def read_word(self, addr): return self.mem.get(addr, 0)
    def reset_hold(self):  self.write_word(self.ctrl(0x00), 1)
    def reset_release(self): self.write_word(self.ctrl(0x00), 0)
```

**`CocotbDriver`** ([06](06-cosim.md)) and **`RemoteDriver`** ([05](05-remote.md)) are the simulation
and network backends — same five methods, so `Soc` and all experiment code run **unmodified** across
hardware, sim, and remote. This interchangeability *is* the "PYNQ for hardware, cocotb for sim"
requirement (README §2, principle 3); it isn't special-cased anywhere above `Driver`.

### 3c. The `Soc` facade

`Soc` is the only object that knows the memory map. It owns a `Driver` and a
[`SocConfig`](01-hardware-contract.md) (region bases + per-core strides + the address helpers) and
turns "load core 3's program", "play this envelope", "release the cores" into the right host-AXI
writes.

```python
class Soc:
    def __init__(self, driver: Driver, cfg: SocConfig):
        self.drv, self.cfg = driver, cfg
        driver.ctrl = lambda off: cfg.host_control() + off   # backends address the control block via Soc

    # ---- boot ----
    def reset_hold(self):    self.drv.reset_hold()
    def reset_release(self): self.drv.reset_release()
    def set_time_offset(self, batches: int):
        self.drv.write_word(self.cfg.host_control()+0x40, batches & 0xffffffff)
        self.drv.write_word(self.cfg.host_control()+0x44, batches >> 32)
    def set_from_host(self, word: int):
        self.drv.write_word(self.cfg.host_control()+0x10, word)

    # ---- program load ----
    def load_program(self, core: int, elf_path: str):
        base = self.cfg.host_core_ram(core)                 # CPU 0x80000000 ↔ this host offset
        for addr, data in elf_words(elf_path):              # SHF_ALLOC sections, 32-bit LE
            self.drv.write_words(base + (addr - 0x80000000), data)

    # ---- envelope load ----
    def load_envelope(self, core: int, channel: str, samples: np.ndarray):
        words = pack_envelope(samples, channel, self.cfg)   # packer from [04]
        self.drv.write_words(self.cfg.host_env(core, channel), words)

    # ---- read-back ----
    def read_core_ram(self, core: int, offset: int) -> int:        # always available
        return self.drv.read_word(self.cfg.host_core_ram(core) + offset)
    def read_robs(self, core: int, n: int) -> np.ndarray: ...      # captured ADC trace (01 §6)
```

**ELF loader** (`elf_words`) lives here, once: walk `SHF_ALLOC` sections with `pyelftools`, emit
`(sh_addr, [32-bit LE words])`. The reference duplicated this across `multicore/` and `qec/` clients —
we keep a single copy. The **envelope packer** is shared too, but its bit-layout knowledge lives in
[04](04-pulse-and-program.md) (`pack_envelope`); `Soc` only routes the resulting word stream to the
right region.

`load_envelope` must respect the per-channel **interpolation / stored width** ([01](01-hardware-contract.md)
§6): the gate-drive region is 512-bit logical lines written through a `WidthAdapter` (16 masked 4-byte
writes per line), the readout-drive region is direct 32-bit lines. `pack_envelope` produces the correct
host-facing word stream for the channel; `Soc.load_envelope` just streams it with `write_words`.

### 3d. Reachability — what the host AXI map can and cannot reach (read this)

The host AXI `SocMemoryMap` exposes **only** four things ([01](01-hardware-contract.md) §6): core I/D
RAM, the envelope RAMs, the `robs` capture buffers, and the host control block. It does **not** expose a
core's CPU-space **RF window** (`0x10000…`) or **control block** (`time`, `waitTimeCmp`, and
`res/real/imag@0x4200/04/08`). Consequences a backend author must not get wrong:

- **Readout results round-trip through core RAM on real hardware.** The CPU control block (where
  `res/real/imag` live) is *not* host-addressable. The firmware ([02](02-firmware.md)) must therefore
  write results to a known RAM location and the host reads them back with `read_core_ram(core, off)`.
  The RISC-Q examples do exactly this (store results to `0x80000400`, host reads that word). So:

  ```python
  res = soc.read_core_ram(core, RESULT_OFFSET)   # works on HW, sim, remote — always
  ```

- **Direct register poking (host writes a core's RF/control registers) does NOT work on the stock
  board.** Driving CPU-space addresses like `0x14100`/`0x10004` requires a second master into the
  data-bus decode — the `withTestTap` port — which exists only in the **cosim** build ([06](06-cosim.md))
  or behind a future host-AXI extension. On real hardware, the on-core program is the only way to touch
  the RF window. `Soc` reflects this:

  ```python
  def read_control(self, core, cpu_addr): ...   # sim-only (test-tap driver); raises otherwise
  ```

  `read_core_ram` is always available; `read_control` / direct RF writes are a sim-only capability of
  the test-tap path.

---

## 4. Connections

- **[01](01-hardware-contract.md)** supplies `SocConfig` (addresses, strides, conversions). `Soc` is its
  consumer; backends never see addresses they didn't get from `Soc`.
- **[04](04-pulse-and-program.md)** produces the ELF that `load_program` consumes and the envelope
  arrays `load_envelope` consumes.
- **[05](05-remote.md)** / **[06](06-cosim.md)** are `Driver` implementations — the only thing that
  changes between bench, network, and sim.

---

## 5. Extension points

- **More backends**: anything that can move words in/out of the AXI window — a JTAG/serial bridge, a
  second FPGA — is just another `Driver`.
- **Register-by-name access** (QICK `SocIP` style): a thin layer mapping symbolic register names to
  host-control offsets, if the control block grows. Not needed for v1's four registers.
- **Typed result primitives** (QubiC `S11`/`Sdbuf`): wrap `read_robs`/`read_core_ram` results in
  numpy-backed types that know their packing. v1 returns raw ints/arrays.
- **Bulk/burst transfers**: `PynqDriver.write_words` can move to a PYNQ DMA path if MMIO loads of the 4 KiB
  program / envelope RAM become a bottleneck.

---

## 6. Minimal viable implementation

1. `Driver` ABC + `DummyDriver`.
2. `Soc` with `load_program`, `reset_hold/reset_release`, `read_core_ram`, and the shared `elf_words`
   loader.
3. **Golden check:** run `load_program` through a `DummyDriver` and assert the recorded `(addr, data)`
   stream matches the word-by-word image that `PulseTableSocCpuSim` streams over `io.axi` to
   `coreMemOffset(0)` — same ELF, same addresses. This validates the loader against the real RTL flow
   before any hardware exists.
4. `PynqDriver` (board), then `load_envelope` once the [04](04-pulse-and-program.md) packer lands.

---

## 7. Open questions

- **AXI base/span** (`AXI_BASE`, `AXI_SPAN`): on the block-design flow (`riscvsoc-bd`) the absolute base
  is assigned by the Zynq PS block design; pin it per build (and ideally carry it in the generated
  contract, [01](01-hardware-contract.md) §7).
- **Result-handshake convention on hardware**: the firmware writes results to core RAM, but the host
  needs to know *when* they're ready. Define a simple done-flag word in RAM the host polls (the cleanest
  on-core contract), versus the `fromHost`/mailbox handshake. Settle this jointly with [02](02-firmware.md).
- **A host-AXI extension that exposes the per-core RF window** would let the host poke RF registers
  directly on real hardware (useful for calibration without a cross-compile). Worth scoping only if
  bring-up demands it.
