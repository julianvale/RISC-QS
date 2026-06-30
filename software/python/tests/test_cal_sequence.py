"""M3 lowering golden: riscq.cal.sequence.lower turns a gate Sequence into the expected Program ops +
emitted kernel C (specs 03 §5 / 04 M3). Pure lowering — no hardware. Checks virtual-Z phase folding,
pulse dedup, the measure→(readout drive + demod + read) expansion, and that each family compiles.
"""

import math

import pytest

from riscq import default_config
from riscq.cal.store import CalConfig, QubitConfig, GateParams
from riscq.cal.sequence import Sequence, lower
from riscq.cal.sweep import Sweep

SCRATCH = "/tmp/claude-1000/-config-build-agentic-rv-dev/617b3887-d7b2-4654-b259-1cdcd3aeda7e/scratchpad/cal_seq"


def _qcfg(cfg):
    dur = 6 * cfg.batch_size / cfg.fs
    rdur = 20 * cfg.batch_size / cfg.fs
    return QubitConfig(
        drive_freq=200e6,
        gates={"X90": GateParams(amp=0.3, phase=0.0, dur=dur, envelope="drag", env_kwargs={"beta": 0.1}),
               "X": GateParams(amp=0.6, phase=0.0, dur=dur, envelope="drag", env_kwargs={"beta": 0.1})},
        readout_freq=300e6, readout_amp=0.7, readout_dur=rdur, readout_env="cos_edge_square",
        demod_delay=2 * cfg.batch_size / cfg.fs, demod_dur=rdur)


def test_measure_only_lowers_to_readout():
    """|0⟩ prep = bare measure: a readout-drive play + a demod arm + one read, no gate."""
    cfg = default_config(qubit_num=2)
    prog = lower(Sequence().measure(), _qcfg(cfg), cfg)
    kinds = [op["op"] for op in prog._timeline]
    assert kinds == ["play", "readout", "read_result"]
    assert prog._timeline[0]["pulse"].channel == "readout"
    src = prog.emit_kernel(n_shots=2, chunk=4)
    assert src.count("fire(RDRV,") == 1 and "iq_store(read_real(), read_imag())" in src


def test_excited_prep_dedups_two_x90():
    """|1⟩ prep = x90;x90;measure: two gate fires of the SAME deduped slot, one readout, one read."""
    cfg = default_config(qubit_num=2)
    prog = lower(Sequence().x90().x90().measure(), _qcfg(cfg), cfg)
    src = prog.emit_kernel(n_shots=2, chunk=4)
    assert src.count("fire(GATE,") == 2          # two launches…
    assert src.count("set_amp(GATE, 0,") == 1    # …of one loaded slot (dedup)
    assert src.count("fire(RDRV,") == 1


def test_virtual_z_folds_into_phase():
    """rz(φ) is zero-time: it adds to the carrier phase of every later gate (no pulse, no time)."""
    cfg = default_config(qubit_num=2)
    prog = lower(Sequence().rz(0.5).x90().measure(), _qcfg(cfg), cfg)
    gate = next(pd for pd in prog._defs if pd.channel == "gate")
    assert gate.phase_code == cfg.phase2code(0.5)            # base 0 + 0.5 rad
    # rz consumes no timeline slot: the timeline is just the x90 play + the measure expansion
    assert [op["op"] for op in prog._timeline] == ["play", "play", "readout", "read_result"]


def test_y90_is_framed_x90():
    """Y90 = rz(+π/2); x90; rz(-π/2): one gate pulse at phase +π/2, net carrier back to 0."""
    cfg = default_config(qubit_num=2)
    prog = lower(Sequence().y90().x90().measure(), _qcfg(cfg), cfg)
    gates = [pd for pd in prog._defs if pd.channel == "gate"]
    # the framed x90 sits at +π/2; the trailing x90 is back at base 0 → two distinct slots
    assert {g.phase_code for g in gates} == {cfg.phase2code(math.pi / 2), cfg.phase2code(0.0)}


def test_swept_amp_kernel_compiles():
    """An Amplitude-style lowering + a drive.amp sweep emits apply_sweep on the gate slot and builds."""
    cfg = default_config(qubit_num=2)
    prog = lower(Sequence().x90().measure(), _qcfg(cfg), cfg)
    sw = Sweep("drive.amp", 0.0, 1.0, 11)
    src = prog.emit_kernel(n_shots=4, chunk=8, apply=sw.apply())
    assert "set_amp(GATE, 0, code)" in src
    prog.build_kernel(SCRATCH, "seqamp", n_shots=4, chunk=8, apply=sw.apply())   # compiles


if __name__ == "__main__":
    raise SystemExit(pytest.main([__file__, "-v"]))
