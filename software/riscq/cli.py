"""Host-only Phase 2 command line for deterministic bundle construction and inspection."""

from __future__ import annotations

import argparse
import json
from pathlib import Path

from riscq.build import compile_c
from riscq.deployment.bundle import (create_firmware_bundle, create_platform_bundle,
                                     inspect_bundle)
from riscq.deployment.identity import raw_config_identity
from riscq.map import SocMap


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


def parser() -> argparse.ArgumentParser:
    root = argparse.ArgumentParser(prog="riscq")
    commands = root.add_subparsers(dest="command", required=True)

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
