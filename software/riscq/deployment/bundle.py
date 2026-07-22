"""Deterministic, fail-closed ``.rqplatform`` and ``.rqfw`` containers."""

from __future__ import annotations

import io
import json
import math
import re
import stat
import zipfile
from dataclasses import dataclass
from pathlib import Path, PurePosixPath
from typing import Any, Mapping

from riscq.deployment.identity import (RawConfigIdentity, canonical_json_bytes,
                                       raw_config_identity, sha256_bytes, strict_json_loads)


PLATFORM_FORMAT = "riscq-platform-v1"
FIRMWARE_FORMAT = "riscq-firmware-v1"
MAX_ENTRIES = 256
MAX_MEMBER_BYTES = 128 * 1024 * 1024
MAX_TOTAL_BYTES = 256 * 1024 * 1024
MAX_CONTAINER_OVERHEAD = 16 * 1024 * 1024
MAX_COMPRESSION_RATIO = 200
_ID = re.compile(r"^[A-Za-z0-9][A-Za-z0-9._-]{0,127}$")


class BundleError(ValueError):
    """A bundle is malformed, corrupt, unsafe, or incompatible."""


@dataclass(frozen=True)
class VerifiedBundle:
    kind: str
    manifest: dict[str, Any]
    files: dict[str, bytes]
    raw_config: RawConfigIdentity | None = None

    @property
    def semantic_key(self) -> tuple[str, str]:
        return str(self.manifest["id"]), str(self.manifest["version"])

    def to_bytes(self) -> bytes:
        return _deterministic_zip(self.files)


def _require_id(value: Any, field: str) -> str:
    if not isinstance(value, str) or not _ID.fullmatch(value):
        raise BundleError(f"{field} is not a safe semantic identifier")
    return value


def _require_hex(value: Any, field: str) -> str:
    if not isinstance(value, str) or not re.fullmatch(r"[0-9a-f]{64}", value):
        raise BundleError(f"{field} must be a lowercase SHA-256 digest")
    return value


def _require_text(value: Any, field: str) -> str:
    if not isinstance(value, str) or not value.strip():
        raise BundleError(f"{field} must be a nonempty string")
    return value


def _validate_platform_metadata(clocks: Any, hwh_ranges: Any, device: Any,
                                board_part: Any, source_commit: Any, vivado: Any) -> None:
    clock_keys = {"lmk_mhz", "lmx_mhz", "pl_clk0_hz", "dsp_hz"}
    if not isinstance(clocks, dict) or set(clocks) != clock_keys:
        raise BundleError(f"clocks keys must be exactly {sorted(clock_keys)}")
    for name, value in clocks.items():
        if (not isinstance(value, (int, float)) or isinstance(value, bool)
                or not math.isfinite(value) or value <= 0):
            raise BundleError(f"clocks.{name} must be a positive finite number")

    if not isinstance(hwh_ranges, dict) or not hwh_ranges:
        raise BundleError("hwh_ranges must be a nonempty map")
    for name, aperture in hwh_ranges.items():
        _require_text(name, "hwh_ranges key")
        if not isinstance(aperture, dict) or set(aperture) != {"base", "range"}:
            raise BundleError(f"hwh_ranges.{name} must contain exactly base and range")
        for field in ("base", "range"):
            value = aperture[field]
            if (not isinstance(value, int) or isinstance(value, bool) or value < 0
                    or (field == "range" and value == 0)):
                raise BundleError(f"hwh_ranges.{name}.{field} is invalid")

    _require_text(device, "device")
    _require_text(board_part, "board_part")
    if not isinstance(source_commit, str) or not re.fullmatch(r"[0-9a-f]{40,64}", source_commit):
        raise BundleError("source_commit must be a lowercase 40-64 digit Git object id")
    vivado_keys = {"version", "software_build", "ip_build", "shared_data_build"}
    if not isinstance(vivado, dict) or set(vivado) != vivado_keys:
        raise BundleError(f"vivado keys must be exactly {sorted(vivado_keys)}")
    for name, value in vivado.items():
        _require_text(value, f"vivado.{name}")


