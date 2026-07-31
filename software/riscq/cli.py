"""Small host command line for firmware and RFSoC4x2 deployment."""

from __future__ import annotations

import argparse
import json
import os
import secrets
import shlex
import shutil
import subprocess
import sys
import tempfile
from importlib import resources
from pathlib import Path

from riscq.build import compile_c
from riscq.deployment.bundle import create_firmware_bundle, inspect_bundle
from riscq.deployment.identity import raw_config_identity
from riscq.deployment.release import validate_release_name
from riscq.map import SocMap


def _parse_parameters(items: list[str]) -> dict[str, int]:
    values: dict[str, int] = {}
    for item in items:
        if "=" not in item:
            raise ValueError(f"parameter must be NAME=INTEGER: {item!r}")
        name, raw = item.split("=", 1)
        if not name or not raw or name in values:
            raise ValueError(f"malformed or duplicate parameter: {item!r}")
        try:
            values[name] = int(raw, 0)
        except ValueError as exc:
            raise ValueError(f"parameter {name!r} is not a base-0 integer") from exc
    return values


def _json_result(value):
    if isinstance(value, (bytes, bytearray, memoryview)):
        return {"type": "bytes", "hex": bytes(value).hex()}
    if isinstance(value, dict):
        return {str(key): _json_result(item) for key, item in sorted(value.items(), key=lambda pair: str(pair[0]))}
    if isinstance(value, (list, tuple)):
        return {"type": "array", "hex": bytes(value).hex()} if all(
            isinstance(item, int) and 0 <= item <= 255 for item in value
        ) else [_json_result(item) for item in value]
    return value


def _firmware_run(args: argparse.Namespace) -> None:
    from riscq import Board
    result = Board.connect().run(args.bundle, parameters=_parse_parameters(args.param),
                                 results=args.result, timeout_s=args.timeout_s)
    print(json.dumps(_json_result(result), sort_keys=True, separators=(",", ":")))


def _firmware_build(args: argparse.Namespace) -> None:
    params = Path(args.params).read_bytes()
    identity = raw_config_identity(params)
    source = Path(args.source).read_text()
    image = compile_c(source, SocMap(identity.params))
    create_firmware_bundle(
        args.output, firmware_id=args.name, version=args.version, image=image.data,
        symbols=image.symbols, entry=image.entry, requirements=identity.requirements(),
        source={"kind": "c", "path": Path(args.source).name,
                "sha256": image.source_sha256},
        runtime={"sha256": image.runtime_sha256}, toolchain=image.toolchain)


def _inspect(args: argparse.Namespace) -> None:
    print(json.dumps(inspect_bundle(args.bundle), indent=2, sort_keys=True))


def _board_check_image(params: bytes):
    sw_root = Path(__file__).resolve().parent.parent
    board_check_src = sw_root / "fw" / "board_check.c"
    if not board_check_src.is_file():
        try:
            fw_pkg = resources.files("riscq.fw")
            board_check_src = Path(str(fw_pkg.joinpath("board_check.c")))
        except (AttributeError, TypeError, ImportError):
            pass
    if not board_check_src.is_file():
        raise FileNotFoundError(f"self-test source missing at {board_check_src}")
    identity = raw_config_identity(params)
    image = compile_c(board_check_src.read_text(), SocMap(identity.params))
    return sw_root, identity, image


def _release_install_guard(root: str, release: str, *, replace_release: bool) -> list[str]:
    """Return the remote guard/install commands for a named release.

    Replacement is deliberately explicit.  It is useful for retrying a failed
    provision, but must never remove the directory selected by ``current``.
    """
    remote_release = f"{root}/{release}"
    quoted_release = shlex.quote(remote_release)
    if not replace_release:
        return [
            f"test ! -e {quoted_release} && test ! -L {quoted_release} || "
            "{ echo 'release already exists; choose a new name or pass "
            "--replace-release for an inactive failed release' >&2; exit 73; }"
        ]
    return [
        f"if test -L {root}/current && test \"$(readlink -f {root}/current)\" = {quoted_release}; then "
        "echo 'refusing to replace the active release' >&2; exit 74; fi",
        f"if test -e {quoted_release} || test -L {quoted_release}; then "
        f"sudo rm -rf -- {quoted_release}; fi",
    ]


