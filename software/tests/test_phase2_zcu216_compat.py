"""Read-only fake-module regressions for the preserved ZCU216 adapter."""

import importlib.util
import sys
import tomllib
import types
from pathlib import Path


DRIVER = Path(__file__).resolve().parents[1] / "riscq" / "board" / "pynq_driver.py"
SOFTWARE = Path(__file__).resolve().parents[1]


class Config:
    def __init__(self, latency):
        self.Latency = [latency] * 4


class Block:
    def __init__(self, log, name):
        self.log, self.name = log, name
        self._zone = None

    @property
    def NyquistZone(self):
        return self._zone

    @NyquistZone.setter
    def NyquistZone(self, value):
        self._zone = value
        self.log.append(("zone", self.name, value))

    def SetDACVOP(self, value):
        self.log.append(("vop", self.name, value))


class Tile:
    def __init__(self, log, kind, tile):
        self.blocks = [Block(log, f"{kind}{tile},{block}") for block in range(4)]


class Rfdc:
    def __init__(self, log):
        self.log = log
        self.mts_dac_config = Config(260)
        self.mts_adc_config = Config(60)
        self.dac_tiles = [Tile(log, "dac", tile) for tile in range(4)]
        self.adc_tiles = [Tile(log, "adc", tile) for tile in range(4)]

    def mts_dac(self):
        self.log.append(("mts_dac",))

    def mts_adc(self):
        self.log.append(("mts_adc",))


def load_driver(tmp_path):
    log = []
    rfdc = Rfdc(log)
    pynq = types.ModuleType("pynq")
    xrfclk = types.ModuleType("xrfclk")
    xrfdc = types.ModuleType("xrfdc")
    xrfdc.RFdc = type("RFdc", (), {})

    class Overlay:
        def __init__(self, path, download=True):
            log.append(("overlay", path, download))
            self.rf_data_converter = rfdc

    class MMIO:
        def __init__(self, base, size):
            log.append(("mmio", base, size))

    pynq.Overlay = Overlay
    pynq.MMIO = MMIO
    xrfclk.set_ref_clks = lambda **kwargs: log.append(("clocks", kwargs))
    old = {name: sys.modules.get(name) for name in ("pynq", "xrfclk", "xrfdc")}
    sys.modules.update({"pynq": pynq, "xrfclk": xrfclk, "xrfdc": xrfdc})
    try:
        spec = importlib.util.spec_from_file_location("phase2_pynq_driver", DRIVER)
        module = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(module)
    finally:
        for name, value in old.items():
            if value is None:
                sys.modules.pop(name, None)
            else:
                sys.modules[name] = value
    params = tmp_path / "params.json"
    params.write_text('{"name":"zcu216-14q"}')
    return module, params, log


def test_zcu216_defaults_and_startup_order_are_unchanged(tmp_path):
    module, params, log = load_driver(tmp_path)
    module.PynqDriver("top.xsa", str(params))
    assert module.AXI_BASE == 0x8000_0000 and module.AXI_SIZE == 0x1000_0000
    assert module.BOARD_DEFAULTS == {
        "lmk_freq": 500.25, "lmx_freq": None, "adc_nyquist": 1,
        "dac_nyquist": {"default": 2}, "dac_current": {},
        "mts": {"daclatency": 260, "adclatency": 60},
    }
    kinds = [entry[0] for entry in log]
    assert kinds.index("clocks") < kinds.index("overlay") < kinds.index("mmio")
    assert kinds.index("mmio") < kinds.index("mts_dac") < kinds.index("zone")
    assert sum(entry[0] == "zone" and entry[1].startswith("dac") for entry in log) == 16
    assert sum(entry[0] == "zone" and entry[1].startswith("adc") for entry in log) == 16


def test_zcu216_mts_opt_out_and_one_time_clocks_are_unchanged(tmp_path):
    module, params, log = load_driver(tmp_path)
    module.PynqDriver("a.xsa", str(params), board={"mts": None})
    module.PynqDriver("b.xsa", str(params), board={"mts": None})
    assert sum(entry[0] == "clocks" for entry in log) == 1
    assert not any(entry[0].startswith("mts_") for entry in log)


def test_zcu216_remote_deployment_is_explicit_and_separate():
    project = tomllib.loads((SOFTWARE / "pyproject.toml").read_text())
    assert project["project"]["scripts"]["riscq-board-server"] == "riscq.board.server:main"

    unit = (SOFTWARE / "deploy" / "riscq-rpc.service").read_text()
    assert "Legacy-compatible ZCU216" in unit
    assert "-m riscq.board.server" in unit
    assert "RISCQ_ZCU216_BIND" in unit and "RISCQ_ZCU216_BUNDLE" in unit
    assert "rfsoc4x2" not in unit.lower()
    assert "riscq.api" not in unit and "Board.connect" not in unit