def _validate_firmware_provenance(source: Any, runtime: Any, toolchain: Any) -> None:
    if not isinstance(source, dict) or "sha256" not in source or "kind" not in source:
        raise BundleError("source provenance must bind kind and sha256")
    _require_text(source["kind"], "source.kind")
    _require_hex(source["sha256"], "source.sha256")
    if "path" in source:
        _require_text(source["path"], "source.path")

    if not isinstance(runtime, dict) or set(runtime) != {"sha256"}:
        raise BundleError("runtime provenance must contain exactly sha256")
    _require_hex(runtime["sha256"], "runtime.sha256")

    tool_names = {"compiler", "objcopy", "nm"}
    if not isinstance(toolchain, dict) or set(toolchain) != tool_names:
        raise BundleError(f"toolchain keys must be exactly {sorted(tool_names)}")
    for name, record in toolchain.items():
        if not isinstance(record, dict) or set(record) != {"path", "sha256", "version"}:
            raise BundleError(f"toolchain.{name} must bind path, sha256, and version")
        _require_text(record["path"], f"toolchain.{name}.path")
        _require_hex(record["sha256"], f"toolchain.{name}.sha256")
        _require_text(record["version"], f"toolchain.{name}.version")


def _safe_name(name: str) -> None:
    if not name or "\\" in name or "\x00" in name or name.startswith("/"):
        raise BundleError(f"unsafe ZIP member {name!r}")
    path = PurePosixPath(name)
    if path.is_absolute() or any(part in ("", ".", "..") for part in path.parts):
        raise BundleError(f"unsafe ZIP member {name!r}")


def _load_zip(source: str | Path | bytes, *, max_member: int | None = None,
              max_total: int | None = None) -> dict[str, bytes]:
    max_member = MAX_MEMBER_BYTES if max_member is None else max_member
    max_total = MAX_TOTAL_BYTES if max_total is None else max_total
    max_container = max_total + MAX_CONTAINER_OVERHEAD
    if isinstance(source, (str, Path)):
        path = Path(source)
        try:
            size = path.stat().st_size
        except OSError as exc:
            raise BundleError(f"cannot inspect ZIP container: {exc}") from exc
        if size > max_container:
            raise BundleError("ZIP container exceeds outer size limit")
        blob = path.read_bytes()
    else:
        if len(source) > max_container:
            raise BundleError("ZIP container exceeds outer size limit")
        blob = bytes(source)
    try:
        archive = zipfile.ZipFile(io.BytesIO(blob), "r")
    except (zipfile.BadZipFile, OSError) as exc:
        raise BundleError(f"invalid ZIP container: {exc}") from exc
    out: dict[str, bytes] = {}
    total = 0
    try:
        infos = archive.infolist()
        if not infos or len(infos) > MAX_ENTRIES:
            raise BundleError(f"bundle has {len(infos)} entries; limit is {MAX_ENTRIES}")
        for info in infos:
            _safe_name(info.filename)
            if info.filename in out:
                raise BundleError(f"duplicate ZIP member {info.filename!r}")
            if info.flag_bits & 0x1:
                raise BundleError(f"encrypted ZIP member {info.filename!r} is forbidden")
            if info.compress_type not in (zipfile.ZIP_STORED, zipfile.ZIP_DEFLATED):
                raise BundleError(f"unsupported compression for {info.filename!r}")
            mode = (info.external_attr >> 16) & 0xFFFF
            if mode and stat.S_IFMT(mode) not in (0, stat.S_IFREG):
                raise BundleError(f"non-regular ZIP member {info.filename!r}")
            if info.file_size > max_member:
                raise BundleError(f"ZIP member {info.filename!r} exceeds size limit")
            total += info.file_size
            if total > max_total:
                raise BundleError("bundle exceeds aggregate size limit")
            if info.compress_size == 0 and info.file_size:
                raise BundleError(f"invalid compressed size for {info.filename!r}")
            if (info.compress_size and info.file_size / info.compress_size
                    > MAX_COMPRESSION_RATIO):
                raise BundleError(f"excessive compression ratio for {info.filename!r}")
            try:
                data = archive.read(info)
            except (zipfile.BadZipFile, RuntimeError, OSError) as exc:
                raise BundleError(f"corrupt ZIP member {info.filename!r}: {exc}") from exc
            if len(data) != info.file_size:
                raise BundleError(f"short ZIP member {info.filename!r}")
            out[info.filename] = data
    finally:
        archive.close()
    return out


