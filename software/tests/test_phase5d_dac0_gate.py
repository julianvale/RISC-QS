"""Host-only proof of the Phase 5D DAC0 helper's identity and reset envelope."""

import importlib.util
import hashlib
from pathlib import Path

import pytest
from riscq.build import compile_c
from riscq.map import SocMap, SocParams


REPO = Path(__file__).resolve().parents[2]
HELPER = REPO / ".porting" / "rfsoc4x2" / "phase5d_dac0_once.py"
COLD_HELPER = REPO / ".porting" / "rfsoc4x2" / "phase5d_cold_health.py"
SOURCE = REPO / "software" / "fw" / "phase5d_dac0_80mhz_5us.c"
PARAMS = REPO / "software" / "configs" / "rfsoc4x2-nv-1q.json"


def _module():
    spec = importlib.util.spec_from_file_location("phase5d_dac0_once", HELPER)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def _cold_module():
    spec = importlib.util.spec_from_file_location("phase5d_cold_health", COLD_HELPER)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


@pytest.fixture
def firmware(tmp_path):
    image = compile_c(SOURCE.read_text(), SocMap(SocParams.load(PARAMS)))
    assert len(image.data) == 628
    assert hashlib.sha256(image.data).hexdigest() == \
        "e767aca88e84c28d4193448fe829106500acdb3b770de07eea7e1238af6cd61b"
    path = tmp_path / "phase5d_dac0.bin"
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
        value = int(value) & 0xFFFFFFFF
        self.writes.append((offset, value))
        self.mem[offset] = value
        if offset == 0x50000 and value == 0 and self.complete:
            self.mem[0x26C] = 0xD04E5D00
            self.mem[0x270] = 0x52515121
            self.mem[0x274] = 0x12345678
            self.mem[0x278] = 0x35444130

    def read(self, offset):
        return self.mem.get(offset, 0)


def test_exact_image_constant_envelope_and_reset_recovery(firmware):
    module = _module()
    FakeMMIO.instances.clear()
    result = module.run_once(FakeMMIO, firmware)
    mmio = FakeMMIO.instances[-1]
    assert (mmio.base, mmio.span) == (0x80000000, 0x50004)
    assert mmio.writes[0] == (0x50000, 1)
    assert mmio.writes[-1] == (0x50000, 1)
    assert sum(pair == (0x50000, 0) for pair in mmio.writes) == 1
    envelope = [(a, v) for a, v in mmio.writes if 0x10000 <= a < 0x14000]
    assert len(envelope) == 4096
    assert envelope[0] == (0x10000, 0x00007FFF)
    assert envelope[-1] == (0x13FFC, 0x00007FFF)
    assert {v for _, v in envelope} == {0x00007FFF}
    assert result == (0xD04E5D00, 0x52515121, 0x12345678, 0x35444130)


def test_timeout_still_reasserts_reset(firmware):
    module = _module()

    class NeverDone(FakeMMIO):
        def __init__(self, base, span):
            super().__init__(base, span, complete=False)

    NeverDone.instances.clear()
    with pytest.raises(TimeoutError):
        module.run_once(NeverDone, firmware, timeout_s=0.001)
    assert NeverDone.instances[-1].writes[-1] == (0x50000, 1)


def test_cold_health_accepts_only_the_proven_active_and_dummy_states():
    module = _cold_module()
    status = {
        "DACTileStatus": [
            {"IsEnabled": 1, "TileState": 15, "BlockStatusMask": 1, "PowerUpState": 1, "PLLState": 1},
            {"IsEnabled": 1, "TileState": 15, "BlockStatusMask": 1, "PowerUpState": 1, "PLLState": 1},
            {"IsEnabled": 1, "TileState": 15, "BlockStatusMask": 1, "PowerUpState": 1, "PLLState": 1},
            {"IsEnabled": 0, "TileState": 0, "BlockStatusMask": 0, "PowerUpState": 0, "PLLState": 0},
        ],
        "ADCTileStatus": [
            {"IsEnabled": 0, "TileState": 0, "BlockStatusMask": 0, "PowerUpState": 0, "PLLState": 0},
            {"IsEnabled": 0, "TileState": 0, "BlockStatusMask": 0, "PowerUpState": 0, "PLLState": 0},
            {"IsEnabled": 1, "TileState": 15, "BlockStatusMask": 2, "PowerUpState": 1, "PLLState": 1},
            {"IsEnabled": 1, "TileState": 12, "BlockStatusMask": 1, "PowerUpState": 1, "PLLState": 1},
        ],
        "State": 0,
    }
    module.validate_status(status)
    status["ADCTileStatus"][2]["TileState"] = 12
    with pytest.raises(RuntimeError, match="unexpected ADC tile health"):
        module.validate_status(status)
