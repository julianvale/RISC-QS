import numpy as np
import pytest

from riscq import build
from riscq.map import SocMap, SocParams
from software.quantum_sensing.nv_mw_on_esr_batched import (
    MAX_PAIRS_PER_RERUN, _validate, build_program, minimum_shot_period_batches, unpack_pairs,
)


def _map():
    return SocMap(SocParams.load("software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q.json"))


def test_batched_mw_on_validation_enforces_block_and_shot_spacing_limits():
    m = _map()
    minimum = minimum_shot_period_batches(5, 4_096, 19, 256, 77, 23)
    assert minimum > 16_759
    _validate(m, [2.82e9, 2.87e9], 5, 4_096, 256, 19, 1.0, 77, 23,
              256, 16, minimum)
    with pytest.raises(ValueError, match="pairs-per-rerun"):
        _validate(m, [2.87e9], 5, 4_096, 256, 19, 1.0, 77, 23,
                  2, MAX_PAIRS_PER_RERUN + 1, minimum)
    with pytest.raises(ValueError, match="shot-period-batches"):
        _validate(m, [2.87e9], 5, 4_096, 256, 19, 1.0, 77, 23,
                  2, 1, minimum - 1)


def test_batched_mw_on_unpacks_alternating_reference_signal_values():
    raw = np.array([10, 20, 30, 40, 99, 99], dtype=np.int32)
    ref, sig = unpack_pairs(raw, 2)
    assert ref.tolist() == [10, 30]
    assert sig.tolist() == [20, 40]


def test_batched_mw_on_program_exposes_runtime_block_and_timing_parameters():
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_program(_map())
    assert {"pairs_per_rerun", "shot_period_batches", "mw_freq_code", "window_batches"} <= set(program.params)
    assert "while (shot < shot_count)" in program.c_source
    assert "play(RF_CH0" in program.c_source
