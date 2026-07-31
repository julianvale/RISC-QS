"""Validation and private execution adapter for the RFSoC4x2 Program lane."""

from __future__ import annotations

from collections.abc import Mapping

from riscq import run
from riscq.deployment.bundle import BundleError
from riscq.deployment.identity import raw_config_identity
from riscq.map import MEM_BASE, SocMap


MAX_PROGRAM_BYTES = 128 * 1024


def validate_program_identity(params_json: str | bytes, platform) -> SocMap:
    """Require program parameters to match the files loaded by the board."""
    identity = raw_config_identity(params_json)
    expected = platform.identity
    if identity.raw_sha256 != expected["raw_params_sha256"]:
        raise BundleError("Program raw platform parameters do not match the active platform")
    for field in ("params_digest", "map_digest", "abi_digest"):
        if identity.requirements()[field] != expected[field]:
            raise BundleError(f"Program platform {field} mismatch")
    if identity.platform_id != expected["id"]:
        raise BundleError("Program platform id mismatch")
    return SocMap(identity.params)


def _pair(pair, name):
    if not isinstance(pair, (list, tuple)) or len(pair) != 2:
        raise BundleError(f"symbol {name!r} must be [address, size]")
    return int(pair[0]), int(pair[1])


def validate_program_wire(wire: Mapping, m: SocMap) -> None:
    """Validate untrusted serpent data before calling any adapter method."""
    if not isinstance(wire, Mapping):
        raise BundleError("Program wire value must be a map")
    required = {"data", "entry", "symbols", "params", "arrays", "tables", "envelopes"}
    if set(wire) != required:
        raise BundleError("Program wire fields are not exact")
    data = wire["data"]
    if isinstance(data, Mapping):
        import serpent
        data = serpent.tobytes(data)
    data = bytes(data)
    entry = int(wire["entry"])
    if not data or len(data) > min(m.mem_bytes, MAX_PROGRAM_BYTES) or len(data) % 4:
        raise BundleError("Program image is empty, oversized, or unaligned")
    if entry != MEM_BASE or entry % 4 or entry + len(data) > MEM_BASE + m.mem_bytes:
        raise BundleError("Program image entry or bounds are invalid")

    symbols = wire["symbols"]
    if not isinstance(symbols, Mapping):
        raise BundleError("Program symbols must be a map")
    for name, pair in symbols.items():
        address, size = _pair(pair, name)
        if not isinstance(name, str) or address % 4 or size < 0 or size % 4:
            raise BundleError(f"symbol {name!r} is not word aligned")
        if not MEM_BASE <= address <= MEM_BASE + m.mem_bytes or address + size > MEM_BASE + m.mem_bytes:
            raise BundleError(f"symbol {name!r} is outside core RAM")
    for name in ("__rq_status", "__rq_magic"):
        if name not in symbols or _pair(symbols[name], name)[1] != 4:
            raise BundleError(f"required symbol {name!r} is missing or malformed")

    params, arrays, tables = wire["params"], wire["arrays"], wire["tables"]
    if not isinstance(params, Mapping) or not isinstance(arrays, Mapping) or not isinstance(tables, Mapping):
        raise BundleError("Program params, arrays, and tables must be maps")
    for name in params:
        if name not in symbols or _pair(symbols[name], name)[1] != 4:
            raise BundleError(f"parameter {name!r} is not a scalar symbol")
    for name, count in arrays.items():
        if name not in symbols or not isinstance(count, int) or isinstance(count, bool) or count <= 0:
            raise BundleError(f"array {name!r} is invalid")
        if _pair(symbols[name], name)[1] < count * 4:
            raise BundleError(f"array {name!r} exceeds its symbol")
    for name, slots in tables.items():
        if name not in symbols or not isinstance(slots, list):
            raise BundleError(f"table {name!r} is invalid")
        if _pair(symbols[name], name)[1] < len(slots) * 16:
            raise BundleError(f"table {name!r} exceeds its symbol")
        for slot in slots:
            if not isinstance(slot, (list, tuple)) or len(slot) != 4:
                raise BundleError(f"table {name!r} has malformed slot")
            if any(not isinstance(value, int) or isinstance(value, bool) for value in slot):
                raise BundleError(f"table {name!r} has a non-integer slot")

    envelopes = wire["envelopes"]
    if not isinstance(envelopes, Mapping):
        raise BundleError("Program envelopes must be a map")
    for channel, entries in envelopes.items():
        channel = int(channel)
        info = m.channel(channel)
        if not isinstance(entries, list):
            raise BundleError("Program envelope entries must be a list")
        for entry in entries:
            if not isinstance(entry, (list, tuple)) or len(entry) != 4:
                raise BundleError("Program envelope entry is malformed")
            line0, payload, n_lines, width = (int(entry[0]), entry[1],
                                               int(entry[2]), int(entry[3]))
            if line0 < 0 or n_lines <= 0 or width != info.samples_per_line or line0 + n_lines > m.params.env_depth:
                raise BundleError("Program envelope span is invalid")
            if isinstance(payload, Mapping):
                import serpent
                payload = serpent.tobytes(payload)
            if len(bytes(payload)) != n_lines * info.line_bytes:
                raise BundleError("Program envelope shape does not match channel line width")


class Rfsoc4x2ProgramAdapter:
    """Private four-operation adapter; never placed on the RPC object."""

    def __init__(self, driver, soc_map: SocMap):
        self._driver, self._map = driver, soc_map

    def read32(self, addr):
        return int(self._driver.read32(int(addr))) & 0xFFFFFFFF

    def write32(self, addr, value):
        self._driver.write32(int(addr), int(value) & 0xFFFFFFFF)

    def _check(self, addr, nbytes):
        if addr % 4 or nbytes < 0 or nbytes % 4:
            raise ValueError("Program transfer must be word aligned")
        if not any(addr >= e.host_addr and addr + nbytes <= e.host_addr + e.nbytes
                   for e in self._map.entries()):
            raise ValueError("Program transfer is outside the active SocMap")

    def read_block(self, addr, nbytes):
        self._check(int(addr), int(nbytes))
        return b"".join(
            self.read32(int(addr) + offset).to_bytes(4, "little")
            for offset in range(0, int(nbytes), 4)
        )

    def write_block(self, addr, data):
        self._check(int(addr), len(data))
        data = bytes(data)
        for offset in range(0, len(data), 4):
            self.write32(int(addr) + offset,
                         int.from_bytes(data[offset:offset + 4], "little"))


def execute_setup(adapter, m, wire):
    validate_program_wire(wire, m)
    return run._prog_from_wire(wire)
