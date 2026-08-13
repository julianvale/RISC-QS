import inspect

import numpy as np
import pytest

from riscq import build
from riscq.map import SocMap, SocParams
from software.quantum_sensing.nv_dark_mw_multipulse_readout import (
    DEFAULT_LASER_TRIGGER_BATCHES,
    MAX_READOUT_PULSES,
    _validate,
    build_program,
    duration_axis,
    k_dark_mw_multipulse_readout,
    summarize,
)


def _map():
    return SocMap(SocParams.load("software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q.json"))


def _validate_defaults(**overrides):
    values = dict(
        resonant_hz=2.875e9, off_resonant_hz=2.95e9, mw_amp=1.0,
        reset_spacing_batches=492, reset_pulses=20, laser_start_batches=375,
        laser_duration_batches=DEFAULT_LASER_TRIGGER_BATCHES,
        readout_spacing_batches=492, readout_pulses=4, post_mw_delay_batches=50,
        readout_delay_batches=77, readout_window_batches=23,
        dark_mw_duration_batches=[983], blocks_per_duration=2, averages=2,
    )
    values.update(overrides)
    _validate(_map(), **values)


def test_duration_axis_quantizes_and_rejects_duplicates():
    requested, batches = duration_axis([2.0, 5.0, 10.0])
    assert requested == [2.0, 5.0, 10.0]
    assert batches == [983, 2458, 4915]
    with pytest.raises(ValueError, match="unique"):
        duration_axis([2.0, 2.0001])


def test_validation_bounds_readout_pulses_and_spacing():
    _validate_defaults()
    with pytest.raises(ValueError, match="readout-pulses"):
        _validate_defaults(readout_pulses=MAX_READOUT_PULSES + 1)
    with pytest.raises(ValueError, match="drain"):
        _validate_defaults(readout_spacing_batches=100)


def test_summary_retains_pulse_resolved_and_cumulative_paired_statistics():
    # run, duration, condition(no-MW/resonant/off-resonant), pulse
    values = np.array([
        [[[100, 100], [90, 80], [99, 98]]],
        [[[120, 120], [108, 96], [119, 118]]],
    ], dtype=float)
    result = summarize(values)
    np.testing.assert_allclose(result["resonant_minus_no_mw"], [[-11, -22]])
    np.testing.assert_allclose(result["cumulative_resonant_minus_no_mw"], [[-11, -33]])
    np.testing.assert_allclose(result["off_resonant_minus_no_mw"], [[-1, -2]])
    np.testing.assert_allclose(result["positive_cumulative_contrast"], [[0.1, 0.15]])
    np.testing.assert_allclose(result["cumulative_snr"], [[-11, -11]])


def test_kernel_has_balanced_conditions_and_individual_readout_drain():
    source = inspect.getsource(k_dark_mw_multipulse_readout.fn)
    assert "while shot < 6" in source
    assert "if shot == 1 or shot == 4" in source
    assert "elif shot == 2 or shot == 3" in source
    assert "while readout_index < readout_pulses" in source
    assert "condition * MAX_READOUT_PULSES + readout_index" in source
    assert "wait_until(readout_window + READOUT_LEAD)" in source


def test_kernel_compiles_with_runtime_duration_and_pulse_count():
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_program(_map())
    assert {"dark_mw_duration_batches", "readout_pulses", "blocks_per_duration"} <= set(program.params)
    assert "while (shot < 6)" in program.c_source
    assert "while (readout_index < readout_pulses)" in program.c_source
    assert "out[condition * 32 + readout_index]" in program.c_source