def _deterministic_zip(files: Mapping[str, bytes]) -> bytes:
    stream = io.BytesIO()
    with zipfile.ZipFile(stream, "w", compression=zipfile.ZIP_STORED,
                         allowZip64=True, strict_timestamps=True) as archive:
        for name in sorted(files):
            _safe_name(name)
            info = zipfile.ZipInfo(name, date_time=(1980, 1, 1, 0, 0, 0))
            info.compress_type = zipfile.ZIP_STORED
            info.create_system = 3
            info.external_attr = (stat.S_IFREG | 0o644) << 16
            info.flag_bits = 0x800
            archive.writestr(info, bytes(files[name]))
    return stream.getvalue()


def _manifest(files: Mapping[str, bytes]) -> dict[str, Any]:
    if "manifest.json" not in files:
        raise BundleError("bundle is missing manifest.json")
    try:
        value = strict_json_loads(files["manifest.json"])
    except ValueError as exc:
        raise BundleError(str(exc)) from exc
    if not isinstance(value, dict):
        raise BundleError("manifest must be a JSON object")
    return value


def _file_records(files: Mapping[str, bytes], names: list[str]) -> dict[str, dict[str, Any]]:
    return {name: {"size": len(files[name]), "sha256": sha256_bytes(files[name])}
            for name in names}


def _verify_records(manifest: Mapping[str, Any], files: Mapping[str, bytes],
                    allowed: set[str]) -> None:
    records = manifest.get("files")
    if not isinstance(records, dict) or set(records) != allowed - {"manifest.json"}:
        raise BundleError("manifest file table does not exactly match bundle members")
    if set(files) != allowed:
        unknown = sorted(set(files) - allowed)
        missing = sorted(allowed - set(files))
        raise BundleError(f"bundle member mismatch: missing={missing}, unknown={unknown}")
    for name, record in records.items():
        if not isinstance(record, dict) or set(record) != {"size", "sha256"}:
            raise BundleError(f"invalid file record for {name!r}")
        if not isinstance(record["size"], int) or isinstance(record["size"], bool):
            raise BundleError(f"invalid size for {name!r}")
        digest = _require_hex(record["sha256"], f"files.{name}.sha256")
        data = files[name]
        if record["size"] != len(data) or digest != sha256_bytes(data):
            raise BundleError(f"payload identity mismatch for {name!r}")


def _write_new(output: str | Path, data: bytes) -> Path:
    path = Path(output)
    path.parent.mkdir(parents=True, exist_ok=True)
    try:
        with path.open("xb") as stream:
            stream.write(data)
            stream.flush()
    except FileExistsError as exc:
        raise FileExistsError(f"refusing to overwrite existing bundle {path}") from exc
    return path


