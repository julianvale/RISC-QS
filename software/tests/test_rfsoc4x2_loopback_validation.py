"""Host-only proof of the accepted RFSoC4x2 loopback-validation firmware and helper."""

import hashlib
from pathlib import Path

import pytest
from riscq.board import rfsoc4x2_validation as validation
from riscq.build import compile_c
from riscq.map import SocMap, SocParams


REPO = Path(__file__).resolve().parents[2]
SOURCE = REPO / "software" / "fw" / "rfsoc4x2_loopback_validation.c"
PARAMS = REPO / "software" / "configs" / "rfsoc4x2-nv-1q.json"


@pytest.fixture
def firmware(tmp_path):
    image = compile_c(SOURCE.read_text(), SocMap(SocParams.load(PARAMS)))
    assert len(image.data) == 876
    assert hashlib.sha256(image.data).hexdigest() == \
        "716aa56b88d4962d36afa940fbd658561eb1efe88db88c0aaade10e99e31d9cb"
    expected = {
        "__rq_status": 0x80000360,
        "__rq_magic": 0x80000364,
        "rfsoc4x2_mode": 0x80000368,
        "rfsoc4x2_signature": 0x8000036C,
        "rfsoc4x2_demod_code": 0x80000370,
        "rfsoc4x2_t_dac": 0x80000374,
        "rfsoc4x2_t_demod": 0x80000378,
        "rfsoc4x2_res": 0x8000037C,
        "rfsoc4x2_i": 0x80000380,
        "rfsoc4x2_q": 0x80000384,
        "rfsoc4x2_t_result": 0x80000388,
    }
    assert validation.validate_symbol_layout(image.symbols, expected) == expected
    path = tmp_path / "rfsoc4x2_loopback_validation.bin"
    path.write_bytes(image.data)
    return path


class FakeMMIO:
    instances = []

    def __init__(self, base, span, complete=True):
        self.base = base
        self.span = span
        self.complete = complete
        self.mem = {}
        self.writes = []
        self.__class__.instances.append(self)

    def write(self, offset, value):
        value = int(value) & 0xFFFF_FFFF
        self.writes.append((offset, value))
        self.mem[offset] = value
        if offset == 0x50000 and value == 0 and self.complete:
            mode = self.mem[0x368]
            self.mem.update({
                0x360: 0xD04E5D10,
                0x364: 0x52515121,
                0x36C: 0x354C4200 | mode,
                0x370: 2924 if mode == 2 else 2668,
                0x374: 0x12345800,
                0x378: 0x12345700,
                0x37C: 1,
                0x380: 30_000_000 if mode == 0 else 1000,
                0x384: -4_000_000 & 0xFFFF_FFFF,
                0x388: 0x12347000,
            })

    def read(self, offset):
        return self.mem.get(offset, 0)


@pytest.mark.parametrize("mode", ["matched", "no-dac", "detuned"])
def test_exact_image_banks_result_and_reset_recovery(firmware, mode):
    FakeMMIO.instances.clear()
    result = validation.run_loopback_validation(FakeMMIO, firmware, mode)
    mmio = FakeMMIO.instances[-1]
    assert (mmio.base, mmio.span) == (0x80000000, 0x50004)
    assert mmio.writes[0] == (0x50000, 1)
    assert mmio.writes[-1] == (0x50000, 1)
    assert sum(pair == (0x50000, 0) for pair in mmio.writes) == 1
    gate = [(a, v) for a, v in mmio.writes if 0x10000 <= a < 0x14000]
    demod = [(a, v) for a, v in mmio.writes if 0x30000 <= a < 0x31000]
    assert len(gate) == 4096 and gate[0][0] == 0x10000 and gate[-1][0] == 0x13FFC
    assert len(demod) == 1024 and demod[0][0] == 0x30000 and demod[-1][0] == 0x30FFC
    assert {v for _, v in gate + demod} == {0x00007FFF}
    assert not any(0x20000 <= a < 0x21000 for a, _ in mmio.writes)
    assert result["i"] == (30_000_000 if mode == "matched" else 1000)
    assert result["q"] == -4_000_000
    assert result["demod_code"] == (2924 if mode == "detuned" else 2668)


def test_timeout_still_reasserts_reset(firmware):
    class NeverDone(FakeMMIO):
        def __init__(self, base, span):
            super().__init__(base, span, complete=False)

    NeverDone.instances.clear()
    with pytest.raises(TimeoutError):
        validation.run_loopback_validation(NeverDone, firmware, "matched", timeout_s=0.001)
    assert NeverDone.instances[-1].writes[-1] == (0x50000, 1)


def test_identity_mismatch_stops_before_mmio(firmware, tmp_path):
    bad = tmp_path / "bad.bin"
    bad.write_bytes(firmware.read_bytes()[:-4])
    FakeMMIO.instances.clear()
    with pytest.raises(RuntimeError, match="firmware identity mismatch"):
        validation.run_loopback_validation(FakeMMIO, bad, "matched")
    assert not FakeMMIO.instances


def test_mapping_acceptance_uses_magnitude_and_requires_stability():
    good = [
        {"mode": "matched", "magnitude": 100.0},
        {"mode": "matched", "magnitude": 95.0},
        {"mode": "no-dac", "magnitude": 10.0},
        {"mode": "detuned", "magnitude": 20.0},
    ]
    assert validation.evaluate_loopback(good)["matched_low"] == 95.0
    with pytest.raises(RuntimeError, match="unstable"):
        validation.evaluate_loopback([{**item, "magnitude": 70.0}
                                      if item is good[1] else item for item in good])
    with pytest.raises(RuntimeError, match="4x detuned"):
        validation.evaluate_loopback([{**item, "magnitude": 30.0}
                                      if item is good[3] else item for item in good])


def test_source_is_current_abi_and_fixed_to_reviewed_mapping():
    source = SOURCE.read_text()
    assert '#include "riscq.h"' in source
    assert "software/firmware" not in source
    assert "RF_CH0" in source and "RF_CH2" in source and "RF_CH1" not in source
    for required in ("667u << 16", "2668u << 16", "2924u << 16", "3276u << 16",
                     "19896u << 16", "2458", "4096", "RQ_RO_LEAD"):
        assert required in source
