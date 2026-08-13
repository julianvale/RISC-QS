import numpy as np
import pytest

from riscq import build
from riscq.map import SocMap, SocParams
from software.quantum_sensing.nv_mw_on_esr import (
    _tables, _validate, build_program, frequency_grid, mw_duration_batches, summarize,
)


def _map():
    return SocMap(SocParams.load("software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q.json"))


def test_mw_on_esr_uses_full_bank_dac0_and_zero_hz_demodulator():
    m = _map()
    gate, demod = _tables(m)
    assert gate.channel == 0 and gate.pulses["mw"].amp_code() == 0
    assert demod.channel == 2 and demod.pulses["window"].amp_code() > 0
    assert len(gate.pulses["mw"].env) == m.channel(0).samples_per_line * m.params.env_depth
    assert len(demod.pulses["window"].env) == m.channel(2).samples_per_line * m.params.env_depth


def test_mw_on_duration_covers_init_train_and_readout_window_within_limit():
    duration = mw_duration_batches(5, 4_096, 19, 256, 77, 23)
    assert duration == 16_759
    _validate(_map(), [2.87e9], 5, 4_096, 256, 19, 1.0, 77, 23, 2)
    with pytest.raises(ValueError, match="exceeding"):
        _validate(_map(), [2.87e9], 17, 4_096, 256, 19, 1.0, 77, 23, 2)


def test_mw_on_summary_is_ratio_of_means_with_paired_error():
    ref = np.array([[100, 80, 90]], dtype=np.int64)
    sig = np.array([[80, 80, 80]], dtype=np.int64)
    contrast, sem, difference = summarize(ref, sig)
    assert np.allclose(contrast, [1 / 9])
    assert np.allclose(sem, [10 / np.sqrt(3) / 90])
    assert difference.tolist() == [[20, 0, 10]]


def test_mw_on_frequency_grid_and_program_runtime_parameters():
    assert frequency_grid(2.84e9, 2.88e9, 5) == [2.84e9, 2.85e9, 2.86e9, 2.87e9, 2.88e9]
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_program(_map())
    assert {"mw_freq_code", "mw_amp_code", "mw_on", "window_offset_batches", "window_batches"} <= set(program.params)
    assert "play(RF_CH0" in program.c_source
    assert "play(RF_CH2" in program.c_source
