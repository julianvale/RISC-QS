import numpy as np
import pytest

from riscq import build
from riscq.map import SocMap, SocParams
from software.quantum_sensing.nv_pulsed_rabi_abba import (
    _validate,
    build_program,
    duration_grid_ns,
    duration_ns_to_batches,
    summarize,
)


def _map():
    return SocMap(SocParams.load("software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q.json"))


def test_duration_grid_is_inclusive_and_quantized_to_batch_clock():
    grid = duration_grid_ns(20.0, 2_000.0, 100)
    assert len(grid) == 100
    assert grid[0] == 20.0
    assert grid[-1] == 2_000.0
    assert duration_ns_to_batches(20.0) == 10
    assert duration_ns_to_batches(2_000.0) == 983


def test_validation_rejects_duplicate_quantized_durations():
    with pytest.raises(ValueError, match="duplicate"):
        _validate(
            _map(), resonant_hz=2.875e9, detuned_hz=2.80e9, mw_amp=1.0,
            reset_spacing_batches=492, reset_pulses=20, laser_duration_batches=30,
            laser_start_batches=375,
            post_mw_delay_batches=50, readout_delay_batches=77,
            readout_window_batches=23, duration_batches=[10, 10],
            warmup_blocks=0, blocks_per_duration=1, averages=1,
        )


def test_summary_uses_paired_resonant_minus_detuned_runs():
    detuned = np.array([[100, 200], [110, 220]], dtype=float)
    resonant = np.array([[90, 180], [99, 198]], dtype=float)
    difference, difference_sem, ratio, ratio_sem, differences, ratios = summarize(detuned, resonant)
    np.testing.assert_allclose(differences, [[-10, -20], [-11, -22]])
    np.testing.assert_allclose(difference, [-10.5, -21.0])
    np.testing.assert_allclose(difference_sem, [0.5, 1.0])
    np.testing.assert_allclose(ratios, 0.9)
    np.testing.assert_allclose(ratio, 0.9)
    np.testing.assert_allclose(ratio_sem, 0.0)


def test_kernel_compiles_with_dark_mw_and_abba_order():
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_program(_map())
    assert {"resonant_freq_code", "detuned_freq_code", "mw_duration_batches",
            "reference_mw_enabled", "mw_overlaps_readout", "laser_start_batches",
            "blocks_per_duration"} <= set(program.params)
    assert "while (shot < 4)" in program.c_source
    assert "if (shot == 1 || shot == 2)" in program.c_source
    assert "readout_laser = mw_start + mw_duration_batches + post_mw_delay_batches" in program.c_source
    assert "readout_laser = mw_start + laser_start_batches" in program.c_source


def test_reference_mw_off_allows_unused_detuned_frequency():
    _validate(
        _map(), resonant_hz=2.875e9, detuned_hz=2.875e9, mw_amp=1.0,
        reset_spacing_batches=492, reset_pulses=20, laser_duration_batches=30,
        laser_start_batches=375,
        post_mw_delay_batches=50, readout_delay_batches=77,
        readout_window_batches=23, duration_batches=[983],
        warmup_blocks=0, blocks_per_duration=1, averages=1,
        reference_mw_off=True,
    )


def test_overlap_mode_requires_mw_through_complete_readout_window():
    with pytest.raises(ValueError, match="complete integration window"):
        _validate(
            _map(), resonant_hz=2.875e9, detuned_hz=2.80e9, mw_amp=1.0,
            reset_spacing_batches=492, reset_pulses=20, laser_duration_batches=30,
            laser_start_batches=375, post_mw_delay_batches=50,
            readout_delay_batches=77, readout_window_batches=23,
            duration_batches=[474], warmup_blocks=0, blocks_per_duration=1,
            averages=1, reference_mw_off=True, mw_overlaps_readout=True,
        )
