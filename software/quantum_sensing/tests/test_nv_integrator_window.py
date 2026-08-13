import numpy as np
import pytest

from riscq import build
from riscq.map import SocMap, SocParams
from software.quantum_sensing.nv_integrator_window import (
    _best_index, _display_grid, _inclusive_range, _validate, build_program, demod_table,
    summarize_differences,
)


def _map():
    return SocMap(SocParams.load("software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q.json"))


def test_window_validation_is_local_and_requires_repeat_pairs():
    m = _map()
    _validate(m, [4, 5, 6], [2, 3, 4], 96, 19, 2)
    with pytest.raises(ValueError, match="repeatability"):
        _validate(m, [4], [2], 96, 19, 1)
    with pytest.raises(ValueError, match="non-negative"):
        _validate(m, [-1], [2], 96, 19, 2)


def test_offset_and_duration_ranges_are_inclusive_with_default_style_unit_steps():
    assert _inclusive_range(4, 7, 1, "offset") == [4, 5, 6, 7]
    assert _inclusive_range(2, 4, 1, "duration") == [2, 3, 4]
    assert _inclusive_range(4, 10, 3, "offset") == [4, 7, 10]
    assert _inclusive_range(4, 9, 3, "offset") == [4, 7]
    with pytest.raises(ValueError, match="positive"):
        _inclusive_range(4, 8, 0, "offset")
    with pytest.raises(ValueError, match="greater than or equal"):
        _inclusive_range(8, 4, 1, "duration")


def test_window_uses_a_zero_hz_square_demodulator():
    table = demod_table(_map())
    assert table.channel == 2 and table.freq_hz == 0.0
    assert table.pulses["window"].amp_code() > 0


def test_signed_pair_statistics_follow_the_stage_1_formula():
    differences = np.array([[[2, 4, 6], [-2, -4, -6]]], dtype=np.int64)
    mean, std, snr = summarize_differences(differences)
    assert mean.tolist() == [[4.0, -4.0]]
    assert np.allclose(std, [[2.0, 2.0]])
    assert np.allclose(snr, [[2.0, 2.0]])


def test_display_axes_and_circled_best_use_offset_then_duration_indices():
    # Storage is (offset, duration); imshow must transpose to show x=offset, y=duration.
    values = np.array([[10, 11, 12], [20, 21, 22]])
    assert _display_grid(values).tolist() == [[10, 20], [11, 21], [12, 22]]
    assert _best_index(np.array([[1.0, 2.0, 3.0], [4.0, 9.0, 5.0]])) == (1, 1)
    assert _best_index(np.full((2, 3), np.nan)) == (0, 0)


def test_integrator_program_has_runtime_window_and_laser_on_off_parameters():
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_program(_map())
    assert {"window_offset_batches", "window_batches", "laser_on"} <= set(program.params)
    assert "play(RF_CH2" in program.c_source
    assert "read_real()" in program.c_source
