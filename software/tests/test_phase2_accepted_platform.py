"""Clean-clone identity gate for the public accepted RFSoC4x2 bundle."""

import hashlib
from pathlib import Path

from riscq.deployment.context import PlatformContext


ROOT = Path(__file__).resolve().parents[1]
PLATFORM = ROOT / "platforms" / "rfsoc4x2-nv-1q" / "1.0.0"


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def test_accepted_payloads_and_repackaged_release_are_exact(tmp_path):
    assert sha(PLATFORM / "PulseTableSoc.bit") == \
        "5ffe224d38a1ee5e4a1d5eee8fa0988644a8e37492bba4a45c9412fc815eff0f"
    assert sha(PLATFORM / "PulseTableSoc.hwh") == \
        "d3eddfd06915e1b35d62bc44316092438758224842896143856898980b47e983"
    assert sha(PLATFORM / "rfsoc4x2-nv-1q.json") == \
        "bad1e52c9c8b1417bf57b879e3c817a0a8c44ed32a71c682a92b30c4eb1d7156"
    release = tmp_path / "1.0.0"
    release.mkdir()
    (release / "platform.bit").write_bytes((PLATFORM / "PulseTableSoc.bit").read_bytes())
    (release / "platform.hwh").write_bytes((PLATFORM / "PulseTableSoc.hwh").read_bytes())
    (release / "params.json").write_bytes((PLATFORM / "rfsoc4x2-nv-1q.json").read_bytes())
    context = PlatformContext.from_directory(release)
    assert context.identity["id"] == "rfsoc4x2-nv-1q"
    assert context.release_dir.name == "1.0.0"
    assert context.bit_path.read_bytes() == (PLATFORM / "PulseTableSoc.bit").read_bytes()
    assert context.hwh_path.read_bytes() == (PLATFORM / "PulseTableSoc.hwh").read_bytes()
    assert context.params_path.read_bytes() == (PLATFORM / "rfsoc4x2-nv-1q.json").read_bytes()
