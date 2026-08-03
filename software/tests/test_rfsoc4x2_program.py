"""Host-only tests for the restricted RFSoC4x2 Python DSL service lane."""

from pathlib import Path

import numpy as np
import pytest

from riscq import run
from riscq.build import Image, Program
from riscq.deployment.bundle import BundleError
from riscq.deployment.context import PlatformContext
from riscq.deployment.identity import raw_config_identity
from riscq.deployment.program import Rfsoc4x2ProgramAdapter, validate_program_wire
from riscq.deployment.service import RiscqBoardService
from riscq.driver.remote import RemoteDriver
from riscq.map import MEM_BASE, SocMap


ROOT = Path(__file__).resolve().parents[1]
PARAMS = (ROOT / "configs" / "rfsoc4x2-nv-1q.json").read_bytes()
IDENTITY = raw_config_identity(PARAMS)


class FakeDriver:
    def __init__(self, m):
        self.m, self.mem, self.ops = m, {}, []

    def write32(self, addr, value):
        self.ops.append(("w", addr, value))
        self.mem[addr] = value & 0xffffffff
        if addr == self.m.host_ctrl and value == 0:
            self.mem[self.m.imem(0) + 0] = 0xD04E0000
            self.mem[self.m.imem(0) + 8] = 42

    def read32(self, addr):
        self.ops.append(("r", addr))
        return self.mem.get(addr, 0)

    def write_block(self, addr, data):
        self.ops.append(("wb", addr, bytes(data)))
        for i in range(0, len(data), 4):
            self.mem[addr + i] = int.from_bytes(data[i:i + 4], "little")

    def read_block(self, addr, nbytes):
        return b"".join(self.mem.get(addr + i, 0).to_bytes(4, "little")
                        for i in range(0, nbytes, 4))


class Engine:
    def __init__(self):
        self.platform = PlatformContext(Path("test-release"), IDENTITY, "b" * 64, "h" * 64)
        self.soc_map = SocMap(IDENTITY.params)
        self.adapter = type("A", (), {"driver": FakeDriver(self.soc_map)})()
        self.ready_calls = 0

    def verify_active_platform(self):
        self.ready_calls += 1


def wire(m, image=b"\0\0\0\0" + (0x52515121).to_bytes(4, "little") + b"\0" * 8):
    return {"data": image, "entry": MEM_BASE,
            "symbols": {"__rq_status": [MEM_BASE, 4], "__rq_magic": [MEM_BASE + 4, 4],
                         "out": [MEM_BASE + 8, 4]},
            "params": {}, "arrays": {"out": 1}, "tables": {}, "envelopes": {}}


def test_program_service_setup_rerun_and_replacement():
    engine = Engine()
    service = RiscqBoardService(engine)
    service.program_setup(PARAMS.decode(), {0: wire(engine.soc_map)})
    result = service.program_rerun([0], {0: {}}, {0: {}}, ["out"], 100, 0.1)
    assert np.array_equal(np.frombuffer(result[0]["out"], dtype="<i4"), [42])
    old = service._program_map[0]
    service.program_setup(PARAMS.decode(), {0: wire(engine.soc_map, b"\0" * 16)})
    assert service._program_map[0] is not old
    assert engine.ready_calls == 2


def test_program_validation_rejects_core_and_bad_envelope_before_adapter():
    engine = Engine()
    service = RiscqBoardService(engine)
    with pytest.raises(ValueError, match="core 0"):
        service.program_setup(PARAMS.decode(), {1: wire(engine.soc_map)})
    bad = wire(engine.soc_map)
    bad["envelopes"] = {0: [[0, b"\0" * 4, 1, 1]]}
    with pytest.raises(BundleError, match="envelope span"):
        validate_program_wire(bad, engine.soc_map)
    assert engine.adapter.driver.ops == []


def test_program_adapter_uses_map_derived_envelope_window():
    m = SocMap(IDENTITY.params)
    driver = FakeDriver(m)
    adapter = Rfsoc4x2ProgramAdapter(driver, m)
    lines = np.zeros((2, m.channel(0).samples_per_line), dtype="<u4")
    run.write_envelope(adapter, m, 0, 0, 3, lines)
    writes = [op for op in driver.ops if op[0] == "w"]
    assert len(writes) == 2 * m.channel(0).samples_per_line
    assert writes[0][1] == m.env_base(0, 0) + 3 * m.channel(0).line_bytes


def test_remote_driver_retains_the_standard_four_method_surface(monkeypatch):
    class Proxy:
        def read32(self, addr):
            return 7

        def write32(self, addr, value):
            self.write = (addr, value)

        def read_block(self, addr, nbytes):
            return b"\0" * nbytes

        def write_block(self, addr, data):
            self.block = (addr, bytes(data))

        def _pyroRelease(self):
            self.closed = True

    proxy = Proxy()
    monkeypatch.setattr("Pyro5.api.Proxy", lambda _uri: proxy)
    drv = RemoteDriver("private", 9091)
    assert drv.read32(4) == 7
    drv.write32(8, -1)
    drv.write_block(12, b"\x01\0\0\0")
    assert proxy.write == (8, 0xffffffff)
    assert proxy.block == (12, b"\x01\0\0\0")
    assert drv.read_block(16, 4) == b"\0" * 4
    drv.close()
    assert proxy.closed
