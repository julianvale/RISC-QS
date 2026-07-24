"""Host-only Phase 2 command line for deterministic bundle construction and inspection."""

from __future__ import annotations

import argparse
import json
from pathlib import Path

import os
import secrets
import subprocess
import tempfile
import sys
import zipfile
import shlex
from importlib import resources

from riscq.build import compile_c
from riscq.deployment.bundle import (create_firmware_bundle, create_platform_bundle,
                                     inspect_bundle, load_platform_bundle)
from riscq.deployment.identity import raw_config_identity
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
        args.output,
        firmware_id=args.name,
        version=args.version,
        image=image.data,
        symbols=image.symbols,
        entry=image.entry,
        requirements=identity.requirements(),
        source={"kind": "c", "path": Path(args.source).name,
                "sha256": image.source_sha256},
        runtime={"sha256": image.runtime_sha256},
        toolchain=image.toolchain,
    )


def _platform_package(args: argparse.Namespace) -> None:
    build = Path(args.build_dir)
    bit = build / args.bit
    hwh = build / args.hwh
    params = Path(args.params)
    identity = raw_config_identity(params.read_bytes())
    metadata = json.loads(Path(args.metadata).read_text())
    if not isinstance(metadata, dict):
        raise ValueError("platform metadata must be an object")
    required = {"clocks", "hwh_ranges", "device", "board_part", "source_commit", "vivado"}
    if set(metadata) != required:
        raise ValueError(f"platform metadata keys must be exactly {sorted(required)}")
    kwargs = dict(
        platform_id=identity.platform_id,
        version=args.version,
        bit=bit.read_bytes(),
        hwh=hwh.read_bytes(),
        params=params.read_bytes(),
        **metadata,
    )
    ltx = build / args.ltx if args.ltx else None
    if ltx is not None:
        kwargs["ltx"] = ltx.read_bytes()
    create_platform_bundle(args.output, **kwargs)


def _inspect(args: argparse.Namespace) -> None:
    print(json.dumps(inspect_bundle(args.bundle), indent=2, sort_keys=True))


