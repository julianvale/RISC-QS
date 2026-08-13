import inspect

import numpy as np
import pytest

from riscq import build
from riscq.map import SocMap, SocParams
from software.quantum_sensing.nv_pulsed_esr_conditioning_spacing import (
    DEFAULT_CONDITIONING_PAIRS, DEFAULT_CONDITIONING_PAIR_PERIOD_US,
    DEFAULT_HALF_DURATION_BATCHES, _validate, build_program,
    k_conditioning_spacing, train_duration_batches, us_to_batches,
    save_and_plot, validate_schedule_axis,
)


def _map():
    return SocMap(SocParams.load("software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q.json"))


def _validate_defaults(**overrides):
    values = dict(resonant_hz=2.875e9, detuned_hz=2.800e9, mw_amp=1.0,
                  reset_spacing_batches=492, reset_pulses=20, half_duration_batches=492,
                  laser_start_batches=375, laser_duration_batches=30, readout_delay_batches=77,
                  readout_window_batches=23, conditioning_pairs=64,
                  conditioning_pair_period_batches=3933,
                  recovery_delay_batches=us_to_batches(10.0, name="recovery delay"), blocks_per_point=2, averages=2)
    values.update(overrides)
    _validate(_map(), **values)


def test_default_schedules_match_train_duration_with_distinct_dose_and_idle():
    pairs, periods = validate_schedule_axis(list(DEFAULT_CONDITIONING_PAIRS), list(DEFAULT_CONDITIONING_PAIR_PERIOD_US))
    duration_us = np.asarray([train_duration_batches(count, period) for count, period in zip(pairs, periods)]) / 491.52
    np.testing.assert_allclose(duration_us, [506.109619, 510.239665, 512.5], atol=0.001)
    assert periods[-1] == 984
    assert periods[0] - 2 * DEFAULT_HALF_DURATION_BATCHES > 0


def test_schedule_validation_requires_paired_lists_and_a_full_pair_period():
    with pytest.raises(ValueError, match="equal-length"):
        validate_schedule_axis([64], [8.0, 4.0])
    with pytest.raises(ValueError, match="configurations must be unique"):
        validate_schedule_axis([64, 64], [8.0, 8.0])
    assert validate_schedule_axis([64, 64], [8.0, 4.0])[0] == [64, 64]
    with pytest.raises(ValueError, match="fit one complete"):
        validate_schedule_axis([64], [1.0])
    _validate_defaults()
    with pytest.raises(ValueError, match="fit one complete"):
        _validate_defaults(conditioning_pair_period_batches=983)


def test_kernel_keeps_abba_mw_off_probe_and_drains_pairs_within_queue_depth():
    source = inspect.getsource(k_conditioning_spacing.fn)
    assert "while shot < 4" in source
    assert "if shot == 1 or shot == 2" in source
    assert "while pair < conditioning_pairs" in source
    assert "signal_start = signal_start + conditioning_pair_period_batches" in source
    assert "if pair + 1 == conditioning_pairs" in source
    assert "wait_until(reference_laser + laser_duration_batches)" in source
    assert source.count("read_res()") == 1


def test_kernel_compiles_with_runtime_pair_period():
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_program(_map())
    assert {"conditioning_pairs", "conditioning_pair_period_batches", "recovery_delay_batches"} <= set(program.params)
    assert "signal_start = signal_start + conditioning_pair_period_batches" in program.c_source


def test_save_records_requested_and_quantized_periods_with_reproducible_timing(tmp_path):
    pytest.importorskip("matplotlib")
    output = tmp_path / "spacing.npz"
    save_and_plot(
        [64, 128, 256], [8.0, 4.0, 2.0], [3933, 1967, 984], 4915,
        np.array([[100.0, 200.0, 400.0], [110.0, 220.0, 440.0]]),
        np.array([[90.0, 180.0, 360.0], [99.0, 198.0, 396.0]]),
        output, tmp_path / "spacing.png", resonant_hz=2.875e9, detuned_hz=2.800e9,
        mw_amp=0.25, half_duration_batches=492, reset_spacing_batches=492,
        reset_pulses=20, laser_start_batches=375, laser_duration_batches=30,
        readout_delay_batches=77, readout_window_batches=23, blocks_per_point=2,
        averages=2,
    )
    with np.load(output) as saved:
        np.testing.assert_array_equal(saved["requested_conditioning_pair_period_us"], [8.0, 4.0, 2.0])
        np.testing.assert_array_equal(saved["conditioning_pair_period_batches"], [3933, 1967, 984])
        assert saved["detuned_probe_mean"].shape == (2, 3)
        assert saved["resonant_minus_detuned"].shape == (3,)
        assert saved["difference_by_run"].shape == (2, 3)
        assert {key: saved[key].item() for key in (
            "reset_spacing_batches", "reset_pulses", "laser_start_batches",
            "laser_duration_batches", "readout_delay_batches",
            "readout_window_batches", "averages",
        )} == {
            "reset_spacing_batches": 492, "reset_pulses": 20,
            "laser_start_batches": 375, "laser_duration_batches": 30,
            "readout_delay_batches": 77, "readout_window_batches": 23,
            "averages": 2,
        }
