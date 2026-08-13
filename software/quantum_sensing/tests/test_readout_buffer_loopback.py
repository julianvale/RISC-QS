import numpy as np
import pytest

from riscq import build
from riscq.map import ADC_BATCH, SocMap, SocParams
from software.quantum_sensing.readout_buffer_loopback import (
    DAC_AMP_CODE, DAC_HZ, DEFAULT_CAPTURE_BATCHES, _tables, _validate, build_program,
)


def _map():
    return SocMap(SocParams.load("software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q.json"))


def test_readout_buffer_loopback_uses_dac0_stimulus_and_silent_dac1_capture_gate():
    m = _map()
    gate, capture = _tables(m)
    assert gate.channel == 0 and gate.freq_hz == DAC_HZ
    assert gate.pulses["stimulus"].amp_code() == DAC_AMP_CODE
    assert capture.channel == 1 and capture.pulses["gate"].amp_code() == 0
    assert len(capture.pulses["gate"].env) == m.params.env_depth


def test_readout_buffer_loopback_program_has_both_drive_tables_and_runtime_capture_length():
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_program(_map())
    assert set(program.tables) == {"gate", "capture"}
    assert "capture_batches" in program.params
    assert "play(RF_CH0" in program.c_source
    assert "play(RF_CH1" in program.c_source


def test_capture_length_is_limited_to_the_nonwrapping_robs_prefix():
    m = _map()
    _validate(m, DEFAULT_CAPTURE_BATCHES, 1)
    _validate(m, m.params.rob_depth, 1)
    for bad in (0, m.params.rob_depth + 1):
        try:
            _validate(m, bad, 1)
        except ValueError:
            pass
        else:
            raise AssertionError(f"accepted wrapping capture length {bad}")
    assert m.params.rob_depth * ADC_BATCH == 4096
    assert np.isclose(m.params.dsp_freq_hz * ADC_BATCH, 1.96608e9)
