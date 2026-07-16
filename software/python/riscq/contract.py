"""contract.py — the single source of truth for the riscq SoC software (docs/software/01).

Every address, encoding, and fixed-point scale below is taken from the RTL
(src/riscq/soc/{RiscvSoc,PulseTableSoc,Zcu216Top}.scala, rf/{PulseParamBuffer,ControlMemMaps}.scala,
RfChannels.scala) and confirmed against the bare-metal golden src/riscq/soc/sim/sw/pulse_sched.S.

The C header (firmware/include/riscq.h, via gen_header.py) and the host `SocConfig` (socconfig.py)
are both derived from here, so the two sides cannot drift — the failure mode that left the RISC-Q
reference with three divergent mmio.h copies.
"""

from dataclasses import dataclass, asdict
import json

# ── field encoding (docs/software/01 §3) ───────────────────────────────────────────────────────
# every 16-bit DSP parameter is read from bus bits [31:16]; the stored word is value<<16. The two
# exceptions (startTime, fire) are written in the low bits, full/index width.
FIELD_BIT_OFFSET = 16

# ── CPU map: control block [0x0, 0x10000) — blocking, core-local (docs/software/01 §2a) ─────────
CPU_FROM_HOST     = 0x2000   # R  host→CPU mailbox word
CPU_TIME_CMP      = 0x4000   # RW software compare value (batch units)
CPU_WAIT_TIME_CMP = 0x4008   # R  HALTS until time+3 >= timeCmp ("sleep until an instant")
CPU_TIME          = 0xbff8   # R  current 32-bit batch time
CPU_RES           = 0x4200   # R  HALTS until the integral settles; sign bit of integrated I
CPU_REAL          = 0x4204   # R  integrated I, int32
CPU_IMAG          = 0x4208   # R  integrated Q, int32

# ── CPU map: RF window [0x10000, 0x50000) — posted, write-only (docs/software/01 §2b) ───────────
RF_BASE   = 0x10000
RF_STRIDE = 0x10000          # each generator sub-window is 0x10000 wide
GATE    = 0   # gate-drive    PulseParamBuffer @ 0x10000 (pulseNum = 4)
RDRV    = 1   # readout-drive PulseParamBuffer @ 0x20000 (pulseNum = 1)
DEMOD   = 2   # demod LO       DemodChannel     @ 0x30000
DECODER = 3   # readout decoder ReadoutDecoder  @ 0x40000

# PulseParamBuffer sub-offsets (gate + readout-drive)
PULSE_FIRE       = 0x0       # write table index outId (low bits) → enqueue table[outId] at startTime
PULSE_FREQ       = 0x4       # shared carrier (one per buffer, not per slot); <<16
PULSE_TABLE_BASE = 0x10      # table[i] lives at (i+1)*0x10 — slot 0 starts at +0x10 (avoids fire/freq)
PULSE_PHASE = 0x0            # within a table entry; <<16
PULSE_AMP   = 0x4            # <<16
PULSE_ENV   = 0x8            # envelope-RAM line index; <<16
PULSE_DUR   = 0xC            # pulse length in batches; <<16
PULSE_START_TIME = 0x4100    # this buffer's own 32-bit startTime (full 32-bit, low bits)

# demod LO sub-offsets (@ 0x30000); both <<16
DEMOD_FREQ  = 0x0
DEMOD_PHASE = 0x4
# readout-decoder sub-offsets (@ 0x40000)
DECODER_DUR        = 0x0     # 12-bit; arms one integration window AND clears the result sink; <<16
DECODER_START_TIME = 0x4100  # full 32-bit

# ── CPU instruction/data RAM (docs/software/01 §2c) ─────────────────────────────────────────────
CPU_RAM_BASE = 0x80000000    # reset/boot PC; one shared 4 KiB true-dual-port BRAM

# ── result return convention (docs/software/02 §7, 03 §7) ───────────────────────────────────────
# the firmware leaves readout results at this CPU RAM offset; the host reads them back over AXI with
# Soc.read_core_ram(core, RESULT_OFFSET + field). DONE is written last (= 1) and the host polls it.
RESULT_OFFSET = 0x400        # CPU address 0x80000400
RESULT_REAL = 0x0
RESULT_IMAG = 0x4
RESULT_RES  = 0x8
RESULT_DONE = 0xC

