from pathlib import Path

import pytest

from riscq.deployment.bundle import (BundleError, create_firmware_bundle,
                                     firmware_bundle_bytes, load_firmware_bundle)
from riscq.deployment.identity import raw_config_identity
from riscq.map import MEM_BASE


ROOT = Path(__file__).resolve().parents[1]
PARAMS = (ROOT / "configs" / "rfsoc4x2-nv-1q.json").read_bytes()
IDENTITY = raw_config_identity(PARAMS)
TOOLS = {name: {"path": f"/tools/{name}", "sha256": digit * 64, "version": "1.0"}
         for name, digit in (("compiler", "3"), ("objcopy", "4"), ("nm", "5"))}


def firmware_bytes():
    return firmware_bundle_bytes(
        firmware_id="echo", version="1.0.0", image=b"\0" * 8,
        symbols={"__rq_status": (MEM_BASE, 4), "__rq_magic": (MEM_BASE + 4, 4)},
        entry=MEM_BASE, requirements=IDENTITY.requirements(),
        source={"kind": "c", "sha256": "1" * 64}, runtime={"sha256": "2" * 64},
        toolchain=TOOLS)


def test_firmware_bundle_remains_deterministic_and_validated():
    assert firmware_bytes() == firmware_bytes()
    assert load_firmware_bundle(firmware_bytes()).semantic_key == ("echo", "1.0.0")
    with pytest.raises(BundleError):
        load_firmware_bundle(b"not a zip")


def test_firmware_bundle_does_not_overwrite(tmp_path):
    output = tmp_path / "echo.rqfw"
    kwargs = dict(firmware_id="echo", version="1.0.0", image=b"\0" * 8,
                  symbols={"__rq_status": (MEM_BASE, 4), "__rq_magic": (MEM_BASE + 4, 4)},
                  entry=MEM_BASE, requirements=IDENTITY.requirements(),
                  source={"kind": "c", "sha256": "1" * 64},
                  runtime={"sha256": "2" * 64}, toolchain=TOOLS)
    create_firmware_bundle(output, **kwargs)
    with pytest.raises(FileExistsError):
        create_firmware_bundle(output, **kwargs)
