"""store.py — the typed calibration store (specs 02 §1).

The replacement for qcal's path-string `Config`: plain dataclasses read by attribute
(`cfg.qubits[q].readout_freq`), persisted as nested YAML. Experiments read a field and write it
back the same way; `save()` after an `update()` persists a calibration — typed, no `eval`.
"""

from dataclasses import asdict, dataclass, field

import yaml


@dataclass
class GateParams:
    """One named gate (e.g. "X90"/"X") on one qubit. `envelope` names a generator in riscq.pulse
    (gaussian/drag/cos_edge_square/square); `env_kwargs` carries its shape args (e.g. drag's beta)."""

    amp: float
    phase: float
    dur: float
    envelope: str = "drag"
    env_kwargs: dict = field(default_factory=dict)


@dataclass
class QubitConfig:
    """Drive + readout + demod parameters for one qubit."""

    drive_freq: float                      # GE drive carrier (Hz)
    gates: dict                            # {"X90": GateParams(...), ...}
    readout_freq: float
    readout_amp: float
    readout_dur: float
    readout_env: str = "cos_edge_square"
    demod_freq: float = None               # demod LO (Hz); defaults to readout_freq
    demod_phase: float = 0.0
    demod_delay: float = 0.0               # readout-drive start → demod window start (s)
    demod_dur: float = None                # demod integration window (s); defaults to readout_dur
    reset_delay: float = 300e-6            # passive reset between shots

    def __post_init__(self):
        # Demod tracks the readout drive unless explicitly detuned/shortened.
        if self.demod_freq is None:
            self.demod_freq = self.readout_freq
        if self.demod_dur is None:
            self.demod_dur = self.readout_dur


@dataclass
class CalConfig:
    """The whole-chip calibration: per-qubit configs + sample rate + qubit→core map. `discriminators`
    is runtime-only (trained LinearDiscriminators) and is never serialized."""

    qubits: dict                           # {qubit_index: QubitConfig}
    fs: float = 8e9
    qubit_to_core: dict = None             # defaults to identity over qubits.keys()
    discriminators: dict = None            # trained at runtime by ReadoutCalibration; NOT serialized

    def __post_init__(self):
        if self.qubit_to_core is None:
            self.qubit_to_core = {q: q for q in self.qubits}
        if self.discriminators is None:
            self.discriminators = {}
        self._path = None                  # remembered by load() so save() can rewrite in place

    @property
    def qubit_list(self) -> list:
        return sorted(self.qubits)

    # ── persistence ─────────────────────────────────────────────────────────────────────────────
    def _to_dict(self) -> dict:
        """Nested plain dicts for YAML — discriminators omitted (runtime-only)."""
        return {
            "fs": self.fs,
            "qubit_to_core": dict(self.qubit_to_core),
            "qubits": {q: asdict(qc) for q, qc in self.qubits.items()},
        }

    @classmethod
    def load(cls, path) -> "CalConfig":
        with open(path) as f:
            d = yaml.safe_load(f)
        qubits = {int(q): _qubit_from_dict(qc) for q, qc in d["qubits"].items()}
        qtc = d.get("qubit_to_core")
        if qtc is not None:
            qtc = {int(k): int(v) for k, v in qtc.items()}
        cfg = cls(qubits=qubits, fs=d["fs"], qubit_to_core=qtc)
        cfg._path = str(path)
        return cfg

    def save(self, path=None):
        """Write YAML; `path` defaults to the path this config was loaded from."""
        path = path or self._path
        if path is None:
            raise ValueError("no path given and this config was not loaded from one")
        with open(path, "w") as f:
            yaml.safe_dump(self._to_dict(), f, sort_keys=False)
        self._path = str(path)


def _qubit_from_dict(d: dict) -> QubitConfig:
    gates = {name: GateParams(**g) for name, g in d["gates"].items()}
    return QubitConfig(**{**d, "gates": gates})
