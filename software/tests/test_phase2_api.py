from pathlib import Path

import pytest

from riscq import Board
from riscq.deployment.bundle import firmware_bundle_bytes
from riscq.deployment.identity import raw_config_identity
from riscq.map import MEM_BASE


ROOT = Path(__file__).resolve().parents[1]
PARAMS_PATH = ROOT / "configs" / "rfsoc4x2-nv-1q.json"
IDENTITY = raw_config_identity(PARAMS_PATH.read_bytes())
TOOLS = {name: {"path": f"/tools/{name}", "sha256": digit * 64, "version": "1.0"}
         for name, digit in (("compiler", "3"), ("objcopy", "4"), ("nm", "5"))}


class Transport:
    def __init__(self):
        self.calls = []

    def status(self):
        return {"ready": True, "platform": {"id": IDENTITY.platform_id,
                **IDENTITY.requirements()}, "params": PARAMS_PATH.read_text()}

    def run_firmware(self, bundle, **kwargs):
        self.calls.append(("run", bundle, kwargs))
        return {"answer": 1}

    def run_installed(self, name, version, **kwargs):
        self.calls.append(("installed", name, version, kwargs))
        return {"answer": 2}

    def self_test(self, **kwargs):
        self.calls.append(("self_test", kwargs))
        return {"ok": True}


def firmware(requirements=None):
    return firmware_bundle_bytes(
        firmware_id="echo", version="1.0.0", image=b"\0" * 8,
        symbols={"__rq_status": (MEM_BASE, 4), "__rq_magic": (MEM_BASE + 4, 4)},
        entry=MEM_BASE, requirements=requirements or IDENTITY.requirements(),
        source={"kind": "c", "sha256": "1" * 64},
        runtime={"sha256": "2" * 64}, toolchain=TOOLS)


def test_board_surface_status_run_installed_and_self_test():
    transport = Transport()
    board = Board(transport, PARAMS_PATH.read_bytes())
    assert board.status()["ready"] is True
    assert board.run(firmware(), parameters={"x": 1}, timeout_s=0.5) == {"answer": 1}
    assert board.run_installed("echo", "1.0.0") == {"answer": 2}
    assert board.self_test() == {"ok": True}
    for forbidden in ("write32", "read32", "shell", "python", "load_platform"):
        assert not hasattr(board, forbidden)


def test_board_rejects_mismatch_before_transport():
    transport = Transport()
    board = Board(transport, PARAMS_PATH.read_bytes())
    bad = {**IDENTITY.requirements(), "params_digest": "0" * 64}
    with pytest.raises(RuntimeError, match="params_digest"):
        board.run(firmware(bad))
    assert transport.calls == []


def test_connect_reads_one_profile_and_requires_injected_transport(tmp_path):
    profile = tmp_path / "board.json"
    profile.write_text('{"endpoint":"private-link"}')
    transport = Transport()
    board = Board.connect(profile, transport_factory=lambda document: transport)
    assert board.platform_identity["id"] == "rfsoc4x2-nv-1q"
    with pytest.raises(RuntimeError, match="Phase 3"):
        Board.connect(profile)
