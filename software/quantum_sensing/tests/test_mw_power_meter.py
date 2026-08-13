import pytest

from riscq import build
from riscq.map import SocMap, SocParams
from software.quantum_sensing.mw_power_meter import (
    DEFAULT_DURATION_BATCHES, DEFAULT_GAP_BATCHES, SCHEDULE_LEAD, _table, _validate,
    build_program, duty_cycle,
)


def _map():
    return SocMap(SocParams.load("software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q.json"))


def test_power_meter_uses_dac0_full_bank_and_maximum_duration():
    m = _map()
    table = _table(m)
    assert table.channel == 0 and table.pulses["mw"].amp_code() == 0
    assert len(table.pulses["mw"].env) == m.channel(0).samples_per_line * m.params.env_depth
    assert DEFAULT_DURATION_BATCHES == 65_535


def test_power_meter_validation_requires_valid_pulse_and_repeat_spacing():
    m = _map()
    _validate(m, 2.87e9, 1.0, 65_535, 1, 0)
    _validate(m, 2.87e9, 1.0, 65_535, 2, DEFAULT_GAP_BATCHES)
    with pytest.raises(ValueError, match="65535"):
        _validate(m, 2.87e9, 1.0, 65_536, 1, 0)
    with pytest.raises(ValueError, match="gap-batches"):
        _validate(m, 2.87e9, 1.0, 65_535, 2, SCHEDULE_LEAD - 1)


def test_power_meter_reports_repeated_burst_duty_cycle():
    assert duty_cycle(65_535, 2_048) == pytest.approx(65_535 / 67_583)


def test_power_meter_program_has_runtime_frequency_amplitude_and_duration():
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_program(_map())
    assert {"duration_batches", "frequency_code", "amplitude_code", "repetitions", "gap_batches"} <= set(program.params)
    assert "play(RF_CH0" in program.c_source