def _board_provision(args: argparse.Namespace) -> None:
    build = Path(args.build_dir).resolve(strict=True)
    params_path = Path(args.params).resolve(strict=True)
    release = validate_release_name(args.release)
    bit_path, hwh_path = build / args.bit, build / args.hwh
    ltx_path = build / args.ltx if args.ltx else None
    for path in (bit_path, hwh_path, params_path):
        if not path.is_file():
            raise FileNotFoundError(path)
    if ltx_path is not None and not ltx_path.is_file():
        raise FileNotFoundError(ltx_path)
    raw_params = params_path.read_bytes()
    identity = raw_config_identity(raw_params)
    if (identity.platform_id, identity.params.qubit_num, identity.params.dsp_freq_hz) != (
            "rfsoc4x2-nv-1q", 1, 491_520_000.0):
        raise ValueError("params are not the supported one-core RFSoC4x2 491.52 MHz build")
    sw_root, identity, image = _board_check_image(raw_params)
    ssh_target = args.ssh
    bind, port = args.bind or ssh_target.rsplit("@", 1)[-1], int(args.port)

    deployment_dir = Path(__file__).parent / "deployment"
    systemd_unit_path = deployment_dir / "riscq-board.service"
    if not systemd_unit_path.is_file():
        raise FileNotFoundError(f"missing systemd unit at {systemd_unit_path}")

    config_root = Path(os.environ.get("XDG_CONFIG_HOME", Path.home() / ".config")) / "riscq"
    profile_path = config_root / "board.json"
    old_profile: dict = {}
    if profile_path.is_file():
        try:
            value = json.loads(profile_path.read_text())
        except json.JSONDecodeError as exc:
            raise ValueError(f"existing board profile is not valid JSON: {profile_path}") from exc
        if isinstance(value, dict):
            old_profile = value
    token = old_profile.get("token")

    with tempfile.TemporaryDirectory() as tmp_dir:
        tmp = Path(tmp_dir)
        stage = tmp / release
        stage.mkdir()
        shutil.copy2(bit_path, stage / "platform.bit")
        shutil.copy2(hwh_path, stage / "platform.hwh")
        shutil.copy2(params_path, stage / "params.json")
        if ltx_path is not None:
            shutil.copy2(ltx_path, stage / "debug.ltx")

        wheel_dir = tmp / "wheel"
        wheel_dir.mkdir()
        subprocess.run([sys.executable, "-m", "pip", "wheel", "--no-deps", "-w",
                        str(wheel_dir), str(sw_root)], check=True)
        wheels = sorted(wheel_dir.glob("riscq-*.whl"))
        if len(wheels) != 1:
            raise RuntimeError(f"expected one riscq wheel, found {wheels}")
        wheel_name = wheels[0].name
        shutil.copy2(wheels[0], stage / wheel_name)

        selftest = tmp / "selftest.rqfw"
        create_firmware_bundle(
            selftest, firmware_id="selftest", version="1.0.0", image=image.data,
            symbols=image.symbols, entry=image.entry, requirements=identity.requirements(),
            source={"kind": "c", "path": "board_check.c", "sha256": image.source_sha256},
            runtime={"sha256": image.runtime_sha256}, toolchain=image.toolchain)
        service_config = tmp / "service.json"
        service_config.write_text(json.dumps({"bind": bind, "port": port},
                                              sort_keys=True, separators=(",", ":")) + "\n")

        if not token:
            probe = subprocess.run(["ssh", ssh_target, "sudo", "test", "-s", "/etc/riscq/token"],
                                   capture_output=True)
            if probe.returncode == 0:
                token = subprocess.check_output(["ssh", ssh_target, "sudo", "cat", "/etc/riscq/token"],
                                                text=True).strip()
            else:
                token = secrets.token_urlsafe(32)
        token_path = tmp / ".riscq_token"
        token_path.write_text(str(token) + "\n")

        subprocess.run(["scp", "-r", str(stage), str(selftest), str(token_path),
                        str(service_config), str(systemd_unit_path),
                        f"{ssh_target}:/tmp/"], check=True)

        root = "/opt/riscq/platforms"
        remote_release = f"{root}/{release}"
        setup = [
            "sudo mkdir -p /opt/riscq/platforms /etc/riscq /var/lib/riscq/firmware",
            *_release_install_guard(root, release, replace_release=args.replace_release),
            f"sudo mv /tmp/{shlex.quote(release)} {shlex.quote(remote_release)}",
            f"sudo chown -R root:root {shlex.quote(remote_release)}",
            f"sudo chmod 644 {shlex.quote(remote_release)}/*",
            "sudo mv /tmp/selftest.rqfw /var/lib/riscq/firmware/selftest.rqfw",
            "sudo chown root:root /var/lib/riscq/firmware/selftest.rqfw",
            "sudo chmod 644 /var/lib/riscq/firmware/selftest.rqfw",
            "if ! sudo test -e /etc/riscq/token; then sudo mv /tmp/.riscq_token /etc/riscq/token; fi",
            "sudo chown root:root /etc/riscq/token && sudo chmod 600 /etc/riscq/token",
            "if ! sudo test -e /etc/riscq/service.json || sudo grep -q '\"platform\"' /etc/riscq/service.json; then sudo mv /tmp/service.json /etc/riscq/service.json; fi",
            "sudo chown root:root /etc/riscq/service.json && sudo chmod 600 /etc/riscq/service.json",
            "sudo /usr/local/share/pynq-venv/bin/pip install --quiet --no-deps --force-reinstall "
            f"{shlex.quote(remote_release + '/' + wheel_name)}",
            "if ! sudo test -e /etc/systemd/system/riscq-board.service || "
            "! sudo grep -q 'riscq.deployment.service' /etc/systemd/system/riscq-board.service; then "
            "sudo mv /tmp/riscq-board.service /etc/systemd/system/riscq-board.service; fi",
            "sudo systemctl daemon-reload",
            f"sudo ln -s {shlex.quote(release)} {root}/.current-new && "
            f"sudo mv -Tf {root}/.current-new {root}/current",
            "sudo systemctl enable riscq-board.service",
            "sudo systemctl restart riscq-board.service",
        ]
        subprocess.run(["ssh", "-t", ssh_target, " && ".join(setup)], check=True)

    config_root.mkdir(parents=True, exist_ok=True)
    profile_path.write_text(json.dumps({"endpoint": bind, "port": port, "token": token},
                                       indent=2, sort_keys=True) + "\n")
    print(f"Release {release} activated; previous named releases remain available for rollback.")


