"""Fake-PYNQ coverage for the small RFSoC4x2 board-server backend."""

from __future__ import annotations

import importlib
import sys
import types

import pytest


def _load_driver(monkeypatch, ip_dict=None):
    events, words = [], {}

    class FakeMMIO:
        def __init__(self, base, size):
            events.append(("mmio", base, size))

        def read(self, addr):
            events.append(("read", addr))
            return words.get(addr, 0)

        def write(self, addr, value):
            events.append(("write", addr, value))
            words[addr] = value

    class FakeOverlay:
        def __init__(self, path, download):
            events.append(("overlay", path, download))
            self.rf_data_converter = object()
            self.ip_dict = ip_dict or {
                "top": {"phys_addr": 0x80000000, "addr_range": 0x10000000},
                "rf_data_converter": {"phys_addr": 0x90000000, "addr_range": 0x40000,
                                      "driver": object},
            }

        def download(self):
            events.append(("download",))

    monkeypatch.setitem(sys.modules, "pynq", types.SimpleNamespace(Overlay=FakeOverlay,
                                                                      MMIO=FakeMMIO))
    monkeypatch.setitem(sys.modules, "xrfclk", types.SimpleNamespace(
        set_ref_clks=lambda **kwargs: events.append(("clocks", kwargs))))
    monkeypatch.setitem(sys.modules, "xrfdc", types.SimpleNamespace(RFdc=object))
    sys.modules.pop("riscq.board.rfsoc4x2_driver", None)
    return importlib.import_module("riscq.board.rfsoc4x2_driver"), events


def _bundle(tmp_path):
    bit, hwh, params = tmp_path / "top.bit", tmp_path / "top.hwh", tmp_path / "params.json"
    bit.write_bytes(b"bit")
    hwh.write_bytes(b"hwh")
    params.write_text('{"name": "rfsoc4x2-nv-1q"}')
    return bit, hwh, params


def test_backend_bringup_and_word_aligned_block_transfers(monkeypatch, tmp_path):
    mod, events = _load_driver(monkeypatch)
    bit, hwh, params = _bundle(tmp_path)
    drv = mod.Rfsoc4x2Driver(bit, hwh, params, download=False)
    assert events[:3] == [("clocks", {"lmk_freq": 245.76, "lmx_freq": 491.52}),
                          ("overlay", str(bit), False),
                          ("mmio", 0x80000000, 0x10000000)]
    assert drv.mts_result is None

    drv.write_block(0x40, b"\x01\0\0\0\x02\0\0\0")
    assert drv.read_block(0x40, 7) == b"\x01\0\0\0\x02\0\0"
    assert ("write", 0x40, 1) in events and ("write", 0x44, 2) in events
    assert ("read", 0x40) in events and ("read", 0x44) in events
    with pytest.raises(ValueError, match="multiple of 4"):
        drv.write_block(0x40, b"x")
    with pytest.raises(ValueError, match="unaligned"):
        drv.read32(1)


def test_backend_rejects_mismatched_hwh_metadata(monkeypatch, tmp_path):
    mod, _ = _load_driver(monkeypatch, {
        "top": {"phys_addr": 0x80000000, "addr_range": 0x10000000},
    })
    with pytest.raises(RuntimeError, match="rf_data_converter"):
        mod.Rfsoc4x2Driver(*_bundle(tmp_path))


@pytest.mark.parametrize("method,args", [
    ("mts", ()), ("refclks", (1,)), ("adc_nyquist_zone", (1,)), ("dac_nyquist_zone", (0, 0, 1)),
    ("dacvop", (0, 0, 20_000)),
])
def test_zcu216_only_operations_fail_explicitly(monkeypatch, tmp_path, method, args):
    mod, _ = _load_driver(monkeypatch)
    with pytest.raises(NotImplementedError):
        getattr(mod.Rfsoc4x2Driver(*_bundle(tmp_path)), method)(*args)
