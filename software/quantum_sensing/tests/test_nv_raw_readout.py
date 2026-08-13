import pytest

from riscq import build
from riscq.map import SocMap, SocParams
from software.quantum_sensing.nv_raw_readout import (
    DEFAULT_CAPTURE_BATCHES, DEFAULT_LASER_DELAY_BATCHES, DEFAULT_LASER_TRIGGER_BATCHES,
    _validate, build_program, capture_table, combine_adc_lanes,
)
import numpy as np


def _map():
    return SocMap(SocParams.load("software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q.json"))


def test_raw_readout_uses_a_silent_readout_drive_capture_gate():
    capture = capture_table(_map())
    assert capture.channel == 1
    assert capture.pulses["capture"].amp_code() == 0


def test_raw_readout_uses_a_robust_digital_trigger_width_not_an_optical_width_limit():
    m = _map()
    assert DEFAULT_LASER_TRIGGER_BATCHES == 19
    _validate(m, DEFAULT_CAPTURE_BATCHES, DEFAULT_LASER_DELAY_BATCHES, 20, 1)
    with pytest.raises(ValueError, match="65535"):
        _validate(m, m.params.rob_depth, 0, 65_536, 1)


def test_raw_readout_requires_laser_to_fit_the_nonwrapping_capture_gate():
    m = _map()
    with pytest.raises(ValueError, match="within"):
        _validate(m, 100, 90, 19, 1)
    with pytest.raises(ValueError, match="avoid robs wrapping"):
        _validate(m, m.params.rob_depth + 1, 0, 1, 1)


def test_combine_adc_lanes_interleaves_each_batch_into_one_trace():
    traces = np.arange(2 * 3 * 4).reshape(2, 3, 4)
    combined = combine_adc_lanes(traces)
    assert combined.shape == (2, 12)
    np.testing.assert_array_equal(combined[0], np.arange(12))


def test_combine_adc_lanes_rejects_an_incomplete_batch():
    with pytest.raises(ValueError, match="ADC lanes"):
        combine_adc_lanes(np.zeros((2, 3)))


def test_raw_readout_program_has_runtime_on_off_branch_and_capture_length():
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_program(_map())
    assert set(program.params) == {"capture_batches", "laser_delay_batches",
                                   "laser_duration_batches", "laser_on"}
    assert "play_laser(1, laser_duration_batches, 1, laser_start);" in program.c_source
