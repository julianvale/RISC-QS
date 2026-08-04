"""H1 acceptance (spec 10 §8): BoardServer + RemoteDriver + bundle store, end-to-end over a
real Pyro5 daemon on loopback with a RAM-dict fake driver — the full client→serpent→server wire
path, no hardware. Covers the 4-op round-trip (serpent bytes-dict unwrap both directions), the
get_params→SocMap handshake, the chunked store (bit-exact reassembly + sha reject), loud load()
on a missing bundle, and the remote_setup same-build params guard."""

from __future__ import annotations

import dataclasses
import hashlib
import os
import sys
import threading
import types
from pathlib import Path

import Pyro5.api
import pytest

from riscq.board.server import BoardServer
from riscq.driver.remote import RemoteDriver, upload_bundle, upload_rfsoc4x2_bundle
from riscq.map import SocMap, SocParams
from riscq import run as rq

CONFIGS = Path(__file__).resolve().parents[1] / "configs"
PARAMS_TEXT = (CONFIGS / "sim-2q.json").read_text()


class RamDriver:
    """RAM-dict fake of the 4-method Driver: a word-addressed {addr: uint32} dict."""

    def __init__(self):
        self.mem = {}

    def read32(self, addr):
        return self.mem.get(addr, 0)

    def write32(self, addr, value):
        self.mem[addr] = value & 0xFFFFFFFF

    def read_block(self, addr, nbytes):
        words = b"".join(self.mem.get(addr + i, 0).to_bytes(4, "little")
                         for i in range(0, nbytes + 3, 4))
        return words[:nbytes]

    def write_block(self, addr, data):
        data = bytes(data)
        assert len(data) % 4 == 0
        for i in range(0, len(data), 4):
            self.mem[addr + i] = int.from_bytes(data[i:i + 4], "little")


@pytest.fixture
def board(tmp_path):
    """(RemoteDriver, BoardServer, RamDriver, bits_dir) — daemon on an OS-picked loopback port."""
    fake = RamDriver()
    bits = tmp_path / "bits"
    srv = BoardServer(bits_dir=bits, driver=fake, params_text=PARAMS_TEXT)
    daemon = Pyro5.api.Daemon(host="127.0.0.1")
    uri = daemon.register(srv, objectId="riscq.board")
    thread = threading.Thread(target=daemon.requestLoop, daemon=True)
    thread.start()
    drv = RemoteDriver(str(uri))
    yield drv, srv, fake, bits
    drv.close()
    daemon.shutdown()
    thread.join(timeout=5)
    daemon.close()


def test_ops_round_trip(board):
    """All 4 Driver ops cross the wire 1:1, including the serpent bytes-dict unwrap in BOTH
    directions (client block-write payload up, server block-read bytes down)."""
    drv, _, fake, _ = board
    drv.write32(0x100, 0xDEADBEEF)
    assert drv.read32(0x100) == 0xDEADBEEF
    assert fake.mem[0x100] == 0xDEADBEEF

    blob = bytes(range(256)) * 4                       # 1 KB, all byte values
    drv.write_block(0x2000, blob)
    assert drv.read_block(0x2000, len(blob)) == blob
    assert isinstance(drv.read_block(0x2000, 8), bytes)


def test_get_params_handshake(board):
    """drv.board.get_params() yields the loaded build's JSON — the client derives the matching
    SocMap with no version side channel."""
    drv, _, _, _ = board
    m = SocMap(SocParams.from_json(drv.board.get_params()))
    assert m.params == SocParams.from_json(PARAMS_TEXT)
    info = drv.board.info()
    assert info["bundle"] is None and info["mts_result"] is None   # fake: nothing loaded


def test_store_chunked_upload(board):
    """upload_bundle chunks a multi-chunk file up; the store reassembles it bit-exact and
    bundles() lists it."""
    drv, _, _, bits = board
    xsa_data = os.urandom(9_000_000)                   # > 2 chunks at 4 MB
    xsa_file, params_file = bits.parent / "top.xsa", bits.parent / "params.json"
    xsa_file.write_bytes(xsa_data)
    params_file.write_text(PARAMS_TEXT)

    upload_bundle(drv, "b1", xsa_file, params_file, board={"adc_nyquist": 2})

    assert drv.board.bundles() == {"b1": ["board.json", "params.json", "top.xsa"]}
    assert (bits / "b1" / "top.xsa").read_bytes() == xsa_data
    assert (bits / "b1" / "params.json").read_text() == PARAMS_TEXT
    assert b'"adc_nyquist": 2' in (bits / "b1" / "board.json").read_bytes()


