"""Exact, deterministic platform identity for host-side deployment.

``SocParams`` intentionally normalizes away hardware-only fields.  Deployment
compatibility therefore starts from the complete raw JSON document and layers
the derived software map and firmware ABI identities on top of it.
"""

from __future__ import annotations

import hashlib
import json
import math
from dataclasses import dataclass
from typing import Any

from riscq.map import SocMap, SocParams


IDENTITY_SCHEMA = "riscq-identity-v1"
FIRMWARE_ABI = "riscq-flat-rv32-word-v1"


class IdentityError(ValueError):
    """A raw configuration or derived identity is malformed."""


def _object_no_duplicates(pairs: list[tuple[str, Any]]) -> dict[str, Any]:
    out: dict[str, Any] = {}
    for key, value in pairs:
        if key in out:
            raise IdentityError(f"duplicate JSON key {key!r}")
        out[key] = value
    return out


def strict_json_loads(data: str | bytes) -> Any:
    """Parse JSON while rejecting duplicate keys and non-finite numbers."""
    if isinstance(data, bytes):
        try:
            data = data.decode("utf-8")
        except UnicodeDecodeError as exc:
            raise IdentityError("JSON is not UTF-8") from exc

    def reject_constant(value: str) -> None:
        raise IdentityError(f"non-finite JSON number {value!r}")

    try:
        return json.loads(data, object_pairs_hook=_object_no_duplicates,
                          parse_constant=reject_constant)
    except IdentityError:
        raise
    except (json.JSONDecodeError, TypeError) as exc:
        raise IdentityError(f"malformed JSON: {exc}") from exc


def _validate_json(value: Any, path: str = "$") -> None:
    if value is None or isinstance(value, (str, bool, int)):
        return
    if isinstance(value, float):
        if not math.isfinite(value):
            raise IdentityError(f"{path} contains a non-finite number")
        return
    if isinstance(value, list):
        for index, item in enumerate(value):
            _validate_json(item, f"{path}[{index}]")
        return
    if isinstance(value, dict):
        for key, item in value.items():
            if not isinstance(key, str):
                raise IdentityError(f"{path} has a non-string key")
            _validate_json(item, f"{path}.{key}")
        return
    raise IdentityError(f"{path} contains unsupported JSON type {type(value).__name__}")


def canonical_json_bytes(value: Any) -> bytes:
    """Return the one canonical UTF-8 representation used by every digest."""
    _validate_json(value)
    return (json.dumps(value, sort_keys=True, separators=(",", ":"), ensure_ascii=False,
                       allow_nan=False) + "\n").encode("utf-8")


def sha256_bytes(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def _map_document(soc_map: SocMap) -> dict[str, Any]:
    return {
        "schema": IDENTITY_SCHEMA,
        "entries": [
            {"name": entry.name, "host_addr": entry.host_addr,
             "nbytes": entry.nbytes, "kind": entry.kind}
            for entry in soc_map.entries()
        ],
        "core_stride": soc_map.core_stride,
        "region_size": soc_map.region_size,
        "mem_base": 0x8000_0000,
        "mem_bytes": soc_map.mem_bytes,
    }


def map_digest(soc_map: SocMap) -> str:
    return sha256_bytes(canonical_json_bytes(_map_document(soc_map)))


def abi_digest(soc_map: SocMap) -> str:
    document = {
        "schema": IDENTITY_SCHEMA,
        "abi": FIRMWARE_ABI,
        "generated_header_sha256": sha256_bytes(soc_map.gen_header().encode("utf-8")),
        "linker_script_sha256": sha256_bytes(soc_map.gen_linker().encode("utf-8")),
    }
    return sha256_bytes(canonical_json_bytes(document))


@dataclass(frozen=True)
class RawConfigIdentity:
    raw_bytes: bytes
    raw_sha256: str
    canonical_bytes: bytes
    params_digest: str
    map_digest: str
    abi_digest: str
    raw: dict[str, Any]
    params: SocParams

    @property
    def platform_id(self) -> str:
        return str(self.raw["name"])

    def requirements(self) -> dict[str, str]:
        return {
            "params_digest": self.params_digest,
            "map_digest": self.map_digest,
            "abi_digest": self.abi_digest,
        }


def raw_config_identity(data: str | bytes) -> RawConfigIdentity:
    """Bind the exact bytes, complete JSON value, derived map, and firmware ABI."""
    raw_bytes = data.encode("utf-8") if isinstance(data, str) else bytes(data)
    value = strict_json_loads(raw_bytes)
    if not isinstance(value, dict):
        raise IdentityError("raw configuration must be a JSON object")
    canonical = canonical_json_bytes(value)
    try:
        params = SocParams.from_json(canonical.decode("utf-8"))
    except (TypeError, ValueError, KeyError) as exc:
        raise IdentityError(f"invalid SocParams document: {exc}") from exc
    soc_map = SocMap(params)
    return RawConfigIdentity(
        raw_bytes=raw_bytes,
        raw_sha256=sha256_bytes(raw_bytes),
        canonical_bytes=canonical,
        params_digest=sha256_bytes(canonical),
        map_digest=map_digest(soc_map),
        abi_digest=abi_digest(soc_map),
        raw=value,
        params=params,
    )
