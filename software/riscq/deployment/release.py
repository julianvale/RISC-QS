"""Transparent RFSoC4x2 release directories and safe activation."""

from __future__ import annotations

import os
import re
import uuid
from pathlib import Path


class ReleaseError(ValueError):
    """A release name or directory is not safe to use."""


RELEASE_NAME = re.compile(r"^[A-Za-z0-9][A-Za-z0-9._-]{0,127}$")
REQUIRED_RELEASE_FILES = ("platform.bit", "platform.hwh", "params.json")


def release_wheel(directory: str | Path) -> Path:
    """Return the one installable RISC-Q wheel stored with a release."""
    wheels = sorted(Path(directory).glob("riscq-*.whl"))
    if len(wheels) != 1 or not wheels[0].is_file():
        raise FileNotFoundError("release must contain exactly one riscq-*.whl")
    return wheels[0]


def validate_release_name(name: str) -> str:
    if not isinstance(name, str) or not RELEASE_NAME.fullmatch(name):
        raise ReleaseError("release name must be a simple nonempty filename")
    return name


def require_release_directory(directory: str | Path, *, require_wheel: bool = False) -> Path:
    """Return a real release directory after checking its ordinary payload files."""
    path = Path(directory)
    if path.is_symlink() or not path.is_dir():
        raise ReleaseError(f"release is not a directory: {path}")
    missing = [name for name in REQUIRED_RELEASE_FILES
               if not (path / name).is_file()]
    if require_wheel:
        try:
            release_wheel(path)
        except FileNotFoundError:
            missing.append("one riscq-*.whl")
    if missing:
        raise FileNotFoundError(f"release {path} is missing: {missing}")
    return path


def activate_release(platforms_dir: str | Path, name: str) -> Path:
    """Atomically point ``current`` at an existing named release."""
    root = Path(platforms_dir)
    validate_release_name(name)
    target = root / name
    require_release_directory(target, require_wheel=True)
    root.mkdir(parents=True, exist_ok=True)
    temporary = root / f".current-{uuid.uuid4().hex}"
    try:
        temporary.symlink_to(name, target_is_directory=True)
        os.replace(temporary, root / "current")
    finally:
        if temporary.is_symlink() or temporary.exists():
            temporary.unlink()
    return root / "current"


def current_release(platforms_dir: str | Path) -> Path:
    root = Path(platforms_dir)
    current = root / "current"
    if not current.is_symlink():
        raise FileNotFoundError(f"active release symlink is missing: {current}")
    resolved = current.resolve(strict=True)
    if resolved.parent != root.resolve(strict=True):
        raise ReleaseError("active release must point to a direct child of the platforms directory")
    return require_release_directory(resolved, require_wheel=True)