def _board_provision(args: argparse.Namespace) -> None:
    platform_path = Path(args.platform).resolve(strict=True)
    ssh_target = args.ssh
    verified_platform = load_platform_bundle(platform_path)
    bind = args.bind or ssh_target.rsplit("@", 1)[-1]
    port = int(args.port)

    # Locate board_check.c 
    sw_root = Path(__file__).resolve().parent.parent
    board_check_src = sw_root / "fw" / "board_check.c"
    if not board_check_src.is_file():
        try:
            fw_pkg = resources.files("riscq.fw")
            board_check_src = Path(str(fw_pkg.joinpath("board_check.c")))
        except (AttributeError, TypeError, ImportError):
            pass

    if not board_check_src.is_file():
        raise FileNotFoundError(f"Self-test source missing at {board_check_src}")
        
    print("Building board_check self-test bundle...")

    raw_params = verified_platform.files["params.json"]
    
    identity = raw_config_identity(raw_params)
    image = compile_c(board_check_src.read_text(), SocMap(identity.params))
    
    endpoint = ssh_target.split("@")[-1] if "@" in ssh_target else ssh_target
    
    try:
        deployment_pkg = resources.files("riscq.deployment")
        service_py_path = Path(str(deployment_pkg.joinpath("service.py")))
        systemd_unit_path = Path(str(deployment_pkg.joinpath("riscq-board.service")))
    except (AttributeError, TypeError, ImportError):
        deployment_dir = Path(__file__).parent / "deployment"
        service_py_path = deployment_dir / "service.py"
        systemd_unit_path = deployment_dir / "riscq-board.service"

    if not service_py_path.is_file() or not systemd_unit_path.is_file():
        raise FileNotFoundError("Missing service assets in riscq.deployment package.")

    token = secrets.token_urlsafe(32)
    
    config_dir = Path(os.environ.get("XDG_CONFIG_HOME", Path.home() / ".config")) / "riscq"
    config_dir.mkdir(parents=True, exist_ok=True)
    
    params_dest = config_dir / "params.json"
    profile_path = config_dir / "board.json"
    for local_path in (params_dest, profile_path):
        if local_path.exists() and not args.replace:
            raise FileExistsError(f"refusing to overwrite {local_path}; use --replace")
    print(f"Extracting raw params to {params_dest}...")
    params_dest.write_bytes(raw_params)
    
    print(f"Provisioning {endpoint} with {platform_path.name}...")
    
    with tempfile.TemporaryDirectory() as tmp_dir:
        tmp_path = Path(tmp_dir)
        
        token_path = tmp_path / ".riscq_token"
        token_path.write_text(token)
        
        selftest_bundle_path = tmp_path / "selftest.rqfw"
        create_firmware_bundle(
            selftest_bundle_path,
            firmware_id="selftest",
            version="1.0.0",
            image=image.data,
            symbols=image.symbols,
            entry=image.entry,
            requirements=identity.requirements(),
            source={"kind": "c", "path": "board_check.c", "sha256": image.source_sha256},
            runtime={"sha256": image.runtime_sha256},
            toolchain=image.toolchain,
        )
        service_config_path = tmp_path / "service.json"
        service_config_path.write_text(json.dumps(
            {"platform": platform_path.name, "bind": bind, "port": port},
            sort_keys=True, separators=(",", ":")
        ) + "\n")

        # Build local riscq wheel and download dependencies into a single offline wheels dir
        print("Packaging riscq and downloading dependencies (Pyro5, serpent) on host...")
        wheels_dir = tmp_path / "wheels"
        wheels_dir.mkdir()
        
        subprocess.run(
            [sys.executable, "-m", "pip", "download", "-d", str(wheels_dir), "Pyro5", "serpent"], 
            check=True
        )
        subprocess.run(
            [sys.executable, "-m", "pip", "wheel", "--no-deps", "-w", str(wheels_dir), str(sw_root)], 
            check=True
        )

        print("Transferring all assets via a single scp batch...")
        scp_args = [
            "scp", "-r",
            str(platform_path),
            str(token_path),
            str(service_py_path),
            str(systemd_unit_path),
            str(selftest_bundle_path),
            str(service_config_path),
            str(wheels_dir),
            f"{ssh_target}:/tmp/"
        ]
        subprocess.run(scp_args, check=True)
            
        print("Configuring remote board and installing root service (enter remote sudo password if prompted)...")
        remote_files = [
            f"/opt/riscq/platforms/{platform_path.name}",
            "/var/lib/riscq/firmware/selftest.rqfw", "/etc/riscq/token",
            "/etc/riscq/service.json", "/opt/riscq/service.py",
            "/etc/systemd/system/riscq-board.service",
        ]
        setup_cmds = [
            "sudo mkdir -p /opt/riscq/platforms /etc/riscq /var/lib/riscq/firmware",
            "sudo chown root:root /opt/riscq/platforms /etc/riscq /var/lib/riscq/firmware",
            "sudo chmod 700 /etc/riscq",
            
            # Install completely offline from the transferred wheels directory
            "sudo /usr/local/share/pynq-venv/bin/pip install --quiet --no-index --force-reinstall --no-deps --find-links=/tmp/wheels riscq",
            "sudo /usr/local/share/pynq-venv/bin/pip install --quiet --no-index --find-links=/tmp/wheels Pyro5 serpent",
            "sudo rm -rf /tmp/wheels",

            "sudo BOARD=RFSoC4x2 /usr/local/share/pynq-venv/bin/python3 -c 'import riscq, Pyro5, serpent, pynq, xrfclk, xrfdc; print(\"ENV_OK\")'",

            *( [] if args.replace else [
                "for path in " + " ".join(shlex.quote(path) for path in remote_files)
                + "; do test ! -e \"$path\" || { echo \"already exists: $path\" >&2; exit 73; }; done"
            ]),
            f"sudo mv /tmp/{platform_path.name} /opt/riscq/platforms/",
            f"sudo chown root:root /opt/riscq/platforms/{platform_path.name}",
            f"sudo chmod 644 /opt/riscq/platforms/{platform_path.name}",
            
            "sudo mv /tmp/selftest.rqfw /var/lib/riscq/firmware/selftest.rqfw",
            "sudo chown root:root /var/lib/riscq/firmware/selftest.rqfw",
            "sudo chmod 644 /var/lib/riscq/firmware/selftest.rqfw",
            
            "sudo mv /tmp/.riscq_token /etc/riscq/token",
            "sudo chown root:root /etc/riscq/token",
            "sudo chmod 600 /etc/riscq/token",
            
            "sudo mv /tmp/service.py /opt/riscq/service.py",
            "sudo chown root:root /opt/riscq/service.py",
            "sudo chmod 644 /opt/riscq/service.py",
            
            "sudo mv /tmp/riscq-board.service /etc/systemd/system/",
            "sudo chown root:root /etc/systemd/system/riscq-board.service",
            "sudo chmod 644 /etc/systemd/system/riscq-board.service",
            "sudo mv /tmp/service.json /etc/riscq/service.json",
            "sudo chown root:root /etc/riscq/service.json",
            "sudo chmod 600 /etc/riscq/service.json",
            "sudo systemctl daemon-reload",
            "sudo systemctl enable riscq-board.service",
            "sudo systemctl restart riscq-board.service"
        ]
        
        subprocess.run(["ssh", "-t", ssh_target, " && ".join(setup_cmds)], check=True)
    
    profile = {
        "endpoint": bind,
        "port": port,
        "token": token,
        "params": str(params_dest)
    }
    profile_path.write_text(json.dumps(profile, indent=2, sort_keys=True) + "\n")
    params_dest.write_bytes(raw_params)
    
    print(f"Provisioning complete! Daemon active on board and local profile saved to {profile_path}")