def test_rfsoc4x2_upload_and_load_selects_bit_hwh_backend(board, monkeypatch):
    """The exact RFSoC4x2 name selects its three native artifacts, not the XSA path."""
    drv, srv, _, bits = board
    bit, hwh, params = (bits.parent / "top.bit", bits.parent / "top.hwh",
                        bits.parent / "params.json")
    bit.write_bytes(b"rfsoc bit")
    hwh.write_bytes(b"rfsoc hwh")
    rfsoc_params = (CONFIGS / "rfsoc4x2-nv-1q.json").read_text()
    params.write_text(rfsoc_params)
    upload_rfsoc4x2_bundle(drv, "rfsoc", bit, hwh, params)
    assert drv.board.bundles() == {"rfsoc": ["params.json", "top.bit", "top.hwh"]}

    created = []

    class FakeRfsoc4x2Driver(RamDriver):
        def __init__(self, bit_path, hwh_path, params_path, download=True):
            super().__init__()
            created.append((bit_path, hwh_path, params_path, download))
            self.mts_result = None

    fake_module = types.ModuleType("riscq.board.rfsoc4x2_driver")
    fake_module.Rfsoc4x2Driver = FakeRfsoc4x2Driver
    monkeypatch.setitem(sys.modules, "riscq.board.rfsoc4x2_driver", fake_module)
    info = drv.board.load("rfsoc", download=False)
    assert created == [(str(bits / "rfsoc" / "top.bit"), str(bits / "rfsoc" / "top.hwh"),
                        str(bits / "rfsoc" / "params.json"), False)]
    assert info["bundle"] == "rfsoc"
    assert info["xsa_sha"] == hashlib.sha256((bits / "rfsoc" / "top.bit").read_bytes()).hexdigest()
    assert drv.board.get_params() == rfsoc_params

    # The ordinary four-method RemoteDriver face works after the RFSoC4x2 load.
    drv.write_block(0x100, b"\x01\0\0\0\x02\0\0\0")
    assert drv.read_block(0x100, 8) == b"\x01\0\0\0\x02\0\0\0"
    assert srv._drv.mem[0x100] == 1 and srv._drv.mem[0x104] == 2


def test_non_rfsoc4x2_bundle_keeps_original_xsa_pynq_selection(board, monkeypatch):
    """Only the exact RFSoC4x2 platform name changes the established ZCU216 load path."""
    drv, _, _, bits = board
    xsa, params = bits.parent / "top.xsa", bits.parent / "params.json"
    xsa.write_bytes(b"zcu xsa")
    params.write_text(PARAMS_TEXT)
    upload_bundle(drv, "zcu", xsa, params, board={"mts": None})
    created = []

    class FakePynqDriver(RamDriver):
        def __init__(self, xsa_path, params_path, board=None, download=True):
            super().__init__()
            created.append((xsa_path, params_path, board, download))
            self.mts_result = None

    fake_module = types.ModuleType("riscq.board.pynq_driver")
    fake_module.PynqDriver = FakePynqDriver
    monkeypatch.setitem(sys.modules, "riscq.board.pynq_driver", fake_module)
    info = drv.board.load("zcu")
    assert created == [(str(bits / "zcu" / "top.xsa"), str(bits / "zcu" / "params.json"),
                        {"mts": None}, True)]
    assert info["xsa_sha"] == hashlib.sha256((bits / "zcu" / "top.xsa").read_bytes()).hexdigest()


def test_remote_block_calls_do_not_degenerate_into_register_rpcs():
    """RemoteDriver sends one block RPC; it never loops through read32/write32 client-side."""
    calls = []

    class RecordingProxy:
        def write_block(self, addr, data):
            calls.append(("write_block", addr, bytes(data)))

        def read_block(self, addr, nbytes):
            calls.append(("read_block", addr, nbytes))
            return b"\x05\0\0\0"[:nbytes]

        def __getattr__(self, name):
            raise AssertionError(f"unexpected client-side RPC: {name}")

    drv = object.__new__(RemoteDriver)
    drv._proxy = RecordingProxy()
    drv.write_block(0x300, b"\x03\0\0\0\x04\0\0\0")
    assert drv.read_block(0x304, 4) == b"\x05\0\0\0"
    assert calls == [("write_block", 0x300, b"\x03\0\0\0\x04\0\0\0"),
                     ("read_block", 0x304, 4)]


def test_store_rejects_corrupt_sha(board):
    """A sha/size mismatch fails loud at store_end and leaves NO file (partial or final)."""
    drv, _, _, bits = board
    data = os.urandom(1024)
    drv._proxy.store_begin("bad", "top.xsa", len(data), hashlib.sha256(data).hexdigest())
    drv._proxy.store_chunk(data[:512] + bytes(512))    # corrupt second half
    with pytest.raises(Exception, match="corrupt"):
        drv._proxy.store_end()
    assert not (bits / "bad" / "top.xsa").exists()
    assert not (bits / "bad" / "top.xsa.part").exists()


def test_load_missing_bundle_fails_loud(board):
    drv, _, _, _ = board
    with pytest.raises(Exception, match="missing"):
        drv.board.load("nonexistent")


def test_remote_setup_params_guard(board):
    """The same-build check: a client whose SocParams differ from the loaded bundle's is
    rejected before anything touches the driver; a matching client passes (empty progmap
    parks every core in the fake RAM — run.setup really ran server-side)."""
    drv, _, fake, _ = board
    other = dataclasses.replace(SocParams.from_json(PARAMS_TEXT), qubit_num=14)
    with pytest.raises(Exception, match="wrong bundle"):
        drv.remote.setup(other.to_json(), {})
    assert fake.mem == {}                              # rejected before any driver op

    m = SocMap(SocParams.from_json(PARAMS_TEXT))
    rq.setup(drv, m, {})                               # routes via drv.remote (unconditional)
    park = {m.imem(core) for core in range(m.params.qubit_num)}
    assert {a for a, v in fake.mem.items() if v == 0x6F} >= park