def _board_activate(args: argparse.Namespace) -> None:
    release = validate_release_name(args.release)
    target = f"/opt/riscq/platforms/{release}"
    command = (
        f"sudo test -d {shlex.quote(target)} && set -- {shlex.quote(target)}/riscq-*.whl && "
        "test $# -eq 1 && test -f \"$1\" && "
        f"sudo /usr/local/share/pynq-venv/bin/pip install --quiet --no-deps --force-reinstall "
        "\"$1\" && "
        f"sudo ln -s {shlex.quote(release)} /opt/riscq/platforms/.current-new && "
        "sudo mv -Tf /opt/riscq/platforms/.current-new /opt/riscq/platforms/current && "
        "sudo systemctl restart riscq-board.service"
    )
    subprocess.run(["ssh", "-t", args.ssh, command], check=True)
    print(f"Activated existing release {release}; other releases were retained.")


def parser() -> argparse.ArgumentParser:
    root = argparse.ArgumentParser(prog="riscq")
    commands = root.add_subparsers(dest="command", required=True)

    board = commands.add_parser("board", help="RFSoC4x2 board administration")
    board_commands = board.add_subparsers(dest="board_command", required=True)
    provision = board_commands.add_parser("provision", help="stage and activate a named release")
    provision.add_argument("build_dir")
    provision.add_argument("--params", required=True)
    provision.add_argument("--release", required=True)
    provision.add_argument("--ssh", required=True, help="xilinx@ADDRESS")
    provision.add_argument("--bind", help="board private-link IP (defaults to --ssh host)")
    provision.add_argument("--port", type=int, default=50000)
    provision.add_argument("--bit", default="PulseTableSoc.bit")
    provision.add_argument("--hwh", default="PulseTableSoc.hwh")
    provision.add_argument("--ltx")
    provision.add_argument("--replace-release", action="store_true",
                           help="replace an existing inactive release (never current)")
    provision.set_defaults(func=_board_provision)
    activate = board_commands.add_parser("activate", help="activate an installed named release")
    activate.add_argument("--release", required=True)
    activate.add_argument("--ssh", required=True, help="xilinx@ADDRESS")
    activate.set_defaults(func=_board_activate)

    firmware = commands.add_parser("firmware", help="construct or inspect firmware bundles")
    fw_commands = firmware.add_subparsers(dest="firmware_command", required=True)
    build = fw_commands.add_parser("build", help="compile C and create a .rqfw bundle")
    build.add_argument("source")
    build.add_argument("--name", required=True)
    build.add_argument("--version", required=True)
    build.add_argument("--params", required=True)
    build.add_argument("--output", required=True)
    build.set_defaults(func=_firmware_build)
    fw_inspect = fw_commands.add_parser("inspect", help="verify and display a .rqfw manifest")
    fw_inspect.add_argument("bundle")
    fw_inspect.set_defaults(func=_inspect)
    fw_run = fw_commands.add_parser("run", help="run a firmware bundle on the default Board")
    fw_run.add_argument("bundle")
    fw_run.add_argument("--param", action="append", default=[])
    fw_run.add_argument("--result", action="append", default=[])
    fw_run.add_argument("--timeout-s", type=float, default=1.0)
    fw_run.set_defaults(func=_firmware_run)
    return root


def main(argv: list[str] | None = None) -> int:
    args = parser().parse_args(argv)
    args.func(args)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
