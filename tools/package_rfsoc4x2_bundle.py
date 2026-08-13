#!/usr/bin/env python3
"""Create a validated, checksummed RFSoC4x2 BoardServer bundle without overwriting."""

from __future__ import annotations

import argparse
import hashlib
import json
import shutil
import subprocess
import tempfile
import xml.etree.ElementTree as ET
from pathlib import Path

from riscq.map import SocParams


PLATFORM = "rfsoc4x2-nv-1q"


def sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as source:
        for block in iter(lambda: source.read(1024 * 1024), b""):
            digest.update(block)
    return digest.hexdigest()


def hwh_metadata(path: Path) -> dict[str, object]:
    root = ET.parse(path).getroot()
    system = root.find("SYSTEMINFO")
    ports = root.find("EXTERNALPORTS")
    port_names = [port.get("NAME", "") for port in ports] if ports is not None else []
    return {
        "vivado_version": root.get("VIVADOVERSION"),
        "board": system.get("BOARD") if system is not None else None,
        "device": system.get("DEVICE") if system is not None else None,
        "package": system.get("PACKAGE") if system is not None else None,
        "speed_grade": system.get("SPEEDGRADE") if system is not None else None,
        "has_laser_out": "io_laserOut_0" in port_names,
    }


def normalize_params(build_config: Path) -> tuple[str, dict[str, object], dict[str, object]]:
    raw = json.loads(build_config.read_text())
    elaboration = {"with_laser_out": bool(raw.pop("with_laser_out", False))}
    params = SocParams.from_json(json.dumps(raw))
    if params.name != PLATFORM:
        raise ValueError(f"expected platform {PLATFORM!r}, got {params.name!r}")
    normalized = params.to_json() + "\n"
    SocParams.from_json(normalized)
    return normalized, elaboration, json.loads(normalized)


def git_head(repo: Path) -> str | None:
    result = subprocess.run(
        ("git", "rev-parse", "HEAD"), cwd=repo, check=False, text=True,
        stdout=subprocess.PIPE, stderr=subprocess.DEVNULL,
    )
    return result.stdout.strip() if result.returncode == 0 else None


def package_bundle(bit: Path, hwh: Path, build_config: Path, output: Path) -> Path:
    bit = bit.resolve(strict=True)
    hwh = hwh.resolve(strict=True)
    build_config = build_config.resolve(strict=True)
    output = output.resolve()
    if output.exists():
        raise FileExistsError(f"refusing to overwrite existing bundle: {output}")

    normalized, elaboration, runtime = normalize_params(build_config)
    metadata = hwh_metadata(hwh)
    if metadata["has_laser_out"] != elaboration["with_laser_out"]:
        raise ValueError(
            "build configuration/HWH mismatch: "
            f"with_laser_out={elaboration['with_laser_out']}, "
            f"HWH io_laserOut_0={metadata['has_laser_out']}"
        )

    output.parent.mkdir(parents=True, exist_ok=True)
    staging = Path(tempfile.mkdtemp(prefix=f".{output.name}.", dir=output.parent))
    try:
        shutil.copyfile(bit, staging / "top.bit")
        shutil.copyfile(hwh, staging / "top.hwh")
        (staging / "params.json").write_text(normalized)
        artifacts = {
            name: {"sha256": sha256(staging / name), "bytes": (staging / name).stat().st_size}
            for name in ("top.bit", "top.hwh", "params.json")
        }
        build_info = {
            "schema": 1,
            "platform": PLATFORM,
            "repository_head": git_head(Path(__file__).resolve().parents[1]),
            "source": {
                "bit": str(bit),
                "hwh": str(hwh),
                "build_config": str(build_config),
                "build_config_sha256": sha256(build_config),
            },
            "elaboration": elaboration,
            "hwh": metadata,
            "runtime_parameters": runtime,
            "artifacts": artifacts,
        }
        build_info_path = staging / "build-info.json"
        build_info_path.write_text(json.dumps(build_info, indent=2, sort_keys=True) + "\n")
        checksummed = (*artifacts, "build-info.json")
        (staging / "SHA256SUMS").write_text(
            "".join(f"{sha256(staging / name)}  {name}\n" for name in checksummed)
        )
        staging.rename(output)
    except Exception:
        shutil.rmtree(staging, ignore_errors=True)
        raise
    return output


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--bit", type=Path, required=True, help="generated PulseTableSoc.bit")
    parser.add_argument("--hwh", type=Path, required=True, help="matching PulseTableSoc.hwh")
    parser.add_argument(
        "--build-config", type=Path, required=True,
        help="RTL elaboration JSON; elaboration-only keys are removed from params.json",
    )
    parser.add_argument("--output", type=Path, required=True, help="new bundle directory")
    args = parser.parse_args(argv)
    result = package_bundle(args.bit, args.hwh, args.build_config, args.output)
    print(result)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
