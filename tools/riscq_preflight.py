#!/usr/bin/env python3
"""Read-only clean-clone and toolchain checks for RISC-Q."""

from __future__ import annotations

import argparse
import importlib.util
import os
import shutil
import subprocess
import sys
from pathlib import Path


REPO = Path(__file__).resolve().parents[1]
PYTHON_IMPORTS = ("numpy", "Pyro5", "pytest", "qutip", "scipy", "yaml", "riscq")


class Report:
    def __init__(self) -> None:
        self.failures = 0

    def check(self, ok: bool, label: str, detail: str = "", *, required: bool = True) -> None:
        state = "PASS" if ok else ("FAIL" if required else "WARN")
        suffix = f" - {detail}" if detail else ""
        print(f"[{state}] {label}{suffix}")
        if not ok and required:
            self.failures += 1


def command_output(*args: str) -> tuple[bool, str]:
    try:
        result = subprocess.run(
            args, cwd=REPO, check=False, text=True, stdout=subprocess.PIPE,
            stderr=subprocess.STDOUT,
        )
    except OSError as exc:
        return False, str(exc)
    return result.returncode == 0, result.stdout.strip()


def submodule_check(report: Report) -> None:
    ok, output = command_output("git", "submodule", "status", "--recursive")
    report.check(ok, "git submodule metadata", output if not ok else "recursive status available")
    if not ok:
        return
    bad = [line for line in output.splitlines() if line.startswith(("-", "+", "U"))]
    report.check(not bad, "submodules initialized at recorded commits", "; ".join(bad))


def tool_check(report: Report, command: str, *, required: bool) -> None:
    path = shutil.which(command)
    report.check(path is not None, command, path or "not on PATH", required=required)


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--require-firmware", action="store_true",
        help="require the RISC-V LLVM compiler used by Python firmware tests",
    )
    parser.add_argument(
        "--require-hardware", action="store_true",
        help="require the Java/Mill/Vivado/board-file inputs used by RFSoC4x2 builds",
    )
    args = parser.parse_args(argv)
    report = Report()

    report.check(sys.version_info >= (3, 10), "Python >= 3.10", sys.version.split()[0])
    report.check((REPO / ".git").exists(), "repository root", str(REPO))
    tool_check(report, "git", required=True)
    submodule_check(report)

    for module in PYTHON_IMPORTS:
        report.check(
            importlib.util.find_spec(module) is not None,
            f"Python import {module}",
            f"interpreter: {sys.executable}",
        )

    tool_check(report, "riscv64-unknown-elf-clang", required=args.require_firmware)
    java = shutil.which("java")
    mill = shutil.which("mill")
    report.check(
        bool(java or mill), "Java/Mill runtime", java or mill or "neither java nor mill on PATH",
        required=args.require_hardware,
    )
    report.check(java is not None, "java", java or "Mill may bootstrap its own JDK", required=False)
    report.check(mill is not None, "mill", mill or "not on PATH", required=args.require_hardware)
    tool_check(report, "vivado", required=args.require_hardware)

    board_repo = os.environ.get("RISCQ_BOARD_REPO")
    board_xml = Path(board_repo).expanduser() / "rfsoc4x2" / "1.0" / "board.xml" \
        if board_repo else None
    report.check(
        bool(board_xml and board_xml.is_file()),
        "RFSoC4x2 board repository",
        str(board_xml) if board_xml else "set RISCQ_BOARD_REPO",
        required=args.require_hardware,
    )

    if report.failures:
        print(f"\npreflight failed: {report.failures} required check(s)")
        return 1
    print("\npreflight passed (WARN entries are optional for the selected workflow)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
