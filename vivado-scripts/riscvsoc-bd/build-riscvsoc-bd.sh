#!/bin/bash
# ============================================================================================
# riscvsoc-bd — BLOCK-DESIGN implementation of the floorplan, to evaluate the gap vs the
# out-of-context bench in ../riscvsoc.
#
# Same SoC, same floorplan, same recipe — but built in a REAL device context: PulseTableSoc packaged as
# a user IP in a Vivado block design alongside the Zynq UltraScale+ PS, the RF Data Converter and an AXI
# SmartConnect, with real clocking (ClockInterface BUFGs from the board LVDS clocks) and the real
# host-released reset network. So the difference between this flow's WNS and the ~ −0.156 ns the OOC
# bench reports isolates the **block-design / real-device penalty** (PS+RFDC sharing the die, BUFG
# clocking, the IP synthesised out-of-context as a child run, SmartConnect routing).
#
# Self-contained: it generates the BD (vivado=true) RTL with GenPulseTableSocJson from a per-build
# SocParams JSON (the same file the python riscq.map / co-sim flows load), then runs the BD assembly in
# flow-bd.tcl + inc/{config,create-project,package-ip,bd-build,bd-finalize,run}.tcl, with the floorplan
# from pblocks-bd.tcl. RTL, the Vivado project, the reports and vivado.log all land in one folder under
# the repo-root build/ — <repo>/build/<PROJ> — so several designs can build in parallel.
#
# Prereq: a Vivado with the Zynq PS / RFDC / SmartConnect IP (the full ZCU216 BD flow). The RTL is the
# vivado=true form (host clock = hostClk, X_INTERFACE attrs) — distinct from the OOC bench's plain ports.
# The qubit count / DAC-ADC maps / interpolation all come from the JSON config; the tcl flow discovers the
# core count from the netlist, so a different config just needs a matching floorplan (pblocks-bd.tcl).
#
# ZCU216 retains the legacy full-build default. RFSoC4x2 defaults to validation-only. Its synthesis
# checkpoint is a separate explicit opt-in that permits target generation plus required OOC/top
# synthesis, while still prohibiting implementation, bitstream generation, and XSA export.
#
# Usage:
#   ./build-riscvsoc-bd.sh                    # zcu216-14q config, full floorplan, synth+impl+bitstream+xsa
#   RISCQ_RUN_BITSTREAM=0 ./build-riscvsoc-bd.sh # stop after impl (no bitstream / xsa)
#   RISCQ_CONFIG=software/configs/sim-2q.json ./build-riscvsoc-bd.sh # a different SocParams JSON
#   RISCQ_SKIP_GEN=1   ./build-riscvsoc-bd.sh # reuse the RTL already in the build dir (skip mill)
#   RISCQ_PROJ_NAME=foo ./build-riscvsoc-bd.sh # build into <repo>/build/foo (parallel designs)
#   RISCQ_PLATFORM=rfsoc4x2 RISCQ_BOARD_REPO=/path/to/boards ./build-riscvsoc-bd.sh # validation only
#   RISCQ_PLATFORM=rfsoc4x2 RISCQ_BUILD_MODE=synthesis RISCQ_BOARD_REPO=/path/to/boards \
#     ./build-riscvsoc-bd.sh # explicit synthesis-only checkpoint
#
# Env: RISCQ_VIVADO_BIN, RISCQ_CONFIG (default software/configs/zcu216-14q.json), RISCQ_SKIP_GEN,
#   RISCQ_BUILD_MODE (validation|synthesis|full; defaults validation on RFSoC4x2 and full on ZCU216),
#   RISCQ_RUN_BITSTREAM (legacy ZCU216 full mode: default 1; set 0 for impl-only),
#   RISCQ_PROJ_NAME (default riscvsoc-bd), plus the floorplan knobs read by pblocks-bd.tcl:
#   RISCQ_{ROW,PERROW,CONFINE}, RISCQ_BD_BASE, and RISCQ_PLACE_DIRECTIVE (default ExtraNetDelay_high —
#   the placer directive). RISCQ_MREG_LOCK=1 freezes the carrierGen ComplexMul product DSPs against
#   phys_opt MREG-stripping (specs/dsp-fmax.md). See README.md.
# ============================================================================================
set -e
BD_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"   # vivado-scripts/riscvsoc-bd
REPO_DIR="$(cd "$BD_DIR/../.." && pwd)"                  # agentic-rv-dev (repo root)
VIVADO_BIN="${RISCQ_VIVADO_BIN:-$(dirname "$(command -v vivado)")}"
PLATFORM="${RISCQ_PLATFORM:-zcu216}"
case "$PLATFORM" in
  zcu216)
    DEFAULT_CONFIG="$REPO_DIR/software/configs/zcu216-14q.json"
    DEFAULT_PROJ="riscvsoc-bd"
    ;;
  rfsoc4x2)
    DEFAULT_CONFIG="$REPO_DIR/software/configs/rfsoc4x2-nv-1q.json"
    DEFAULT_PROJ="rfsoc4x2-nv"
    ;;
  *)
    echo "[riscvsoc-bd] unsupported RISCQ_PLATFORM '$PLATFORM' (expected zcu216 or rfsoc4x2)" >&2
    exit 2
    ;;
