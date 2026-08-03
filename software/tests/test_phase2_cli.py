import json
from pathlib import Path

import pytest

from riscq.cli import _release_install_guard, main, parser
from riscq.deployment.bundle import load_firmware_bundle


ROOT = Path(__file__).resolve().parents[1]
PARAMS = ROOT / "configs" / "rfsoc4x2-nv-1q.json"


def test_host_only_firmware_build_and_inspect(tmp_path, capsys):
    source = tmp_path / "experiment.c"
    source.write_text('#include "riscq.h"\nvolatile int32_t answer;\nint main(void){answer=7;return 0;}\n')
    output = tmp_path / "experiment.rqfw"
    assert main(["firmware", "build", str(source), "--name", "experiment",
                 "--version", "1.0.0", "--params", str(PARAMS),
                 "--output", str(output)]) == 0
    assert load_firmware_bundle(output).semantic_key == ("experiment", "1.0.0")
    assert main(["firmware", "inspect", str(output)]) == 0
    assert '"format": "riscq-firmware-v1"' in capsys.readouterr().out
    with pytest.raises(FileExistsError, match="overwrite"):
        main(["firmware", "build", str(source), "--name", "experiment",
              "--version", "1.0.0", "--params", str(PARAMS),
              "--output", str(output)])


def test_platform_bundle_commands_are_retired():
    with pytest.raises(SystemExit):
        main(["platform", "package"])


def test_board_provision_takes_build_and_params_directly():
    args = parser().parse_args(["board", "provision", "vivado-build", "--params", "params.json",
                                "--release", "laser-test", "--ssh", "xilinx@board"])
    assert args.build_dir == "vivado-build"
    assert args.params == "params.json"
    assert args.release == "laser-test"
    assert not args.replace_release


def test_board_provision_can_explicitly_replace_only_an_inactive_release():
    args = parser().parse_args(["board", "provision", "vivado-build", "--params", "params.json",
                                "--release", "laser-test", "--replace-release", "--ssh", "xilinx@board"])
    assert args.replace_release

    normal_guard = _release_install_guard("/opt/riscq/platforms", "laser-test", replace_release=False)
    assert "release already exists" in normal_guard[0]
    assert "rm -rf" not in normal_guard[0]

    replace_guard = _release_install_guard("/opt/riscq/platforms", "laser-test", replace_release=True)
    assert "refusing to replace the active release" in replace_guard[0]
    assert replace_guard[1] == "if test -e /opt/riscq/platforms/laser-test || test -L /opt/riscq/platforms/laser-test; then sudo rm -rf -- /opt/riscq/platforms/laser-test; fi"
