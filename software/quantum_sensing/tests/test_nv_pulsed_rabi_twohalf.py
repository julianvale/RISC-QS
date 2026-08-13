import numpy as np
import pytest

from riscq import build
from riscq.map import SocMap, SocParams
from software.quantum_sensing.nv_pulsed_rabi_twohalf import (
    _validate,
    build_program,
    duration_grid_ns,
    duration_ns_to_batches,
    summarize,
)


def _map():
    return SocMap(SocParams.load("software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q.json"))


def _validate_defaults(**overrides):
    args = dict(
        resonant_hz=2.54e9, mw_amp=1.0, reference_to_mw_batches=492,
        mw_to_laser_batches=492, laser_recovery_batches=2458,
        laser_duration_batches=30, readout_delay_batches=77,
        readout_window_batches=23, duration_batches=[0, 10, 983],
        warmup_pairs=10, pairs_per_duration=1, averages=1,
    )
    args.update(overrides)
    _validate(_map(), **args)


def test_duration_grid_includes_zero_duration_endpoint_and_batch_quantization():
    assert duration_grid_ns(0.0, 1_000.0, 3) == [0.0, 500.0, 1000.0]
    assert duration_ns_to_batches(0.0) == 0
    assert duration_ns_to_batches(1_000.0) == 492


def test_validation_allows_zero_mw_and_rejects_duplicate_quantized_durations():
    _validate_defaults()
    with pytest.raises(ValueError, match="duplicate"):
        _validate_defaults(duration_batches=[0, 0])


def test_validation_requires_signal_window_to_finish_before_reference_trigger():
    with pytest.raises(ValueError, match="finish before"):
        _validate_defaults(laser_recovery_batches=90)


def test_summary_uses_paired_signal_minus_reference_runs():
    reference = np.array([[100, 200], [110, 220]], dtype=float)
    signal = np.array([[90, 180], [99, 198]], dtype=float)
    difference, difference_sem, ratio, ratio_sem, differences, ratios = summarize(reference, signal)
    np.testing.assert_allclose(differences, [[-10, -20], [-11, -22]])
    np.testing.assert_allclose(difference, [-10.5, -21.0])
    np.testing.assert_allclose(difference_sem, [0.5, 1.0])
    np.testing.assert_allclose(ratios, 0.9)
    np.testing.assert_allclose(ratio, 0.9)
    np.testing.assert_allclose(ratio_sem, 0.0)


def test_kernel_compiles_with_two_half_dark_mw_topology():
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_program(_map())
    assert {"reference_to_mw_batches", "mw_to_laser_batches", "laser_recovery_batches",
            "mw_duration_batches", "warmup_pairs", "pairs_per_duration"} <= set(program.params)
    assert "half_duration = reference_to_mw_batches + mw_duration_batches" in program.c_source
    assert "signal_laser = signal_mw + mw_duration_batches + mw_to_laser_batches" in program.c_source
    assert "reference_laser = cycle_start + half_duration" in program.c_source