esac
if [ -n "${RISCQ_BUILD_MODE:-}" ]; then
  BUILD_MODE="$RISCQ_BUILD_MODE"
elif [ "$PLATFORM" = "rfsoc4x2" ]; then
  BUILD_MODE="validation"
else
  BUILD_MODE="full"
fi
case "$BUILD_MODE" in
  validation) ;;
  synthesis)
    if [ "$PLATFORM" != "rfsoc4x2" ]; then
      echo "[riscvsoc-bd] synthesis checkpoint mode is RFSoC4x2-only" >&2
      exit 2
    fi
    ;;
  full)
    if [ "$PLATFORM" = "rfsoc4x2" ]; then
      echo "[riscvsoc-bd] RFSoC4x2 full builds are disabled; use RISCQ_BUILD_MODE=validation" >&2
      exit 2
    fi
    ;;
  *)
    echo "[riscvsoc-bd] unsupported RISCQ_BUILD_MODE '$BUILD_MODE' (expected validation, synthesis, or full)" >&2
    exit 2
    ;;
esac
CONFIG="${RISCQ_CONFIG:-$DEFAULT_CONFIG}"
PROJ="${RISCQ_PROJ_NAME:-$DEFAULT_PROJ}"
BUILD="$REPO_DIR/build/$PROJ"
mkdir -p "$BUILD"

# 1) RTL — the BD (vivado=true) form — emitted INTO the project build dir from the SocParams JSON.
if [ "${RISCQ_SKIP_GEN:-0}" != "1" ]; then
  echo "[riscvsoc-bd] generating BD RTL (GenPulseTableSocJson $CONFIG, vivado=true) → $BUILD"
  ( cd "$REPO_DIR" && mill --no-server runMain riscq.soc.GenPulseTableSocJson "$CONFIG" "$BUILD" vivado "$PLATFORM" )
else
  echo "[riscvsoc-bd] RISCQ_SKIP_GEN=1 — reusing RTL in $BUILD"
  [ -f "$BUILD/PulseTableSoc.v" ] || { echo "[riscvsoc-bd] no $BUILD/PulseTableSoc.v — run once without RISCQ_SKIP_GEN" >&2; exit 1; }
fi

# 2) Build via flow-bd.tcl, selecting the floorplan + IP retiming + place directive. RISCQ_PBLOCK
#    just enables the pre-place hook (any value); RISCQ_PBLOCK_TCL is the actual floorplan file.
export RISCQ_PROJ_NAME="$PROJ"
export RISCQ_BUILD_DIR="$BUILD"
export RISCQ_PLATFORM="$PLATFORM"
export RISCQ_BUILD_MODE="$BUILD_MODE"
if [ "$BUILD_MODE" = "validation" ]; then
  export RISCQ_VALIDATE_ONLY=1
  export RISCQ_GENERATE_TARGETS=0
  export RISCQ_RUN_SYNTH=0
  export RISCQ_RUN_IMPL=0
  export RISCQ_RUN_BITSTREAM=0
  unset RISCQ_PBLOCK RISCQ_PBLOCK_TCL RISCQ_IP_RETIMING RISCQ_CSET_THRESH RISCQ_PLACE_DIRECTIVE
  echo "[riscvsoc-bd] validating block design in $BUILD (no targets, runs, synthesis, implementation, bitstream, or XSA) …"