def platform_bundle_bytes(*, platform_id: str, version: str, bit: bytes, hwh: bytes,
                          params: bytes, clocks: Mapping[str, Any],
                          hwh_ranges: Mapping[str, Any], device: str, board_part: str,
                          source_commit: str, vivado: Mapping[str, Any],
                          ltx: bytes | None = None) -> bytes:
    _validate_platform_metadata(clocks, hwh_ranges, device, board_part, source_commit, vivado)
    identity = raw_config_identity(params)
    if _require_id(platform_id, "platform_id") != identity.platform_id:
        raise BundleError("platform id does not match complete raw params")
    _require_id(version, "version")
    payloads = {"params.json": bytes(params), "platform.bit": bytes(bit),
                "platform.hwh": bytes(hwh)}
    if ltx is not None:
        payloads["debug.ltx"] = bytes(ltx)
    manifest: dict[str, Any] = {
        "format": PLATFORM_FORMAT,
        "id": platform_id,
        "version": version,
        "raw_params_sha256": identity.raw_sha256,
        **identity.requirements(),
        "clocks": dict(clocks),
        "hwh_ranges": dict(hwh_ranges),
        "device": str(device),
        "board_part": str(board_part),
        "source_commit": str(source_commit),
        "vivado": dict(vivado),
        "files": _file_records(payloads, sorted(payloads)),
    }
    files = {**payloads, "manifest.json": canonical_json_bytes(manifest)}
    return _deterministic_zip(files)


def create_platform_bundle(output: str | Path, **kwargs: Any) -> Path:
    return _write_new(output, platform_bundle_bytes(**kwargs))


def load_platform_bundle(source: str | Path | bytes) -> VerifiedBundle:
    files = _load_zip(source)
    manifest = _manifest(files)
    required_keys = {"format", "id", "version", "raw_params_sha256", "params_digest",
                     "map_digest", "abi_digest", "clocks", "hwh_ranges", "device",
                     "board_part", "source_commit", "vivado", "files"}
    if set(manifest) != required_keys or manifest.get("format") != PLATFORM_FORMAT:
        raise BundleError("malformed platform manifest schema")
    _require_id(manifest["id"], "id")
    _require_id(manifest["version"], "version")
    for field in ("raw_params_sha256", "params_digest", "map_digest", "abi_digest"):
        _require_hex(manifest[field], field)
    _validate_platform_metadata(manifest["clocks"], manifest["hwh_ranges"], manifest["device"],
                                manifest["board_part"], manifest["source_commit"],
                                manifest["vivado"])
    payload_names = set(manifest["files"]) if isinstance(manifest["files"], dict) else set()
    allowed_base = {"params.json", "platform.bit", "platform.hwh"}
    if not allowed_base <= payload_names or payload_names - allowed_base - {"debug.ltx"}:
        raise BundleError("platform payload set is malformed")
    _verify_records(manifest, files, {"manifest.json", *payload_names})
    identity = raw_config_identity(files["params.json"])
    expected = {"raw_params_sha256": identity.raw_sha256, **identity.requirements()}
    for field, value in expected.items():
        if manifest[field] != value:
            raise BundleError(f"platform {field} mismatch")
    if manifest["id"] != identity.platform_id:
        raise BundleError("platform id does not match raw params")
    return VerifiedBundle("platform", manifest, files, identity)


def firmware_bundle_bytes(*, firmware_id: str, version: str, image: bytes,
                          symbols: Mapping[str, tuple[int, int] | list[int]], entry: int,
                          requirements: Mapping[str, str], source: Mapping[str, Any],
                          runtime: Mapping[str, Any], toolchain: Mapping[str, Any],
                          assets: Mapping[str, bytes] | None = None) -> bytes:
    _validate_firmware_provenance(source, runtime, toolchain)
    _require_id(firmware_id, "firmware_id")
    _require_id(version, "version")
    image = bytes(image)
    symbol_doc = {str(name): [int(pair[0]), int(pair[1])]
                  for name, pair in sorted(symbols.items())}
    payloads: dict[str, bytes] = {
        "firmware.bin": image,
        "symbols.json": canonical_json_bytes(symbol_doc),
    }
    for name, data in sorted((assets or {}).items()):
        _safe_name(name)
        if not name.startswith("assets/") or name in payloads:
            raise BundleError("optional firmware assets must live under assets/")
        payloads[name] = bytes(data)
    required_identity = {key: _require_hex(requirements.get(key), key)
                         for key in ("params_digest", "map_digest", "abi_digest")}
    manifest: dict[str, Any] = {
        "format": FIRMWARE_FORMAT,
        "id": firmware_id,
        "version": version,
        "image": {"entry": int(entry), "size": len(image),
                  "sha256": sha256_bytes(image)},
        "requires": required_identity,
        "source": dict(source),
        "runtime": dict(runtime),
        "toolchain": dict(toolchain),
        "assets": sorted(name for name in payloads if name.startswith("assets/")),
        "files": _file_records(payloads, sorted(payloads)),
    }
    return _deterministic_zip({**payloads, "manifest.json": canonical_json_bytes(manifest)})


