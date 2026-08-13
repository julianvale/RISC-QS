from pathlib import Path

import numpy as np

from riscq.map import SocMap, SocParams
from riscq.pulses import units
from software.quantum_sensing.rfsoc4x2_aom_am import (CARRIER_HZ, ENV_LINES, LOW_AMP_CODE,
                                   MODULATION_CYCLES, PULSE_BATCHES, am_envelope,
                                   build_program, modulation_hz)


def _map():
    params = (Path(__file__).resolve().parents[1] / "platforms" /
              "rfsoc4x2-nv-1q" / "1.0.0" / "rfsoc4x2-nv-1q.json")
    return SocMap(SocParams.load(params))


def test_aom_am_uses_full_readout_loop_and_realized_frequency():
    m = _map()
    env = am_envelope(m)
    assert CARRIER_HZ == 80e6
    assert env.shape == (ENV_LINES,)
    assert MODULATION_CYCLES == 21
    assert modulation_hz(m) == 10.08e6
    assert np.isclose(env[0].real, 0.0)
    assert np.isclose(env[ENV_LINES // 2].real, 0.999969482421875)
    assert np.allclose(env.imag, 0.0)


def test_aom_am_program_overrides_duration_but_stores_only_one_envelope_loop():
    program = build_program(_map())
    assert PULSE_BATCHES == 2458
    assert program.tables["ro"][0][1] == LOW_AMP_CODE
    assert program.tables["ro"][0][3] == ENV_LINES
    line0, lines = program.envelopes[1][0]
    assert line0 == 0 and lines.shape == (ENV_LINES, 1)
    assert f"set_freq(RF_CH1, {units.freq_to_code(CARRIER_HZ, _map().params)})" in program.c_source
