import numpy as np
import pytest

from riscq import build
from riscq.map import SocMap, SocParams
from software.quantum_sensing.nv_mw_raw_contrast import (
    DEFAULT_CAPTURE_BATCHES,
    DEFAULT_DETUNED_HZ,
    DEFAULT_LASER_DELAY_BATCHES,
    DEFAULT_RESONANT_HZ,
    _tables,
    _validate,
    build_program,
    differential_traces,
    mw_duration_batches,
    rolling_window_statistics,
    acquire_pairs,
)


def _map():
    return SocMap(SocParams.load("software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q.json"))


def test_raw_mw_contrast_uses_full_bank_mw_and_silent_capture_gate():
    m = _map()
    mw, capture = _tables(m)
    assert mw.channel == 0 and mw.pulses["mw"].amp_code() == 0
    assert capture.channel == 1 and capture.pulses["capture"].amp_code() == 0
    assert len(mw.pulses["mw"].env) == m.channel(0).samples_per_line * m.params.env_depth


def test_raw_mw_contrast_requires_nonwrapping_capture_and_contained_laser():
    m = _map()
    _validate(m, DEFAULT_RESONANT_HZ, DEFAULT_DETUNED_HZ, 1.0, 5, 4_096, 256, 19,
              DEFAULT_LASER_DELAY_BATCHES, DEFAULT_CAPTURE_BATCHES, 2)
    with pytest.raises(ValueError, match="within"):
        _validate(m, DEFAULT_RESONANT_HZ, DEFAULT_DETUNED_HZ, 1.0, 5, 4_096, 256, 19,
                  100, 100, 2)
    with pytest.raises(ValueError, match="avoid robs wrapping"):
        _validate(m, DEFAULT_RESONANT_HZ, DEFAULT_DETUNED_HZ, 1.0, 5, 4_096, 256, 19,
                  0, m.params.rob_depth + 1, 2)


def test_raw_mw_duration_covers_the_final_capture_but_fits_the_dac_limit():
    duration = mw_duration_batches(5, 4_096, 19, 256, 96, 512)
    assert duration == 17_075
    assert duration < 65_535


def test_raw_mw_contrast_subtracts_detuned_mw_effect_from_resonant_effect():
    base = np.zeros((2, 1, 4), dtype=np.int32)
    traces = {
        "reference_detuned": base + 100,
        "detuned": base + 97,
        "reference_resonant": base + 100,
        "resonant": base + 90,
    }
    detuned, resonant, esr = differential_traces(traces)
    assert detuned.shape == (2, 4)
    np.testing.assert_array_equal(detuned, np.full((2, 4), 3))
    np.testing.assert_array_equal(resonant, np.full((2, 4), 10))
    np.testing.assert_array_equal(esr, np.full((2, 4), 7))


def test_rolling_window_statistics_sums_each_pair_before_estimating_noise():
    values = np.array([[1, 2, 3, 4], [3, 4, 5, 6]], dtype=float)
    mean, sem, z_score = rolling_window_statistics(values, 2)
    np.testing.assert_allclose(mean, [5, 7, 9])
    np.testing.assert_allclose(sem, [2, 2, 2])
    np.testing.assert_allclose(z_score, [2.5, 3.5, 4.5])
    with pytest.raises(ValueError, match="fit"):
        rolling_window_statistics(values, 5)


def test_raw_mw_contrast_rejects_an_empty_board_host_before_connecting():
    with pytest.raises(ValueError, match="non-empty"):
        acquire_pairs("", mw_amp=1.0)


def test_raw_mw_contrast_program_has_runtime_mw_branch_and_raw_capture():
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_program(_map())
    assert {"mw_freq_code", "mw_amp_code", "mw_on", "capture_batches"} <= set(program.params)
    assert "play(RF_CH0" in program.c_source
    assert "play(RF_CH1" in program.c_source
