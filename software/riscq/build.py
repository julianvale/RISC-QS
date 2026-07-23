"""C -> flat binary image: stage fw/ + generated riscq_map.h/link.ld, invoke the riscv clang,
objcopy to a flat image at 0x80000000, extract the symbol table with nm. Cached on input hash."""

from __future__ import annotations

import hashlib
import json
import os
import shutil
import subprocess
import tempfile
from dataclasses import dataclass, field
from pathlib import Path

from riscq.map import MEM_BASE, SocMap

# resolved from PATH; the toolchain ships no rv32 runtime archive, so fw/muldiv.c provides the
# soft mul/div libcalls instead of -lgcc
CC = (os.environ.get("RISCQ_CC") or shutil.which("riscv64-unknown-elf-clang")
      or shutil.which("clang"))
OBJCOPY = (os.environ.get("RISCQ_OBJCOPY") or shutil.which("riscv64-unknown-elf-objcopy")
           or shutil.which("llvm-objcopy"))
NM = (os.environ.get("RISCQ_NM") or shutil.which("riscv64-unknown-elf-nm")
      or shutil.which("llvm-nm"))

_SW_ROOT = Path(__file__).resolve().parent.parent      # software/
FW_DIR = _SW_ROOT / "fw"
BUILD_ROOT = _SW_ROOT / "build" / "cc"

# number of actual compiler invocations this process made (tests assert cache hits against it)
CC_RUNS = 0


@dataclass
class Image:
    """A linked flat program image: `data` loads at 0x80000000 (text+rodata+data; .bss is NOT
    in the image — start.S zeroes it), `symbols` maps global name -> (address, size in bytes)."""

    data: bytes
    symbols: dict[str, tuple[int, int]]
    entry: int = MEM_BASE
    source_sha256: str | None = None
    runtime_sha256: str | None = None
    toolchain: dict = field(default_factory=dict)


class Program:
    """A compiled program: the flat image plus what the runner needs (spec 02/03).

    - `params`: host-writable param global -> None for user runtime params (kernels only emit
      user params now; the value is written by riscq.run.write_params).
    - `arrays`: Array param name -> element count (run() reads these back by default).
    - `envelopes`: channel index (0 gate / 1 ro / 2 demod) -> [(line0, lines)] envelope-RAM images.
    - `tables`: live ParamTable symbol -> [(phase, amp, env, dur), ...] per-slot design-time
      codes riscq.run.load_tables fills the .data `struct rq_slot[]` with (spec 02 §3.2).
    - `c_source`: the generated C (kernels only; readable, spec principle 7).

    Hand-written C uses `Program.from_image(img)` — everything empty, same runner."""

    def __init__(self, image: Image, params=None, arrays=None, envelopes=None, tables=None,
                 c_source: str | None = None):
        self.image = image
        self.params: dict[str, int | None] = dict(params or {})
        self.arrays: dict[str, int] = dict(arrays or {})
        self.envelopes: dict = dict(envelopes or {})
        self.tables: dict = dict(tables or {})
        self.c_source = c_source

    @classmethod
    def from_image(cls, image: Image) -> "Program":
        return cls(image)

    def var_addr(self, name: str) -> int:
        if name not in self.image.symbols:
            raise KeyError(f"symbol {name!r} not in program "
                           f"(known: {sorted(self.image.symbols)[:20]}...)")
        return self.image.symbols[name][0]

    def var_size(self, name: str) -> int:
        self.var_addr(name)
        return self.image.symbols[name][1]


def _flags(soc_map: SocMap) -> list[str]:
    march = "rv32i_zmmul" if soc_map.params.with_mul else "rv32i"
    target = ([] if CC and "riscv" in Path(CC).name
              else ["--target=riscv32-unknown-elf"])
    return target + [f"-march={march}", "-mabi=ilp32", "-O2", "-fwrapv", "-nostdlib",
            "-ffreestanding", "-mno-relax", "-Werror=implicit-function-declaration", "-I."]


def _parse_nm(text: str) -> dict[str, tuple[int, int]]:
    symbols = {}
    for line in text.splitlines():
        parts = line.split()
        if len(parts) == 4:
            addr, size, _, name = parts
            # Ignore LLVM mapping symbols ($d, $x, etc.) and internal labels (.L...)
            if name.startswith("$") or name.startswith("."):
                continue
            symbols[name] = (int(addr, 16), int(size, 16))
        elif len(parts) == 3:
            addr, _, name = parts
            if name.startswith("$") or name.startswith("."):
                continue
            symbols[name] = (int(addr, 16), 0)
    return symbols


