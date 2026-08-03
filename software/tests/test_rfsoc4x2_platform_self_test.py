"""RFSoC4x2 platform self-test and adapter checks that require no board hardware."""

from __future__ import annotations

import importlib
import hashlib
import json
import sys
import types
from pathlib import Path

import pytest
from riscq.board.rfsoc4x2_validation import validate_symbol_layout
from riscq.build import compile_c
from riscq.map import SocMap, SocParams


REPO = Path(__file__).resolve().parents[2]
PARAMS = REPO / "software" / "configs" / "rfsoc4x2-nv-1q.json"
SOURCE = REPO / "software" / "fw" / "board_check.c"


def _load_pynq_driver(monkeypatch, ip_dict=None):
    events = []

    class FakeRFdc:
        pass

    class FakeOverlay:
        def __init__(self, path, download):
            events.append(("overlay", path, download))
            self.ip_dict = ip_dict or {
                "top": {"phys_addr": 0x80000000, "addr_range": 0x10000000},
                "rf_data_converter": {"phys_addr": 0x90000000, "addr_range": 0x40000,
                                      "driver": FakeRFdc},
            }
            self.downloaded = False

        @property
        def rf_data_converter(self):
            events.append(("rfdc_construct", self.downloaded))
            if not self.downloaded:
                raise AssertionError("RFDC was constructed before overlay download")
            return object()

        def download(self):
            events.append(("download",))
            self.downloaded = True

    pynq = types.SimpleNamespace(
        Overlay=FakeOverlay,
        MMIO=lambda base, size: events.append(("mmio", base, size)) or object(),
    )
    xrfclk = types.SimpleNamespace(
        set_ref_clks=lambda **kw: events.append(("clocks", kw)),
    )
    monkeypatch.setitem(sys.modules, "pynq", pynq)
    monkeypatch.setitem(sys.modules, "xrfclk", xrfclk)
    monkeypatch.setitem(sys.modules, "xrfdc", types.SimpleNamespace(RFdc=FakeRFdc))
    sys.modules.pop("riscq.board.rfsoc4x2_driver", None)
    mod = importlib.import_module("riscq.board.rfsoc4x2_driver")
    return mod, events


def _bundle(mod, monkeypatch, tmp_path):
    bit = tmp_path / "PulseTableSoc.bit"
    hwh = tmp_path / "PulseTableSoc.hwh"
    params = tmp_path / "params.json"
    bit.write_bytes(b"test bit")
    hwh.write_bytes(b"test hwh")
    params.write_text((__import__("pathlib").Path(__file__).parents[1] / "configs" /
                       "rfsoc4x2-nv-1q.json").read_text())
    return mod.Rfsoc4x2Driver(bit, params)


def test_rebuilt_platform_files_are_accepted(monkeypatch, tmp_path):
    mod, _ = _load_pynq_driver(monkeypatch)
    drv = _bundle(mod, monkeypatch, tmp_path)
    assert drv.hashes[drv.bit_path.name] == mod._sha256(drv.bit_path)
    assert drv.hashes[drv.hwh_path.name] == mod._sha256(drv.hwh_path)
    assert drv.hashes[drv.params_path.name] == mod._sha256(drv.params_path)


def test_board_stages_are_explicit_and_defaults_are_safe(monkeypatch, tmp_path):
    mod, events = _load_pynq_driver(monkeypatch)
    drv = _bundle(mod, monkeypatch, tmp_path)

    assert events == []
    with pytest.raises(RuntimeError, match="program_clocks"):
        drv.load_overlay()

    drv.program_clocks()
    drv.load_overlay()
    drv.open_mmio()
    assert events == [
        ("clocks", {"lmk_freq": 245.76, "lmx_freq": 491.52}),
        ("overlay", str(tmp_path / "PulseTableSoc.bit"), False),
        ("download",),
        ("rfdc_construct", True),
        ("mmio", 0x80000000, 0x10000000),
    ]
    assert all(drv.stages.values())


def test_raw_parameter_change_is_rejected_before_normalization(monkeypatch, tmp_path):
    mod, events = _load_pynq_driver(monkeypatch)
    bit = tmp_path / "PulseTableSoc.bit"
    hwh = tmp_path / "PulseTableSoc.hwh"
    params = tmp_path / "params.json"
    bit.write_bytes(b"test bit")
    hwh.write_bytes(b"test hwh")
    raw = json.loads(PARAMS.read_text())
    raw["dac_map"] = [[1, 0]]
    params.write_text(json.dumps(raw))
    drv = mod.Rfsoc4x2Driver(bit, params)
    assert drv.raw_identity.raw_sha256 == mod._sha256(params)
    assert events == []


