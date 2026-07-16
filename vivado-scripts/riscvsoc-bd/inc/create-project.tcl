# ---- Create the Vivado project and add the top RTL -------------------------------------------------
# Only the top is added here; ClockInterface.v is added *after* the top is packaged as IP (so it stays a
# plain BD module reference and is not swept into the user IP). package-ip.tcl copies SpinalHDL's
# `$readmemb` .bin files into the packaged IP explicitly; adding them as outer-project sources causes
# Vivado's IP packager to ignore them.

# Board repositories must be registered before project creation/BOARD_PART lookup. RISCQ_BOARD_REPO
# names a Vivado board-repository root (the directory containing rfsoc4x2/1.0/board.xml), not a
# machine-specific version-directory baked into this repository.
if {$BOARD_REPO ne ""} {
  set BOARD_REPO [file normalize $BOARD_REPO]
  if {![file isdirectory $BOARD_REPO]} {
    error "RISCQ_BOARD_REPO '$BOARD_REPO' is not a directory"
  }
  set _board_repos [get_param board.repoPaths]
  if {[lsearch -exact $_board_repos $BOARD_REPO] < 0} {
    set_param board.repoPaths [linsert $_board_repos 0 $BOARD_REPO]
  }
}

create_project $PRJ $BUILD_DIR -part $PART -force

if {$BOARD_PART ne ""} {
  if {[llength [get_board_parts -quiet $BOARD_PART]] == 0} {
    error "board part '$BOARD_PART' was not found; install its board files or set RISCQ_BOARD_REPO to the repository root"
  }
  if {[catch {set_property BOARD_PART $BOARD_PART [current_project]} _board_error]} {
    error "could not set BOARD_PART '$BOARD_PART': $_board_error"
  }
  set _selected_board [get_property BOARD_PART [current_project]]
  if {$_selected_board ne $BOARD_PART} {
    error "selected BOARD_PART '$_selected_board' does not match requested '$BOARD_PART'"
  }
  puts "\[create-project\] board_part=$_selected_board"
}

add_files $SOURCE_PATH/$TOP_MODULE.v

set_property top $TOP_MODULE [current_fileset]
update_compile_order -fileset sources_1
