from pathlib import Path

import pytest

from riscq.deployment.context import PlatformContext
from riscq.deployment.release import (ReleaseError, activate_release, current_release,
                                      release_wheel, require_release_directory, validate_release_name)
from riscq.deployment.service import RiscqBoardService


ROOT = Path(__file__).resolve().parents[1]
PARAMS = (ROOT / "configs" / "rfsoc4x2-nv-1q.json").read_bytes()


def make_release(root: Path, name: str, *, bit=b"bit", hwh=b"hwh", params=PARAMS):
    release = root / name
    release.mkdir()
    (release / "platform.bit").write_bytes(bit)
    (release / "platform.hwh").write_bytes(hwh)
    (release / "params.json").write_bytes(params)
    (release / "riscq-0.1.1-py3-none-any.whl").write_bytes(b"wheel")
    return release


def test_release_requires_plain_names_and_complete_files(tmp_path):
    with pytest.raises(ReleaseError):
        validate_release_name("../escape")
    incomplete = tmp_path / "working"
    incomplete.mkdir()
    with pytest.raises(FileNotFoundError):
        require_release_directory(incomplete, require_wheel=True)


def test_release_requires_one_validly_named_wheel(tmp_path):
    release = make_release(tmp_path, "working")
    assert release_wheel(release).name == "riscq-0.1.1-py3-none-any.whl"
    (release / "riscq.whl").write_bytes(b"not installable by pip")
    assert release_wheel(release).name == "riscq-0.1.1-py3-none-any.whl"


def test_rebuilt_artifacts_are_loaded_without_historical_hashes(tmp_path):
    release = make_release(tmp_path, "laser-test", bit=b"newly rebuilt bitstream")
    context = PlatformContext.from_directory(release)
    assert context.bit_sha256 != "5ffe224d38a1ee5e4a1d5eee8fa0988644a8e37492bba4a45c9412fc815eff0f"
    assert context.identity["id"] == "rfsoc4x2-nv-1q"


def test_service_status_publishes_the_active_raw_parameters(tmp_path):
    context = PlatformContext.from_directory(make_release(tmp_path, "working"))
    engine = type("Engine", (), {"identity": context.identity, "platform": context})()
    assert RiscqBoardService(engine).status()["params"] == PARAMS.decode()


def test_activation_is_atomic_and_preserves_previous_release(tmp_path):
    make_release(tmp_path, "working")
    make_release(tmp_path, "laser-test")
    activate_release(tmp_path, "working")
    assert current_release(tmp_path).name == "working"
    activate_release(tmp_path, "laser-test")
    assert current_release(tmp_path).name == "laser-test"
    assert (tmp_path / "working").is_dir()
    with pytest.raises(ReleaseError):
        activate_release(tmp_path, "missing")
