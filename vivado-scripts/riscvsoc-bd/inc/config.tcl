# ---- riscvsoc-bd configuration (script-scope; override any of these from the environment) -----------

# Keep the existing ZCU216 flow as the default.  A platform selects only project-level facts here;
# platform-specific RFDC configuration and wiring are selected in later assembly steps.
set PLATFORM zcu216
if {[info exists ::env(RISCQ_PLATFORM)]} { set PLATFORM $::env(RISCQ_PLATFORM) }

set BOARD_PART ""
set BOARD_REPO ""
switch -- $PLATFORM {
  zcu216 {
    set PART              xczu49dr-ffvf1760-2-e
    set DEFAULT_PROJ_NAME riscvsoc-bd
    set DEFAULT_DSP_FREQ  500000000
    set DEFAULT_HOST_FREQ 100000000
    set RFDC_CONFIG_SCRIPT  rfdc-config.tcl
    set RFDC_CONNECT_SCRIPT rfdc-connect.tcl
    set USE_CLOCK_INTERFACE 1
    set CONSTRAINTS_FILE    constraints-zcu216.xdc
    set DEFAULT_VALIDATE_ONLY 0
  }
  rfsoc4x2 {
    set PART              xczu48dr-ffvg1517-2-e
    set BOARD_PART        realdigital.org:rfsoc4x2:part0:1.0
    set DEFAULT_PROJ_NAME rfsoc4x2-nv
    set DEFAULT_DSP_FREQ  491520000
    # The PS customization reports 99,999,985 Hz for its nominal 100 MHz PL0 clock. Use that exact
    # value in packaged/BD metadata so a physically common clock is not diagnosed as asynchronous.
    set DEFAULT_HOST_FREQ 99999985
    set RFDC_CONFIG_SCRIPT  rfdc-config-rfsoc4x2.tcl
    set RFDC_CONNECT_SCRIPT rfdc-connect-rfsoc4x2.tcl
    set USE_CLOCK_INTERFACE 0
    set CONSTRAINTS_FILE    constraints-rfsoc4x2.xdc
    set DEFAULT_VALIDATE_ONLY 1
  }
  default {
    error "unsupported RISCQ_PLATFORM '$PLATFORM' (expected zcu216 or rfsoc4x2)"
  }
}

set TOP_MODULE    PulseTableSoc
set BD_NAME       riscq_bd
set DSP_FREQ      $DEFAULT_DSP_FREQ
set HOST_FREQ     $DEFAULT_HOST_FREQ
set BUILD_MODE    [expr {$PLATFORM eq "rfsoc4x2" ? "validation" : "full"}]
if {[info exists ::env(RISCQ_BUILD_MODE)]} { set BUILD_MODE $::env(RISCQ_BUILD_MODE) }

# Run stages. The legacy ZCU216 profile retains synthesis-on behavior. RFSoC4x2 defaults to a safe
# validation-only profile: no target generation, IP/OOC run creation, synthesis, implementation, or XSA.
set VALIDATE_ONLY $DEFAULT_VALIDATE_ONLY
set GENERATE_TARGETS [expr {!$DEFAULT_VALIDATE_ONLY}]
set RUN_SYNTH     1
set RUN_IMPL      0
set RUN_BITSTREAM 0

if {[info exists ::env(RISCQ_DEVICE)]}        { set PART          $::env(RISCQ_DEVICE) }
if {[info exists ::env(RISCQ_BOARD_PART)]}    { set BOARD_PART    $::env(RISCQ_BOARD_PART) }
if {[info exists ::env(RISCQ_BOARD_REPO)]}    { set BOARD_REPO    $::env(RISCQ_BOARD_REPO) }
if {[info exists ::env(RISCQ_TOP)]}           { set TOP_MODULE    $::env(RISCQ_TOP) }
if {[info exists ::env(RISCQ_DSP_FREQ)]}      { set DSP_FREQ      $::env(RISCQ_DSP_FREQ) }
if {[info exists ::env(RISCQ_HOST_FREQ)]}     { set HOST_FREQ     $::env(RISCQ_HOST_FREQ) }
if {[info exists ::env(RISCQ_VALIDATE_ONLY)]} { set VALIDATE_ONLY $::env(RISCQ_VALIDATE_ONLY) }
if {[info exists ::env(RISCQ_GENERATE_TARGETS)]} { set GENERATE_TARGETS $::env(RISCQ_GENERATE_TARGETS) }
if {[info exists ::env(RISCQ_RUN_SYNTH)]}     { set RUN_SYNTH     $::env(RISCQ_RUN_SYNTH) }
if {[info exists ::env(RISCQ_RUN_IMPL)]}      { set RUN_IMPL      $::env(RISCQ_RUN_IMPL) }
if {[info exists ::env(RISCQ_RUN_BITSTREAM)]} { set RUN_BITSTREAM $::env(RISCQ_RUN_BITSTREAM) }

# Bitstream implies implementation.
if {$RUN_BITSTREAM} { set RUN_IMPL 1 }
if {$VALIDATE_ONLY} {
  set GENERATE_TARGETS 0
  set RUN_SYNTH 0
  set RUN_IMPL 0
  set RUN_BITSTREAM 0
}

