import inspect

import numpy as np
import pytest

from riscq import build
from riscq.map import SocMap, SocParams
from software.quantum_sensing.nv_pulsed_esr_conditioning_recovery import (
    DEFAULT_CONDITIONING_PAIRS,
    DEFAULT_HALF_DURATION_BATCHES,
    DEFAULT_LASER_START_BATCHES,
    DEFAULT_LASER_TRIGGER_BATCHES,
    DEFAULT_READOUT_DELAY_BATCHES,
    DEFAULT_READOUT_WINDOW_BATCHES,
    DEFAULT_RECOVERY_DELAYS_US,
    MAX_CONDITIONING_PAIRS,
    _validate,
    build_program,
    k_conditioning_recovery,
    recovery_us_to_batches,
    summarize,
    validate_axes,
)


def _map():
    return SocMap(SocParams.load("software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q.json"))


def _validate_defaults(**overrides):
    values = dict(
        resonant_hz=2.875e9, detuned_hz=2.800e9, mw_amp=1.0,
        reset_spacing_batches=492, reset_pulses=20,
        half_duration_batches=DEFAULT_HALF_DURATION_BATCHES,
        laser_start_batches=DEFAULT_LASER_START_BATCHES,
        laser_duration_batches=DEFAULT_LASER_TRIGGER_BATCHES,
        readout_delay_batches=DEFAULT_READOUT_DELAY_BATCHES,
        readout_window_batches=DEFAULT_READOUT_WINDOW_BATCHES,
        conditioning_pairs=8, recovery_delay_batches=recovery_us_to_batches(10.0),
        blocks_per_point=2, averages=2,
    )
    values.update(overrides)
    _validate(_map(), **values)


def test_default_axes_are_log_like_ordered_and_batch_quantized():
    pairs, delays = validate_axes(
        list(DEFAULT_CONDITIONING_PAIRS), list(DEFAULT_RECOVERY_DELAYS_US),
    )
    assert pairs == [1, 2, 4, 8, 16, 32, 64, 128, 256]
    assert delays[0] == 492
    assert delays[-1] == 491_520
    assert delays == sorted(set(delays))


def test_axis_validation_rejects_reordering_duplicates_and_out_of_range_counts():
    with pytest.raises(ValueError, match="strictly increasing"):
        validate_axes([1, 4, 2], [1.0, 2.0])
    with pytest.raises(ValueError, match="quantization"):
        validate_axes([1, 2], [1.0, 1.0001])
    with pytest.raises(ValueError, match="conditioning pairs"):
        validate_axes([MAX_CONDITIONING_PAIRS + 1], [1.0])
    with pytest.raises(ValueError, match="at least one recovery"):
        validate_axes([1], [])
    with pytest.raises(ValueError, match="positive finite"):
        recovery_us_to_batches(0.0)


def test_validation_preserves_working_halfmw_geometry_and_probe_bounds():
    _validate_defaults()
    with pytest.raises(ValueError, match="must differ"):
        _validate_defaults(detuned_hz=2.875e9)
    with pytest.raises(ValueError, match="fit within one half"):
        _validate_defaults(half_duration_batches=400)
    with pytest.raises(ValueError, match="recovery delay"):
        _validate_defaults(recovery_delay_batches=0)


def test_summary_uses_ratio_of_means_and_paired_difference_sem():
    detuned = np.array([
        [[100.0, 200.0], [400.0, 800.0]],
        [[120.0, 240.0], [440.0, 880.0]],
    ])
    resonant = np.array([
        [[90.0, 180.0], [360.0, 720.0]],
        [[96.0, 192.0], [396.0, 792.0]],
    ])
    result = summarize(detuned, resonant)
    np.testing.assert_allclose(
        result["resonant_minus_detuned"],
        [[-17.0, -34.0], [-42.0, -84.0]],
    )
    np.testing.assert_allclose(
        result["resonant_minus_detuned_sem"],
        [[7.0, 14.0], [2.0, 4.0]],
    )
    expected_contrast = (detuned.mean(axis=0) - resonant.mean(axis=0)) / detuned.mean(axis=0)
    np.testing.assert_allclose(result["positive_contrast"], expected_contrast)
    np.testing.assert_allclose(
        result["positive_contrast_sem"],
        result["resonant_minus_detuned_sem"] / detuned.mean(axis=0),
    )


def test_kernel_source_has_independent_reset_gap_free_conditioning_and_mw_off_probe():
    source = inspect.getsource(k_conditioning_recovery.fn)
    assert "while shot < 4" in source
    assert "if shot == 1 or shot == 2" in source
    assert "while reset_index < reset_pulses" in source
    assert "next_pair = pair + 2" in source
    assert "next_signal_start = signal_start + 4 * half_duration_batches" in source
    assert "if pair + 1 == conditioning_pairs" in source
    assert "probe_laser = (reference_laser + laser_duration_batches" in source
    assert source.count("read_res()") == 1


def test_kernel_compiles_with_runtime_conditioning_and_recovery_axes():
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_program(_map())
    assert {
        "detuned_freq_code", "resonant_freq_code", "conditioning_pairs",
        "recovery_delay_batches", "blocks_per_point",
    } <= set(program.params)
    assert "while (shot < 4)" in program.c_source
    assert "if (pair + 1 == conditioning_pairs)" in program.c_source
    assert "probe_laser = reference_laser + laser_duration_batches + recovery_delay_batches" in program.c_source
    assert "resonant_sum = resonant_sum + read_real()" in program.c_source
