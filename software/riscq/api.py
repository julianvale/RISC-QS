"""Small public host facade over compile, bundle, status, and bounded execution."""

from __future__ import annotations

import hashlib
import json
import os
from dataclasses import dataclass
from pathlib import Path
from typing import Any, Callable, Mapping, Protocol

from riscq.build import Image, compile_c
from riscq.deployment.bundle import (VerifiedBundle, firmware_bundle_bytes,
                                     load_firmware_bundle)
from riscq.deployment.identity import raw_config_identity
from riscq.map import SocMap


class HostTransport(Protocol):
    """Bounded Phase-2 host seam; Phase 3 will provide its authenticated RPC implementation."""

    def status(self) -> Mapping[str, Any]: ...
    def run_firmware(self, bundle: bytes, *, parameters: Mapping[str, int],
                     results: list[str], timeout_s: float) -> Mapping[str, Any]: ...
    def run_installed(self, name: str, version: str, *, parameters: Mapping[str, int],
                      results: list[str], timeout_s: float) -> Mapping[str, Any]: ...
    def self_test(self, *, timeout_s: float) -> Mapping[str, Any]: ...


@dataclass(frozen=True)
class Firmware:
    data: bytes
    manifest: dict[str, Any]

    @classmethod
    def load(cls, source: str | Path | bytes) -> "Firmware":
        verified = load_firmware_bundle(source)
        return cls(verified.to_bytes(), verified.manifest)

    def write(self, path: str | Path) -> Path:
        output = Path(path)
        output.parent.mkdir(parents=True, exist_ok=True)
        try:
            with output.open("xb") as stream:
                stream.write(self.data)
        except FileExistsError as exc:
            raise FileExistsError(f"refusing to overwrite existing firmware bundle {output}") from exc
        return output


class LocalEngineTransport:
    """Host-test transport for a deployment engine; it performs no discovery or networking."""

    def __init__(self, engine: Any, self_test_bundle: bytes | None = None):
        self._engine = engine
        self._self_test_bundle = self_test_bundle

    def status(self) -> Mapping[str, Any]:
        return {"ready": True, "platform": dict(self._engine.identity)}

    def run_firmware(self, bundle: bytes, *, parameters: Mapping[str, int],
                     results: list[str], timeout_s: float) -> Mapping[str, Any]:
        return self._engine.run(bundle, parameters=parameters, results=results, timeout_s=timeout_s)

    def run_installed(self, name: str, version: str, *, parameters: Mapping[str, int],
                      results: list[str], timeout_s: float) -> Mapping[str, Any]:
        raise RuntimeError("installed-firmware lookup belongs to the Phase 3 service")

    def self_test(self, *, timeout_s: float) -> Mapping[str, Any]:
        if self._self_test_bundle is None:
            raise RuntimeError("no self-test firmware is configured")
        return self._engine.self_test(self._self_test_bundle, timeout_s=timeout_s)


class Board:
    """Primary experiment interface with no raw MMIO, shell, or platform-replacement methods."""

    def __init__(self, transport: HostTransport, raw_params: str | bytes):
        self._transport = transport
        self._identity = raw_config_identity(raw_params)

    @classmethod
    def connect(cls, profile: str | Path | None = None, *,
                transport_factory: Callable[[dict[str, Any]], HostTransport] | None = None) -> "Board":
        """Read the single default host profile and create a bounded transport.

        Phase 2 intentionally has no network implementation.  Tests and applications may inject
        a transport factory; Phase 3 will install the authenticated default factory.
        """
        if profile is None:
            root = Path(os.environ.get("XDG_CONFIG_HOME", Path.home() / ".config"))
            profile = root / "riscq" / "board.json"
        profile_path = Path(profile)
        try:
            document = json.loads(profile_path.read_text())
        except (OSError, json.JSONDecodeError) as exc:
            raise RuntimeError(f"cannot read default board profile {profile_path}: {exc}") from exc
        if not isinstance(document, dict) or set(document) - {"endpoint", "params"}:
            raise RuntimeError("board profile has unsupported fields")
        if not isinstance(document.get("params"), str):
            raise RuntimeError("board profile must name a host-side raw params file")
        if transport_factory is None:
            from riscq.rpc_transport import create_rpc_transport
            transport_factory = create_rpc_transport
        params_path = Path(document["params"])
        if not params_path.is_absolute():
            params_path = profile_path.parent / params_path
        
        return cls(transport_factory(document), params_path.read_bytes())

    @property
    def platform_identity(self) -> dict[str, str]:
        return {"id": self._identity.platform_id, **self._identity.requirements()}

    def status(self) -> Mapping[str, Any]:
        status = dict(self._transport.status())
        platform = status.get("platform")
        if not isinstance(platform, Mapping):
            raise RuntimeError("board status omitted platform identity")
        for field, expected in self.platform_identity.items():
            if platform.get(field) != expected:
                raise RuntimeError(f"board status {field} does not match host profile")
        return status

    def compile_c(self, source: str | Path, *, name: str | None = None,
                  version: str | None = None) -> Firmware:
        path = Path(source) if isinstance(source, Path) or "\n" not in str(source) else None
        try:
            is_file = path is not None and path.is_file()
        except OSError:
            is_file = False
        if is_file:
            source_text = path.read_text()
            default_name = path.stem
        else:
            source_text = str(source)
            default_name = "experiment"
        image: Image = compile_c(source_text, SocMap(self._identity.params))
        source_digest = image.source_sha256 or hashlib.sha256(source_text.encode()).hexdigest()
        firmware_id = name or default_name
        firmware_version = version or f"0.{source_digest[:12]}"
        data = firmware_bundle_bytes(
            firmware_id=firmware_id,
            version=firmware_version,
            image=image.data,
            symbols=image.symbols,
            entry=image.entry,
            requirements=self._identity.requirements(),
            source={"sha256": source_digest, "kind": "c"},
            runtime={"sha256": image.runtime_sha256 or "0" * 64},
            toolchain=image.toolchain,
        )
        return Firmware(data, load_firmware_bundle(data).manifest)

    def run(self, firmware: Firmware | str | Path | bytes, *,
            parameters: Mapping[str, int] | None = None, results: list[str] | None = None,
            timeout_s: float = 1.0) -> Mapping[str, Any]:
        if isinstance(firmware, Firmware):
            data = firmware.data
        elif isinstance(firmware, (str, Path)):
            data = Path(firmware).read_bytes()
        else:
            data = bytes(firmware)
        verified: VerifiedBundle = load_firmware_bundle(data)
        for field, expected in self._identity.requirements().items():
            if verified.manifest["requires"][field] != expected:
                raise RuntimeError(f"firmware {field} does not match board profile")
        return self._transport.run_firmware(
            verified.to_bytes(), parameters=dict(parameters or {}), results=list(results or []),
            timeout_s=float(timeout_s))

    def run_installed(self, name: str, version: str, *,
                      parameters: Mapping[str, int] | None = None,
                      results: list[str] | None = None,
                      timeout_s: float = 1.0) -> Mapping[str, Any]:
        return self._transport.run_installed(
            str(name), str(version), parameters=dict(parameters or {}),
            results=list(results or []), timeout_s=float(timeout_s))

    def self_test(self, *, timeout_s: float = 1.0) -> Mapping[str, Any]:
        return self._transport.self_test(timeout_s=float(timeout_s))
