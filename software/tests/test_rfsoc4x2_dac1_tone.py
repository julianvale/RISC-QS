"""Host-only proof of the RFSoC4x2 DAC1 tone identity, bank mapping, and reset envelope."""

import hashlib
from pathlib import Path

import pytest
from riscq.board import rfsoc4x2_validation as validation
from riscq.build import compile_c
from riscq.map import SocMap, SocParams


REPO = Path(__file__).resolve().parents[2]
SOURCE = REPO / "software" / "fw" / "rfsoc4x2_dac1_tone.c"
PARAMS = REPO / "software" / "configs" / "rfsoc4x2-nv-1q.json"


@pytest.fixture
def firmware(tmp_path):
    image = compile_c(SOURCE.read_text(), SocMap(SocParams.load(PARAMS)))
    assert len(image.data) == 628
    assert hashlib.sha256(image.data).hexdigest() == \
        "edd2593c0216c9c66ceedacd5d140eb5d219985d31d0e08dd49b13012a179814"
    path = tmp_path / "rfsoc4x2_dac1_tone.bin"
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
            self.mem[0x26C] = 0xD04E5D01
            self.mem[0x270] = 0x52515121
            self.mem[0x274] = 0x12345678
            self.mem[0x278] = 0x35444131

    def read(self, offset):
        return self.mem.get(offset, 0)


def test_exact_image_readout_envelope_and_reset_recovery(firmware):
    FakeMMIO.instances.clear()
    result = validation.run_dac_tone(FakeMMIO, firmware, "dac1")
    mmio = FakeMMIO.instances[-1]
    assert (mmio.base, mmio.span) == (0x80000000, 0x50004)
    assert mmio.writes[0] == (0x50000, 1)
    assert mmio.writes[-1] == (0x50000, 1)
    assert sum(pair == (0x50000, 0) for pair in mmio.writes) == 1
    envelope = [(a, v) for a, v in mmio.writes if 0x20000 <= a < 0x21000]
    assert len(envelope) == 1024
    assert envelope[0] == (0x20000, 0x00007FFF)
    assert envelope[-1] == (0x20FFC, 0x00007FFF)
    assert {v for _, v in envelope} == {0x00007FFF}
    assert not any(0x10000 <= a < 0x14000 for a, _ in mmio.writes)
    assert result == (0xD04E5D01, 0x52515121, 0x12345678, 0x35444131)


def test_timeout_still_reasserts_reset(firmware):
    class NeverDone(FakeMMIO):
        def __init__(self, base, span):
            super().__init__(base, span, complete=False)

    NeverDone.instances.clear()
    with pytest.raises(TimeoutError):
        validation.run_dac_tone(NeverDone, firmware, "dac1", timeout_s=0.001)
    assert NeverDone.instances[-1].writes[-1] == (0x50000, 1)