# The RFDC profile, generated RTL metadata, and runtime PYNQ clock setup are one fixed timing contract.
# RFSoC4x2 synthesis and deployment have deliberately redundant opt-ins: the named build mode plus a
# mode-specific marker exported only by build-riscvsoc-bd.sh. This prevents direct Tcl or stale stage
# flags from silently crossing the validation-only default.
if {$PLATFORM eq "rfsoc4x2"} {
  if {$DSP_FREQ != 491520000 || $HOST_FREQ != 99999985} {
    error "RFSoC4x2 requires RISCQ_DSP_FREQ=491520000 and nominal-100MHz RISCQ_HOST_FREQ=99999985"
  }
  switch -- $BUILD_MODE {
    validation {
      if {!$VALIDATE_ONLY || $GENERATE_TARGETS || $RUN_SYNTH || $RUN_IMPL || $RUN_BITSTREAM} {
        error "RFSoC4x2 validation mode must disable targets and every build run"
      }
    }
    synthesis {
      if {![info exists ::env(RISCQ_RFSOC4X2_SYNTHESIS_OPT_IN)] ||
          $::env(RISCQ_RFSOC4X2_SYNTHESIS_OPT_IN) ne "1"} {
        error "RFSoC4x2 synthesis requires the explicit build-riscvsoc-bd.sh synthesis opt-in"
      }
      if {$VALIDATE_ONLY || !$GENERATE_TARGETS || !$RUN_SYNTH || $RUN_IMPL || $RUN_BITSTREAM} {
        error "RFSoC4x2 synthesis mode permits only targets/OOC/top synthesis; implementation and bitstream must remain disabled"
      }
    }
    deployment {
      if {![info exists ::env(RISCQ_RFSOC4X2_DEPLOYMENT_OPT_IN)] ||
          $::env(RISCQ_RFSOC4X2_DEPLOYMENT_OPT_IN) ne "1"} {
        error "RFSoC4x2 deployment requires the explicit build-riscvsoc-bd.sh deployment opt-in"
      }
      if {$VALIDATE_ONLY || !$GENERATE_TARGETS || !$RUN_SYNTH || !$RUN_IMPL || !$RUN_BITSTREAM} {
        error "RFSoC4x2 deployment mode requires targets, synthesis, implementation, routed signoff, and bitstream"
      }
    }
    default {
      error "RFSoC4x2 build mode '$BUILD_MODE' is disabled (expected validation, synthesis, or deployment)"
    }
  }
}

# Paths. One folder per project under the repo-root build/ (git-ignored), so several designs build in
# parallel without clobbering each other. The RTL (PulseTableSoc.v, the ZCU216-only ClockInterface.v,
# and register-file .bin) is emitted there by GenPulseTableSocJson, so SOURCE_PATH
# is the build dir itself. RISCQ_PROJ_NAME names the folder; RISCQ_BUILD_DIR overrides the full path.
set PROJ_NAME   $DEFAULT_PROJ_NAME
if {[info exists ::env(RISCQ_PROJ_NAME)]}     { set PROJ_NAME   $::env(RISCQ_PROJ_NAME) }
set BUILD_DIR   [file normalize $SCRIPT_DIR/../../build/$PROJ_NAME]
if {[info exists ::env(RISCQ_BUILD_DIR)]}     { set BUILD_DIR   $::env(RISCQ_BUILD_DIR) }
set SOURCE_PATH $BUILD_DIR
if {[info exists ::env(RISCQ_RTL_DIR)]}       { set SOURCE_PATH $::env(RISCQ_RTL_DIR) }
set IP_REPO     $BUILD_DIR/ip
# Vivado project name (the .xpr / .runs / .gen prefix) — sanitise the folder name to the underscore-safe
# subset create_project accepts.
set PRJ         [regsub -all {[^A-Za-z0-9_]} $PROJ_NAME _]

puts "\[config\] platform=$PLATFORM top=$TOP_MODULE part=$PART board_part=$BOARD_PART"
if {$BOARD_REPO ne ""} { puts "\[config\] board_repo=$BOARD_REPO" }
puts "\[config\] rfdc_config=$RFDC_CONFIG_SCRIPT rfdc_connect=$RFDC_CONNECT_SCRIPT"
puts "\[config\] clock_interface=$USE_CLOCK_INTERFACE constraints=$CONSTRAINTS_FILE"
puts "\[config\] mode=$BUILD_MODE dsp=${DSP_FREQ}Hz host=${HOST_FREQ}Hz validate_only=$VALIDATE_ONLY targets=$GENERATE_TARGETS synth=$RUN_SYNTH impl=$RUN_IMPL bit=$RUN_BITSTREAM"
puts "\[config\] rtl=$SOURCE_PATH  build=$BUILD_DIR"

if {![file exists $SOURCE_PATH/$TOP_MODULE.v]} {
  error "missing $SOURCE_PATH/$TOP_MODULE.v — run ./build-riscvsoc-bd.sh (it generates the RTL first)"
}
file mkdir $BUILD_DIR