def create_firmware_bundle(output: str | Path, **kwargs: Any) -> Path:
    return _write_new(output, firmware_bundle_bytes(**kwargs))


def load_firmware_bundle(source: str | Path | bytes) -> VerifiedBundle:
    files = _load_zip(source)
    manifest = _manifest(files)
    required_keys = {"format", "id", "version", "image", "requires", "source",
                     "runtime", "toolchain", "assets", "files"}
    if set(manifest) != required_keys or manifest.get("format") != FIRMWARE_FORMAT:
        raise BundleError("malformed firmware manifest schema")
    _require_id(manifest["id"], "id")
    _require_id(manifest["version"], "version")
    image_record = manifest["image"]
    if (not isinstance(image_record, dict)
            or set(image_record) != {"entry", "size", "sha256"}
            or not isinstance(image_record["entry"], int)
            or isinstance(image_record["entry"], bool)
            or not isinstance(image_record["size"], int)
            or isinstance(image_record["size"], bool)):
        raise BundleError("malformed firmware image record")
    _require_hex(image_record["sha256"], "image.sha256")
    requirements = manifest["requires"]
    if not isinstance(requirements, dict) or set(requirements) != {
            "params_digest", "map_digest", "abi_digest"}:
        raise BundleError("malformed firmware requirements")
    for field, value in requirements.items():
        _require_hex(value, f"requires.{field}")
    _validate_firmware_provenance(manifest["source"], manifest["runtime"], manifest["toolchain"])
    assets = manifest["assets"]
    if (not isinstance(assets, list) or any(not isinstance(name, str) for name in assets)
            or len(set(assets)) != len(assets)):
        raise BundleError("malformed firmware asset list")
    for name in assets:
        _safe_name(name)
        if not name.startswith("assets/"):
            raise BundleError("firmware asset is outside assets/")
    allowed = {"manifest.json", "firmware.bin", "symbols.json", *assets}
    _verify_records(manifest, files, allowed)
    image = files["firmware.bin"]
    if (image_record["size"] != len(image)
            or image_record["sha256"] != sha256_bytes(image)):
        raise BundleError("firmware image identity mismatch")
    try:
        symbols = strict_json_loads(files["symbols.json"])
    except ValueError as exc:
        raise BundleError(str(exc)) from exc
    if not isinstance(symbols, dict):
        raise BundleError("symbols.json must be an object")
    for name, pair in symbols.items():
        if (not isinstance(name, str) or not isinstance(pair, list) or len(pair) != 2
                or any(not isinstance(value, int) or isinstance(value, bool) for value in pair)):
            raise BundleError(f"malformed symbol record {name!r}")
    return VerifiedBundle("firmware", manifest, files)


def inspect_bundle(source: str | Path | bytes) -> dict[str, Any]:
    files = _load_zip(source)
    manifest = _manifest(files)
    if manifest.get("format") == PLATFORM_FORMAT:
        return load_platform_bundle(source).manifest
    if manifest.get("format") == FIRMWARE_FORMAT:
        return load_firmware_bundle(source).manifest
    raise BundleError("unknown bundle format")
