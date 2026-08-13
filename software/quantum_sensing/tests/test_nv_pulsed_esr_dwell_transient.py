import inspect

import numpy as np
import pytest

from riscq import build
from riscq.map import SocMap, SocParams
from software.quantum_sensing.nv_pulsed_esr_dwell_transient import (
    DEFAULT_HALF_DURATION_BATCHES,
    DEFAULT_LASER_START_BATCHES,
    DEFAULT_LASER_TRIGGER_BATCHES,
    DEFAULT_READOUT_DELAY_BATCHES,
    DEFAULT_READOUT_WINDOW_BATCHES,
    MAX_PAIRS_PER_GROUP,
    _validate,
    build_program,
    k_pulsed_esr_dwell_transient,
    summarize_runs,
    unpack_trajectories,
)


def _map():
    return SocMap(SocParams.load("software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q.json"))


def _validate_defaults(**overrides):
    values = dict(detuned_hz=2.8e9, resonant_hz=2.875e9, mw_amp=0.2,
                  half_duration_batches=DEFAULT_HALF_DURATION_BATCHES,
                  laser_start_batches=DEFAULT_LASER_START_BATCHES,
                  laser_duration_batches=DEFAULT_LASER_TRIGGER_BATCHES,
                  readout_delay_batches=DEFAULT_READOUT_DELAY_BATCHES,
                  readout_window_batches=DEFAULT_READOUT_WINDOW_BATCHES,
                  pairs_per_group=4, groups_per_frequency=2)
    values.update(overrides)
    _validate(_map(), **values)


def test_defaults_keep_the_calibrated_halfmw_geometry():
    assert (DEFAULT_HALF_DURATION_BATCHES, DEFAULT_LASER_START_BATCHES,
            DEFAULT_READOUT_DELAY_BATCHES, DEFAULT_READOUT_WINDOW_BATCHES) == (492, 375, 77, 23)
    _validate_defaults()


def test_validation_requires_distinct_frequencies_and_bounded_group_shape():
    with pytest.raises(ValueError, match="distinct"):
        _validate_defaults(detuned_hz=2.875e9)
    with pytest.raises(ValueError, match="pairs-per-group"):
        _validate_defaults(pairs_per_group=MAX_PAIRS_PER_GROUP + 1)
    with pytest.raises(ValueError, match="readout delay"):
        _validate_defaults(readout_delay_batches=100)
    with pytest.raises(ValueError, match="averages"):
        _validate_defaults(averages=0)


def test_unpack_separates_frequency_and_pair_position_means():
    # Four banks: detuned signal/reference, resonant signal/reference.
    raw = np.array([20, 40, 25, 50, 18, 36, 24, 48], dtype=np.uint32)
    signal, reference, contrast = unpack_trajectories(raw, pairs_per_group=2, groups_per_frequency=2)
    np.testing.assert_allclose(signal, [[10, 20], [9, 18]])
    np.testing.assert_allclose(reference, [[12.5, 25], [12, 24]])
    np.testing.assert_allclose(contrast, [[0.2, 0.2], [0.25, 0.25]])


def test_summary_preserves_average_frequency_position_axes_and_sem():
    signal = np.array([[[10, 20], [8, 16]], [[14, 24], [12, 20]]], dtype=float)
    reference = signal * 2
    contrast = 1.0 - signal / reference
    signal_mean, signal_sem, reference_mean, reference_sem, contrast_mean, contrast_sem = summarize_runs(
        signal, reference, contrast)
    assert signal_mean.shape == (2, 2)
    np.testing.assert_allclose(signal_mean, [[12, 22], [10, 18]])
    np.testing.assert_allclose(signal_sem, [[2, 2], [2, 2]])
    np.testing.assert_allclose(reference_mean, signal_mean * 2)
    np.testing.assert_allclose(reference_sem, signal_sem * 2)
    np.testing.assert_allclose(contrast_mean, 0.5)
    np.testing.assert_allclose(contrast_sem, 0.0)


def test_kernel_source_uses_unrecorded_dwell_and_pair_plus_two_refill():
    source = inspect.getsource(k_pulsed_esr_dwell_transient.fn)
    assert "while group < 1 + 2 * groups_per_frequency" in source
    assert "if group > 0" in source
    assert "next_pair = pair + 2" in source
    assert "next_signal_start = signal_start + 4 * half_duration_batches" in source


def test_kernel_compiles_with_real_pre_switch_and_continuous_pair_grid():
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_program(_map())
    assert {"detuned_freq_code", "resonant_freq_code", "pairs_per_group", "groups_per_frequency"} <= set(program.params)
    assert "set_freq(mw, detuned_freq_code);" in program.c_source
    assert "set_freq(mw, resonant_freq_code);" in program.c_source
    assert "next_pair = pair + 2;" in program.c_source
    assert "next_signal_start = signal_start + 4 * half_duration_batches;" in program.c_source
    assert "out[2 * pairs_per_group + pair]" in program.c_source