def _file_identity(path: str | None) -> dict[str, str | None]:
    if path is None:
        return {"path": None, "sha256": None, "version": None}
    resolved = Path(path).resolve()
    digest = hashlib.sha256(resolved.read_bytes()).hexdigest()
    try:
        result = subprocess.run([str(resolved), "--version"], capture_output=True, text=True,
                                timeout=10, check=False)
        first = (result.stdout or result.stderr).splitlines()
        version = first[0].strip() if first else f"exit={result.returncode}"
    except (OSError, subprocess.SubprocessError) as exc:
        version = f"unavailable:{type(exc).__name__}"
    return {"path": str(resolved), "sha256": digest, "version": version}


def toolchain_identity() -> dict[str, dict[str, str | None]]:
    """Fingerprint every executable that can affect image bytes or symbols."""
    return {"compiler": _file_identity(CC), "objcopy": _file_identity(OBJCOPY),
            "nm": _file_identity(NM)}


def compile_c(c_source: str, soc_map: SocMap, extra_headers: dict[str, str] | None = None) -> Image:
    """Compile a C program (its whole main.c text) against this build's fw/ runtime.
    Loud failures: missing toolchain, compile/link errors (RAM overflow is a link error),
    oversize image."""
    global CC_RUNS
    if CC is None:
        raise RuntimeError("riscv64-unknown-elf-clang not found on PATH — "
                           "put the riscv LLVM toolchain's bin/ on PATH")
    if OBJCOPY is None or NM is None:
        raise RuntimeError("riscv objcopy/nm not found on PATH")

    files = {
        "main.c": c_source,
        "start.S": (FW_DIR / "start.S").read_text(),
        "muldiv.c": (FW_DIR / "muldiv.c").read_text(),
        "riscq.h": (FW_DIR / "riscq.h").read_text(),
        "riscq_map.h": soc_map.gen_header(),
        "link.ld": soc_map.gen_linker(),
    }
    files.update(extra_headers or {})
    flags = _flags(soc_map)
    tools = toolchain_identity()
    source_sha256 = hashlib.sha256(c_source.encode("utf-8")).hexdigest()
    runtime_sha256 = hashlib.sha256(json.dumps(
        {name: files[name] for name in ("start.S", "muldiv.c", "riscq.h", "riscq_map.h", "link.ld")},
        sort_keys=True, separators=(",", ":")).encode("utf-8")).hexdigest()

    key = hashlib.sha256(
        json.dumps({"toolchain": tools, "files": files, "flags": flags},
                   sort_keys=True).encode()).hexdigest()[:16]
    build_dir = BUILD_ROOT / key
    bin_path = build_dir / "main.bin"
    sym_path = build_dir / "symbols.json"
    meta_path = build_dir / "build.json"

    if not (bin_path.exists() and sym_path.exists() and meta_path.exists()):
        BUILD_ROOT.mkdir(parents=True, exist_ok=True)
        if build_dir.exists():
            raise RuntimeError(f"refusing to overwrite incomplete compiler cache {build_dir}")
        temp_dir = Path(tempfile.mkdtemp(prefix=f".{key}.", dir=BUILD_ROOT))
        for name, text in files.items():
            (temp_dir / name).write_text(text)

        cmd = [CC] + flags + ["-T", "link.ld", "-o", "main.elf", "start.S", "main.c", "muldiv.c"]
        CC_RUNS += 1
        r = subprocess.run(cmd, cwd=temp_dir, capture_output=True, text=True)
        if r.returncode != 0:
            raise RuntimeError(f"riscv clang failed ({' '.join(cmd)}):\n{r.stderr}")

        r = subprocess.run([OBJCOPY, "-O", "binary", "main.elf", "main.bin"],
                           cwd=temp_dir, capture_output=True, text=True)
        if r.returncode != 0:
            raise RuntimeError(f"objcopy failed:\n{r.stderr}")

        r = subprocess.run([NM, "-S", "main.elf"], cwd=temp_dir,
                           capture_output=True, text=True)
        if r.returncode != 0:
            raise RuntimeError(f"nm failed:\n{r.stderr}")
        (temp_dir / "symbols.json").write_text(json.dumps(_parse_nm(r.stdout), sort_keys=True))
        (temp_dir / "build.json").write_text(json.dumps(
            {"source_sha256": source_sha256, "runtime_sha256": runtime_sha256,
             "toolchain": tools}, sort_keys=True))
        try:
            temp_dir.rename(build_dir)
        except FileExistsError as exc:
            raise RuntimeError(f"compiler cache appeared concurrently at {build_dir}") from exc

    data = bin_path.read_bytes()
    if len(data) > soc_map.mem_bytes:  # belt: link.ld's ASSERT should have caught this
        raise RuntimeError(f"image {len(data)} B exceeds RAM {soc_map.mem_bytes} B")
    symbols = {k: tuple(v) for k, v in json.loads(sym_path.read_text()).items()}
    metadata = json.loads(meta_path.read_text())
    return Image(data=data, symbols=symbols, source_sha256=metadata["source_sha256"],
                 runtime_sha256=metadata["runtime_sha256"], toolchain=metadata["toolchain"])
