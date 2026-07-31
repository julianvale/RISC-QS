"""Runtime identity derived from an installed RFSoC4x2 release directory."""

from __future__ import annotations

from dataclasses import dataclass
from pathlib import Path

from riscq.deployment.identity import RawConfigIdentity, raw_config_identity, sha256_bytes
from riscq.deployment.release import current_release, require_release_directory


@dataclass(frozen=True)
class PlatformContext:
    """The small amount of platform state needed by the firmware engine."""

    release_dir: Path
    raw_config: RawConfigIdentity
    bit_sha256: str
    hwh_sha256: str

    @classmethod
    def from_directory(cls, directory: str | Path) -> "PlatformContext":
        path = require_release_directory(directory)
        raw_config = raw_config_identity((path / "params.json").read_bytes())
        if (raw_config.platform_id != "rfsoc4x2-nv-1q"
                or raw_config.params.qubit_num != 1
                or raw_config.params.dsp_freq_hz != 491_520_000.0):
            raise RuntimeError("params are not the supported one-core RFSoC4x2 491.52 MHz build")
        return cls(path.resolve(), raw_config,
                   sha256_bytes((path / "platform.bit").read_bytes()),
                   sha256_bytes((path / "platform.hwh").read_bytes()))

    @classmethod
    def from_current(cls, platforms_dir: str | Path) -> "PlatformContext":
        return cls.from_directory(current_release(platforms_dir))

    @property
    def identity(self) -> dict[str, str]:
        return {
            "id": self.raw_config.platform_id,
            "version": self.release_dir.name,
            **self.raw_config.requirements(),
            "raw_params_sha256": self.raw_config.raw_sha256,
            "bit_sha256": self.bit_sha256,
            "hwh_sha256": self.hwh_sha256,
        }

    @property
    def params_json(self) -> str:
        return self.raw_config.raw_bytes.decode("utf-8")

    @property
    def params_path(self) -> Path:
        return self.release_dir / "params.json"

    @property
    def bit_path(self) -> Path:
        return self.release_dir / "platform.bit"

    @property
    def hwh_path(self) -> Path:
        return self.release_dir / "platform.hwh"

    @property
    def key(self) -> tuple[str, ...]:
        return (self.release_dir.name, *self.identity.values())
