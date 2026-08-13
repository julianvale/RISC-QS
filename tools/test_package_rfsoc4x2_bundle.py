import hashlib
import json
import sys
import types
from pathlib import Path

import pytest

from riscq.board.server import BoardServer
from riscq.map import SocParams
from tools.package_rfsoc4x2_bundle import package_bundle


REPO = Path(__file__).resolve().parents[1]
BUILD_CONFIG = REPO / "software" / "configs" / "rfsoc4x2-nv-1q.json"


def fake_hwh(path: Path, *, laser: bool = True) -> None:
    port = '<PORT NAME="io_laserOut_0" />' if laser else ""
    path.write_text(
        '<?xml version="1.0"?><EDKSYSTEM VIVADOVERSION="2025.2">'
        '<SYSTEMINFO BOARD="realdigital.org:rfsoc4x2:part0:1.0" DEVICE="xczu48dr" '
        'PACKAGE="ffvg1517" SPEEDGRADE="-2" />'
        f"<EXTERNALPORTS>{port}</EXTERNALPORTS></EDKSYSTEM>"
    )


def test_package_normalizes_checksums_and_loads_through_board_server(tmp_path, monkeypatch):
    bit = tmp_path / "input.bit"
    hwh = tmp_path / "input.hwh"
    bit.write_bytes(b"known bitstream")
    fake_hwh(hwh)
    bundle = package_bundle(bit, hwh, BUILD_CONFIG, tmp_path / "bundle-new")

    assert sorted(path.name for path in bundle.iterdir()) == [
        "SHA256SUMS", "build-info.json", "params.json", "top.bit", "top.hwh"
    ]
    params_text = (bundle / "params.json").read_text()
    assert "with_laser_out" not in params_text
    params = SocParams.from_json(params_text)
    assert params.name == "rfsoc4x2-nv-1q"

    expected = {}
    for line in (bundle / "SHA256SUMS").read_text().splitlines():
        digest, name = line.split("  ", 1)
        expected[name] = digest
        assert hashlib.sha256((bundle / name).read_bytes()).hexdigest() == digest
    assert set(expected) == {"top.bit", "top.hwh", "params.json", "build-info.json"}

    created = []

    class FakeDriver:
        def __init__(self, bit_path, hwh_path, params_path, download=True):
            created.append((bit_path, hwh_path, params_path, download))
            self.mts_result = None

    module = types.ModuleType("riscq.board.rfsoc4x2_driver")
    module.Rfsoc4x2Driver = FakeDriver
    monkeypatch.setitem(sys.modules, "riscq.board.rfsoc4x2_driver", module)
    server = BoardServer(bits_dir=tmp_path)
    info = server.load(bundle.name, download=False)
    parsed = SocParams.from_json(server.get_params())
    assert parsed == params
    assert info["bundle"] == bundle.name
    assert created == [(str(bundle / "top.bit"), str(bundle / "top.hwh"),
                        str(bundle / "params.json"), False)]


def test_package_refuses_overwrite_and_mismatched_laser_hwh(tmp_path):
    bit = tmp_path / "input.bit"
    hwh = tmp_path / "input.hwh"
    bit.write_bytes(b"bitstream")
    fake_hwh(hwh)
    output = package_bundle(bit, hwh, BUILD_CONFIG, tmp_path / "bundle")
    with pytest.raises(FileExistsError, match="refusing to overwrite"):
        package_bundle(bit, hwh, BUILD_CONFIG, output)

    no_laser_hwh = tmp_path / "no-laser.hwh"
    fake_hwh(no_laser_hwh, laser=False)
    with pytest.raises(ValueError, match="configuration/HWH mismatch"):
        package_bundle(bit, no_laser_hwh, BUILD_CONFIG, tmp_path / "mismatch")