def test_overlay_address_mismatch_stops_before_mmio(monkeypatch, tmp_path):
    bad = {
        "top": {"phys_addr": 0x81000000, "addr_range": 0x10000000},
        "rf_data_converter": {"phys_addr": 0x90000000, "addr_range": 0x40000},
    }
    mod, events = _load_pynq_driver(monkeypatch, bad)
    drv = _bundle(mod, monkeypatch, tmp_path)
    drv.program_clocks()
    with pytest.raises(RuntimeError, match="range"):
        drv.load_overlay()
    assert not any(event[0] == "mmio" for event in events)


def test_overlay_driver_mismatch_stops_before_download(monkeypatch, tmp_path):
    bad = {
        "top": {"phys_addr": 0x80000000, "addr_range": 0x10000000},
        "rf_data_converter": {"phys_addr": 0x90000000, "addr_range": 0x40000,
                              "driver": object},
    }
    mod, events = _load_pynq_driver(monkeypatch, bad)
    drv = _bundle(mod, monkeypatch, tmp_path)
    drv.program_clocks()
    with pytest.raises(RuntimeError, match="RFDC driver"):
        drv.load_overlay()
    assert ("download",) not in events


def test_rerun_reasserts_reset_when_poll_times_out(monkeypatch):
    # run.py only needs serpent for remote serialization; this local safety test does not.
    monkeypatch.setitem(sys.modules, "serpent", types.SimpleNamespace(tobytes=bytes))
    from riscq import run as rq

    resets = []
    monkeypatch.setattr(rq, "check_magic", lambda *args: None)
    monkeypatch.setattr(rq, "write_var", lambda *args: None)
    monkeypatch.setattr(rq, "write_params", lambda *args, **kwargs: None)
    monkeypatch.setattr(rq, "poll_done", lambda *args, **kwargs: (_ for _ in ()).throw(
        TimeoutError("expected timeout")))
    monkeypatch.setattr(rq, "reset", lambda drv, m, on: resets.append(on))
    prog = types.SimpleNamespace(arrays={})

    with pytest.raises(TimeoutError, match="expected timeout"):
        rq.rerun(object(), object(), {0: prog}, timeout=1)
    assert resets == [False, True]


def test_direct_driver_rejects_unaligned_images_and_recovers_release_failure(
        monkeypatch, tmp_path):
    mod, _ = _load_pynq_driver(monkeypatch)
    drv = object.__new__(mod.Rfsoc4x2Driver)
    drv.reset_held = True
    drv.map = types.SimpleNamespace(mem_bytes=16, imem=lambda _core: 0)
    drv.write32 = lambda *_args: None
    drv.read32 = lambda _offset: 0

    image = tmp_path / "image.bin"
    image.write_bytes(b"abc")
    with pytest.raises(ValueError, match="word aligned"):
        drv.load_image(image)
    image.write_bytes(b"\0" * 4)
    with pytest.raises(ValueError, match="offset"):
        drv.load_image(image, offset=1)

    resets = []
    drv.read32 = lambda _offset: 0

    def release():
        drv.reset_held = False
        raise RuntimeError("release failed after mutation")

    def hold():
        drv.reset_held = True
        resets.append(True)

    drv.reset_release = release
    drv.reset_hold = hold
    with pytest.raises(RuntimeError, match="release failed"):
        drv.run_until(0, 1, 1, 0.01)
    assert drv.reset_held is True and resets == [True]


def test_legacy_poll_has_an_independent_wall_clock_deadline(monkeypatch):
    monkeypatch.setitem(sys.modules, "serpent", types.SimpleNamespace(tobytes=bytes))
    from riscq import run as rq

    clock = iter((0.0, 0.0, 0.02))
    monkeypatch.setattr(rq._time, "monotonic", lambda: next(clock))
    monkeypatch.setattr(rq._time, "sleep", lambda _delay: None)
    drv = types.SimpleNamespace(read32=lambda _addr: 0)
    soc_map = types.SimpleNamespace(to_host_addr=lambda _core, addr: addr)
    program = types.SimpleNamespace(var_addr=lambda _name: 0)
    with pytest.raises(TimeoutError, match="wall-clock"):
        rq.poll_done(drv, soc_map, 0, program, timeout=1000, timeout_s=0.01)


def test_platform_self_test_image_and_symbols_are_exact():
    image = compile_c(SOURCE.read_text(), SocMap(SocParams.load(PARAMS)))
    assert len(image.data) == 520
    assert hashlib.sha256(image.data).hexdigest() == \
        "837fb7d9532c1b239268cf8d6014cd03eb37e54ddf231b20d08785f918c824a5"
    expected = {
        "__rq_status": 0x80000200,
        "__rq_magic": 0x80000204,
        "board_check_result": 0x80000208,
    }
    assert validate_symbol_layout(image.symbols, expected) == expected
