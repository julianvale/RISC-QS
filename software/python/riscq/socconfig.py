"""SocConfig — host-side unit conversions + address helpers (docs/software/01 §7).

The host counterpart of the contract: a small, JSON-serializable object that carries one build's
parameters (a `Contract`) plus the board sample rate `fs`, and does every physical→code conversion
in one place (mirroring QICK's QickConfig). The remote client reconstructs it from a snapshot so all
unit math runs client-side and only hardware actions cross the wire (docs/software/05 §3d).
"""

from dataclasses import dataclass
from math import pi
import json

from . import contract as C
from .contract import Contract

# Default DAC sample rate. The DSP fabric runs ~500 MHz and processes one batch (batch_size samples)
# per cycle, so fs ≈ batch_size · f_dsp ≈ 8 GSPS. This is the open question in 01 §7 — pin it per build
# by passing fs= to default_config(); it sets every freq/time conversion.
DEFAULT_FS = 8e9


def clamp_s16(x: int) -> int:
    return max(-(1 << 15), min((1 << 15) - 1, int(x)))


@dataclass
class SocConfig:
    contract: Contract
    fs: float = DEFAULT_FS       # DAC sample rate (Hz)

    # convenience passthroughs
    @property
    def qubit_num(self) -> int: return self.contract.qubit_num
    @property
    def batch_size(self) -> int: return self.contract.batch_size

    # ── unit conversions (docs/software/01 §3) ──────────────────────────────────────────────────
    def freq2code(self, f_hz: float) -> int:
        return clamp_s16(round(f_hz / self.fs * 2 ** 16))          # per-sample phase increment

    def phase2code(self, rad: float) -> int:
        return clamp_s16(round(rad / pi * 2 ** 15))                # full turn = 65536 codes

    def amp2code(self, a: float) -> int:
        return clamp_s16(round(a * 2 ** 15))                       # a ∈ [-1, 1)

    def ns2batch(self, t_ns: float) -> int:
        return round(t_ns * 1e-9 * self.fs / self.batch_size)

    def s2batch(self, t_s: float) -> int:
        return round(t_s * self.fs / self.batch_size)

    def batch2ns(self, b: int) -> float:
        return b * self.batch_size / self.fs * 1e9

    # ── CPU-space addresses (firmware / sim test-tap) ───────────────────────────────────────────
    def cpu_rf_base(self, buf: int) -> int:
        return C.RF_BASE + buf * C.RF_STRIDE

    def cpu_pulse_field(self, buf: int, slot: int, field: int) -> int:
        return self.cpu_rf_base(buf) + (slot + 1) * C.PULSE_TABLE_BASE + field

    def cpu_pulse_freq(self, buf: int) -> int:
        return self.cpu_rf_base(buf) + C.PULSE_FREQ

    def cpu_pulse_fire(self, buf: int) -> int:
        return self.cpu_rf_base(buf) + C.PULSE_FIRE

    def cpu_pulse_start_time(self, buf: int) -> int:
        return self.cpu_rf_base(buf) + C.PULSE_START_TIME

    # ── host-AXI addresses (region base + per-core stride) ──────────────────────────────────────
    def host_core_ram(self, core: int) -> int:
        return self.contract.core_mem_base + core * self.contract.core_stride

    def host_gate_env(self, core: int) -> int:
        return self.contract.pulse_mem_base + core * self.contract.pulse_stride

    def host_readout_env(self, core: int) -> int:
        return self.contract.readout_env_base + core * self.contract.readout_env_stride

    def host_robs(self, core: int) -> int:
        return self.contract.readout_buf_base + core * self.contract.readout_buf_stride

    def host_control(self) -> int:
        return self.contract.host_ctrl_base

    def host_env(self, core: int, channel: str) -> int:
        """Route an envelope load to the channel's region (used by Soc.load_envelope)."""
        if channel == "gate":
            return self.host_gate_env(core)
        if channel == "readout":
            return self.host_readout_env(core)
        raise ValueError(f"unknown envelope channel {channel!r} (expected 'gate' or 'readout')")

    # ── snapshot for remote (docs/software/05 §3d) ──────────────────────────────────────────────
    def to_json(self) -> str:
        return json.dumps({"contract": self.contract.to_dict(), "fs": self.fs})

    @classmethod
    def from_json(cls, s: str) -> "SocConfig":
        d = json.loads(s)
        return cls(contract=Contract.from_dict(d["contract"]), fs=d["fs"])


def default_config(qubit_num: int = 14, fs: float = DEFAULT_FS, **contract_kw) -> SocConfig:
    """The default 14-qubit build. Pass qubit_num=2 (and dac/adc params if needed) for the sims."""
    return SocConfig(contract=Contract(qubit_num=qubit_num, **contract_kw), fs=fs)
