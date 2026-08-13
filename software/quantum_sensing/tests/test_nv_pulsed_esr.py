import numpy as np
import pytest

from riscq import build
from riscq.map import SocMap, SocParams
from software.quantum_sensing.nv_pulsed_esr import (
    _tables, _validate, build_program, frequency_grid, summarize,
)


def _map():
    return SocMap(SocParams.load("software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q.json"))


def test_esr_uses_dac0_mw_and_zero_hz_demodulator():
    m = _map()
    gate, demod = _tables(m)
    assert gate.channel == 0 and gate.freq_hz == 0.0 and gate.pulses["mw"].amp_code() == 0
    assert demod.channel == 2 and demod.freq_hz == 0.0 and demod.pulses["window"].amp_code() > 0
    assert len(gate.pulses["mw"].env) == m.channel(0).samples_per_line * m.params.env_depth
    assert len(demod.pulses["window"].env) == m.channel(2).samples_per_line * m.params.env_depth


def test_esr_validation_preserves_laser_queue_margin_and_requires_pairs():
    m = _map()
    _validate(m, [2.87e9], 5, 4_096, 2_048, 256, 19, 64, 0.1, 4, 3, 2)
    with pytest.raises(ValueError, match="scheduling lead"):
        _validate(m, [2.87e9], 5, 100, 2_048, 256, 19, 64, 0.1, 4, 3, 2)
    with pytest.raises(ValueError, match="at least 2"):
        _validate(m, [2.87e9], 5, 4_096, 2_048, 256, 19, 64, 0.1, 4, 3, 1)


def test_esr_summary_uses_ratio_of_means_and_paired_standard_error():
    ref = np.array([[100, 80, 90], [80, 80, 80]], dtype=np.int64)
    sig = np.array([[80, 80, 80], [88, 96, 104]], dtype=np.int64)
    contrast, sem, difference = summarize(ref, sig)
    # Averaging individual ratios gives a different biased result.  The required
    # ratio of paired means is (90 - 80) / 90 = 1/9.
    assert np.allclose(contrast, [1 / 9, -0.2])
    assert np.allclose(sem, [10 / np.sqrt(3) / 90, 8 / np.sqrt(3) / 80])
    assert difference.tolist() == [[20, 0, 10], [-8, -16, -24]]


def test_esr_frequency_grid_is_inclusive_and_has_a_fixed_frequency_control():
    assert frequency_grid(2.84e9, 2.88e9, 5) == [2.84e9, 2.85e9, 2.86e9, 2.87e9, 2.88e9]
    assert frequency_grid(2.87e9, 2.87e9, 1) == [2.87e9]
    with pytest.raises(ValueError, match="exceed"):
        frequency_grid(2.88e9, 2.84e9, 5)


def test_esr_program_has_runtime_frequency_mw_enable_and_window_parameters():
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_program(_map())
    assert {"mw_freq_code", "mw_amp_code", "mw_on", "window_offset_batches", "window_batches"} <= set(program.params)
    assert "play(RF_CH0" in program.c_source
    assert "play(RF_CH2" in program.c_source