def parser() -> argparse.ArgumentParser:
    root = argparse.ArgumentParser(prog="riscq")
    commands = root.add_subparsers(dest="command", required=True)

    board = commands.add_parser("board", help="board administration")
    board_commands = board.add_subparsers(dest="board_command", required=True)
    provision = board_commands.add_parser("provision", help="provision a board with a platform")
    provision.add_argument("--ssh", required=True, help="xilinx@ADDRESS")
    provision.add_argument("--platform", required=True, help="FILE.rqplatform")
    provision.add_argument("--bind", help="board private-link IP (defaults to --ssh host)")
    provision.add_argument("--port", type=int, default=50000)
    provision.add_argument("--replace", action="store_true",
                           help="explicitly replace an existing installation")
    provision.set_defaults(func=_board_provision)

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
    fw_run.add_argument("--param", action="append", default=[],
                        help="repeatable NAME=INTEGER parameter (Python base-0 syntax)")
    fw_run.add_argument("--result", action="append", default=[],
                        help="repeatable result symbol")
    fw_run.add_argument("--timeout-s", type=float, default=1.0)
    fw_run.set_defaults(func=_firmware_run)

    platform = commands.add_parser("platform", help="package or inspect platform bundles")
    platform_commands = platform.add_subparsers(dest="platform_command", required=True)
    package = platform_commands.add_parser("package", help="create a .rqplatform bundle")
    package.add_argument("build_dir")
    package.add_argument("--params", required=True)
    package.add_argument("--version", required=True)
    package.add_argument("--metadata", required=True)
    package.add_argument("--bit", default="PulseTableSoc.bit")
    package.add_argument("--hwh", default="PulseTableSoc.hwh")
    package.add_argument("--ltx")
    package.add_argument("--output", required=True)
    package.set_defaults(func=_platform_package)
    platform_inspect = platform_commands.add_parser(
        "inspect", help="verify and display a .rqplatform manifest")
    platform_inspect.add_argument("bundle")
    platform_inspect.set_defaults(func=_inspect)
    return root


def main(argv: list[str] | None = None) -> int:
    args = parser().parse_args(argv)
    args.func(args)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
