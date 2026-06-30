"""Self-checking round-trip test for the typed calibration store (riscq.cal.store)."""

from dataclasses import asdict

from riscq.cal.store import CalConfig, GateParams, QubitConfig


def _make_cfg() -> CalConfig:
    def qubit(drive, ro):
        return QubitConfig(
            drive_freq=drive,
            gates={
                "X90": GateParams(amp=0.3, phase=0.0, dur=40e-9, envelope="drag",
                                  env_kwargs={"beta": 0.5}),
                "X": GateParams(amp=0.6, phase=0.1, dur=40e-9),
            },
            readout_freq=ro,
            readout_amp=0.05,
            readout_dur=2e-6,
            demod_phase=0.25,
            demod_delay=200e-9,
        )

    return CalConfig(qubits={0: qubit(5.1e9, 7.0e9), 1: qubit(5.2e9, 7.1e9)})


def test_round_trip_exact(tmp_path):
    cfg = _make_cfg()
    path = tmp_path / "cal.yaml"
    cfg.save(path)
    back = CalConfig.load(path)

    # Every serialized field survives the round trip exactly.
    assert asdict(cfg)["qubits"] == asdict(back)["qubits"]
    assert cfg.fs == back.fs
    assert cfg.qubit_to_core == back.qubit_to_core
    assert cfg.qubit_list == back.qubit_list == [0, 1]


def test_defaults_and_runtime_only_fields(tmp_path):
    cfg = _make_cfg()
    # qubit_to_core defaults to identity.
    assert cfg.qubit_to_core == {0: 0, 1: 1}

    # discriminators is runtime-only: set it, save, and confirm it is not serialized.
    cfg.discriminators[0] = object()
    path = tmp_path / "cal.yaml"
    cfg.save(path)
    assert "discriminators" not in path.read_text()
    back = CalConfig.load(path)
    assert back.discriminators == {}

    # YAML keys come back as int.
    assert set(back.qubits) == {0, 1}
    assert all(isinstance(k, int) for k in back.qubits)


def test_demod_defaulting():
    q = QubitConfig(drive_freq=5e9, gates={}, readout_freq=7e9, readout_amp=0.1,
                    readout_dur=2e-6)
    assert q.demod_freq == 7e9       # None → readout_freq
    assert q.demod_dur == 2e-6       # None → readout_dur

    q2 = QubitConfig(drive_freq=5e9, gates={}, readout_freq=7e9, readout_amp=0.1,
                     readout_dur=2e-6, demod_freq=6.9e9, demod_dur=1e-6)
    assert q2.demod_freq == 6.9e9    # explicit value kept
    assert q2.demod_dur == 1e-6


def test_save_no_arg_rewrites_loaded_path(tmp_path):
    path = tmp_path / "cal.yaml"
    _make_cfg().save(path)
    cfg = CalConfig.load(path)
    cfg.qubits[0].readout_freq = 7.5e9
    cfg.save()                       # no arg → rewrite the loaded path
    assert CalConfig.load(path).qubits[0].readout_freq == 7.5e9


def test_save_without_path_raises():
    import pytest
    with pytest.raises(ValueError):
        _make_cfg().save()           # never loaded, no path given
