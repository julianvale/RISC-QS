import pytest

from riscq import build
from riscq.map import SocMap, SocParams
from software.quantum_sensing.dacb_frequency_switch_scope import (
    DEFAULT_DURATION_BATCHES,
    _table,
    _validate,
    build_program,
)


def _map():
    return SocMap(SocParams.load(
        "software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q.json"
    ))


def test_scope_check_uses_constant_envelope_on_dacb():
    m = _map()
    table = _table(m)
    assert table.channel == 1
    assert m.ro_dac(0) == 1
    assert table.pulses["tone"].amp_code() == 0
    assert len(table.pulses["tone"].env) == m.params.env_depth


def test_scope_check_validation():
    m = _map()
    _validate(m, 50e6, 55e6, 0.2, DEFAULT_DURATION_BATCHES)
    with pytest.raises(ValueError, match="must differ"):
        _validate(m, 50e6, 50e6, 0.2, DEFAULT_DURATION_BATCHES)
    with pytest.raises(ValueError, match="amplitude"):
        _validate(m, 50e6, 55e6, 1.1, DEFAULT_DURATION_BATCHES)


def test_scope_check_program_switches_runtime_frequency_on_rf_ch1():
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_program(_map())
    assert {
        "first_frequency_code",
        "second_frequency_code",
        "amplitude_code",
        "duration_batches",
    } <= set(program.params)
    source = program.c_source
    assert source.count("play(RF_CH1") == 2
    assert source.count("set_freq(RF_CH1") == 2
    assert source.index("set_freq(RF_CH1, first_frequency_code)") < \
        source.index("play(RF_CH1, 0, first_start)") < \
        source.index("wait_until(first_start + duration_batches)") < \
        source.index("set_freq(RF_CH1, second_frequency_code)") < \
        source.index("play(RF_CH1, 0, second_start)")
