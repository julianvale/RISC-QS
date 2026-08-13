import numpy as np
import pytest

from riscq import build
from riscq.map import SocMap, SocParams
from software.quantum_sensing.nv_spin_contrast_window import (
    _best_index, _tables, _validate, build_program, summarize_contrast,
)


def _map():
    return SocMap(SocParams.load("software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q.json"))


def test_spin_contrast_tables_fill_each_channel_bank():
    m = _map()
    gate, demod = _tables(m)
    assert gate.channel == 0 and demod.channel == 2
    assert len(gate.pulses["mw"].env) == m.channel(0).samples_per_line * m.params.env_depth
    assert len(demod.pulses["window"].env) == m.channel(2).samples_per_line * m.params.env_depth


def test_spin_contrast_summary_preserves_difference_and_uses_paired_noise():
    ref = np.array([[[100, 80, 90]]], dtype=np.int64)
    sig = np.array([[[80, 80, 80]]], dtype=np.int64)
    mean, std, snr, contrast, contrast_sem = summarize_contrast(ref, sig)
    assert np.allclose(mean, [[10]])
    assert np.allclose(std, [[10]])
    assert np.allclose(snr, [[1]])
    assert np.allclose(contrast, [[1 / 9]])
    assert np.allclose(contrast_sem, [[10 / np.sqrt(3) / 90]])
    assert _best_index(snr) == (0, 0)


def test_spin_contrast_validation_requires_fixed_frequency_and_pairs():
    m = _map()
    _validate(m, [139], [46], 2.87e9, 5, 4_096, 256, 256, 19, 492, 1.0, 2)
    with pytest.raises(ValueError, match="frequency"):
        _validate(m, [139], [46], 0.0, 5, 4_096, 256, 256, 19, 492, 1.0, 2)
    with pytest.raises(ValueError, match="at least 2"):
        _validate(m, [139], [46], 2.87e9, 5, 4_096, 256, 256, 19, 492, 1.0, 1)


def test_spin_contrast_program_has_runtime_mw_and_window_parameters():
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_program(_map())
    assert {"mw_freq_code", "mw_amp_code", "mw_on", "window_offset_batches", "window_batches"} <= set(program.params)
    assert "play(RF_CH0" in program.c_source
    assert "play(RF_CH2" in program.c_source
