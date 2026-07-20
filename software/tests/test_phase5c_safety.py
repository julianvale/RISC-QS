"""Phase 5C board-path safety checks that do not require board packages or hardware."""

from __future__ import annotations

import importlib
import sys
import types

import pytest


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
    monkeypatch.setattr(mod, "EXPECTED_BIT_SHA256", mod._sha256(bit))
    monkeypatch.setattr(mod, "EXPECTED_HWH_SHA256", mod._sha256(hwh))
    return mod.Rfsoc4x2Driver(bit, params)


def test_board_stages_are_explicit_and_phase5c_defaults_are_safe(monkeypatch, tmp_path):
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