# ── host AXI control block, relative to host_ctrl_base (docs/software/01 §6) ────────────────────
HOST_RESET       = 0x00      # bit0: write 1 to hold ALL cores in reset, 0 to release (the boot gate)
HOST_FROM_HOST   = 0x10      # 32-bit host→CPU mailbox (each core reads it at CPU 0x2000)
HOST_TIME_OFF_LO = 0x40      # timeOffset[31:0]  added to refTime to form the broadcast batch time
HOST_TIME_OFF_HI = 0x44      # timeOffset[63:32]


def pow2ceil(x: int) -> int:
    """1 << log2Up(x) — the SpinalHDL rounding SocMemoryMap uses for strides/regions."""
    return 1 if x <= 1 else 1 << (x - 1).bit_length()


@dataclass(frozen=True)
class Contract:
    """One SoC build's parameters + the derived host-AXI map.

    Mirrors PulseTableSoc.scala (widths) and Zcu216Top.SocMemoryMap (host map). Defaults are the
    14-qubit build (GenPulseTableSoc). The strides are per-core and qubit_num-independent; only
    region_size (hence the region bases) scales with qubit_num — so a 2-qubit sim build lays the
    regions out differently from the 14-qubit default, which is why nothing here is hard-coded.
    """
    qubit_num: int = 1
    batch_size: int = 16        # N — DAC drive samples per batch tick
    adc_batch: int = 4          # ADC demod lanes per batch tick (≠ batch_size)
    data_width: int = 16        # w
    env_addr_width: int = 10
    env_depth: int = 1024
    gate_interp: int = 4        # gate-drive envelope stored ×4 narrower
    readout_interp: int = 16    # readout-drive envelope stored ×16 narrower
    gate_pulse_num: int = 4
    readout_pulse_num: int = 1
    readout_dur_width: int = 12
    mem_depth: int = 1024       # core RAM words (× 4 B = 4 KiB)
    rob_depth: int = 256
    with_mul: bool = False      # RV32IM when the core is built withMul

    # ---- derived widths/bytes (match PulseTableSoc.scala) ----
    @property
    def env_width(self) -> int: return self.batch_size * 2 * self.data_width        # 512
    @property
    def gate_env_width(self) -> int: return self.env_width // self.gate_interp        # 128
    @property
    def readout_env_width(self) -> int: return self.env_width // self.readout_interp  # 32
    @property
    def rob_width(self) -> int: return self.adc_batch * 32                            # 128

    @property
    def core_mem_bytes(self) -> int: return 1 << 16   # host window reserves 64 KiB/core (CPU sees 4 KiB)
    @property
    def pulse_mem_bytes(self) -> int: return pow2ceil(self.gate_env_width * self.env_depth // 8)
    @property
    def readout_env_bytes(self) -> int: return pow2ceil(self.readout_env_width * self.env_depth // 8)
    @property
    def readout_buf_bytes(self) -> int: return 2 * pow2ceil(self.rob_width * self.rob_depth // 8)

    # ---- host-AXI strides + region bases (SocMemoryMap) ----
    @property
    def core_stride(self) -> int: return pow2ceil(self.core_mem_bytes)
    @property
    def pulse_stride(self) -> int: return pow2ceil(self.pulse_mem_bytes)
    @property
    def readout_env_stride(self) -> int: return pow2ceil(self.readout_env_bytes)
    @property
    def readout_buf_stride(self) -> int: return pow2ceil(self.readout_buf_bytes)

    @property
    def region_size(self) -> int:
        strides = (self.core_stride, self.pulse_stride, self.readout_env_stride, self.readout_buf_stride)
        return pow2ceil(max(strides) * self.qubit_num)

    @property
    def core_mem_base(self) -> int:    return 0 * self.region_size
    @property
    def pulse_mem_base(self) -> int:   return 1 * self.region_size
    @property
    def readout_env_base(self) -> int: return 2 * self.region_size
    @property
    def readout_buf_base(self) -> int: return 3 * self.region_size
    @property
    def host_ctrl_base(self) -> int:   return 4 * self.region_size

    # ---- JSON round-trip (the remote snapshot) ----
    def to_dict(self) -> dict: return asdict(self)
    def to_json(self) -> str: return json.dumps(self.to_dict())

    @classmethod
    def from_dict(cls, d: dict) -> "Contract":
        return cls(**{k: v for k, v in d.items() if k in cls.__dataclass_fields__})

    @classmethod
    def from_json(cls, s: str) -> "Contract":
        return cls.from_dict(json.loads(s))