elif [ "$BUILD_MODE" = "synthesis" ]; then
  export RISCQ_RFSOC4X2_SYNTHESIS_OPT_IN=1
  export RISCQ_VALIDATE_ONLY=0
  export RISCQ_GENERATE_TARGETS=1
  export RISCQ_RUN_SYNTH=1
  export RISCQ_RUN_IMPL=0
  export RISCQ_RUN_BITSTREAM=0
  unset RISCQ_PBLOCK RISCQ_PBLOCK_TCL RISCQ_IP_RETIMING RISCQ_CSET_THRESH RISCQ_PLACE_DIRECTIVE
  echo "[riscvsoc-bd] RFSoC4x2 SYNTHESIS-ONLY opt-in: targets + required OOC/top synthesis; no implementation, bitstream, or XSA …"
else
  unset RISCQ_RFSOC4X2_SYNTHESIS_OPT_IN
  export RISCQ_VALIDATE_ONLY=0
  export RISCQ_GENERATE_TARGETS=1
  export RISCQ_PBLOCK=1
  export RISCQ_PBLOCK_TCL="$BD_DIR/pblocks-bd.tcl"
  export RISCQ_IP_RETIMING=1
  export RISCQ_PLACE_DIRECTIVE="${RISCQ_PLACE_DIRECTIVE:-ExtraNetDelay_high}"
  export RISCQ_RUN_SYNTH=1
  export RISCQ_RUN_IMPL=1
  export RISCQ_RUN_BITSTREAM="${RISCQ_RUN_BITSTREAM:-1}"
  echo "[riscvsoc-bd] building block design in $BUILD (floorplan, IP retiming, place=$RISCQ_PLACE_DIRECTIVE / route=AggressiveExplore, bitstream+xsa=$RISCQ_RUN_BITSTREAM) …"
fi
"$VIVADO_BIN/vivado" -nojournal -mode batch -log "$BUILD/vivado.log" -source "$BD_DIR/flow-bd.tcl"

echo "[riscvsoc-bd] ===================================================================="
echo "[riscvsoc-bd] done. reports in $BUILD"
if [ "$BUILD_MODE" = "validation" ]; then
  echo "[riscvsoc-bd] validation-only flow complete; no build runs were requested"
elif [ "$BUILD_MODE" = "synthesis" ]; then
  echo "[riscvsoc-bd] synthesis-only checkpoint complete; implementation, bitstream, and XSA were not requested"
  if [ -f "$BUILD/timing_synth.rpt" ]; then
    echo "[riscvsoc-bd] synthesis timing summary: $BUILD/timing_synth.rpt"
  fi
else
  if [ -f "$BUILD/timing_impl.rpt" ]; then
    echo "[riscvsoc-bd] impl WNS/TNS (timing_impl.rpt):"
    grep -m2 -E "WNS|TNS|Worst Negative|Total Negative" "$BUILD/timing_impl.rpt" | sed 's/^/[riscvsoc-bd]   /' || true
  else
    echo "[riscvsoc-bd] (no timing_impl.rpt — see $BUILD/vivado.log)"
  fi
  [ -f "$BUILD/PulseTableSoc.bit" ] && echo "[riscvsoc-bd] bitstream: $BUILD/PulseTableSoc.bit"
  [ -f "$BUILD/PulseTableSoc.xsa" ] && echo "[riscvsoc-bd] hardware platform: $BUILD/PulseTableSoc.xsa"
  echo "[riscvsoc-bd] compare against ../riscvsoc (OOC, ~ −0.156 ns). util_impl.rpt holds the per-pblock view."
fi
