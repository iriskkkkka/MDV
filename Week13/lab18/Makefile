# =======================================================================
#  Bitty-core build Makefile
# =======================================================================

# ---------- tool-chain options ----------------------------------------------
CXX        := g++
CXXFLAGS   := -Wall -Wextra -std=c++17

# ---------- Verilator flags --------------------------------------------------
VL_FLAGS   := -sv \
              --cc rtl/CPU.v rtl/bitty_core.v rtl/PC.v rtl/memory.v \
              rtl/ALU.v rtl/control_unit.v rtl/DPI.sv rtl/mux.v rtl/register.v rtl/branch.v\
              --exe emulator/BittyEmulator.cpp rtl/bitty_dpi.cpp \
              test/bitty_core_test.cpp -Gfile=\"program.hex\"

# ---------- configurable variables -------------------------------------------
LINES      ?= 256            # make hex LINES=1024  → 1024-line ROM
HEX        ?= program.hex    # override if you want another ROM name

# ---------- source / output names -------------------------------------------
GEN        := randomfile
GEN_SRC    := randomfile.cpp BittyInstructionGenerator.cpp

ASM_TOOL   := assembler
ASM_SRC    := assembler_tool.cpp

BIN        := program.bin    # default names for quick tests
ASM        := program.asm

SIM_TOP    := obj_dir/VCPU
VL_MK      := obj_dir/VCPU.mk

# ---------- phony targets ----------------------------------------------------
.PHONY: all run sim clean hex asm asm_print dasm dasm_print

# ---------------------------------------------------------------------------
# 1.  Random ROM  (program.hex)
# ---------------------------------------------------------------------------
$(GEN): $(GEN_SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

hex: $(HEX)
$(HEX): $(GEN)
	./$< $(LINES)

# ---------------------------------------------------------------------------
# 2.  Assembler / disassembler helpers
# ---------------------------------------------------------------------------
$(ASM_TOOL): $(ASM_SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

# output name helper for dasm
DASM_OUT = $(patsubst %.bin,%.asm,$(patsubst %.hex,%.asm,$(SRC)))

# ---- assemble  (SRC must be .asm) ------------------------------------------
asm: $(ASM_TOOL)
	@[ -n "$(SRC)" ] || { echo "Usage: make asm SRC=file.asm"; exit 1; }
	@[ "$${SRC##*.}" = "asm" ] || { echo "Error: SRC must end in .asm"; exit 1; }
	./$(ASM_TOOL) -i $(SRC) -o ${SRC:.asm=.bin} -a


# ---- assemble & print -------------------------------------------------------
asm_print: $(ASM_TOOL)
	@[ -n "$(SRC)" ] || { echo "Usage: make asm_print SRC=file.asm"; exit 1; }
	@[ "${SRC##*.}" = "asm" ] || { echo "Error: SRC must end in .asm"; exit 1; }
	./$(ASM_TOOL) -i $(SRC) -a

# ---- disassemble  (.bin OR .hex) -------------------------------------------
dasm: $(ASM_TOOL)
	@[ -n "$(SRC)" ] || { echo "Usage: make dasm SRC=file.{bin,hex}"; exit 1; }
	./$(ASM_TOOL) -i $(SRC) -o $(DASM_OUT) -d

# ---- disassemble & print ----------------------------------------------------
dasm_print: $(ASM_TOOL)
	@[ -n "$(SRC)" ] || { echo "Usage: make dasm_print SRC=file.{bin,hex}"; exit 1; }
	./$(ASM_TOOL) -i $(SRC) -d

# ---------------------------------------------------------------------------
# 3.  Verilator build
# ---------------------------------------------------------------------------
obj_dir:
	mkdir -p $@

$(VL_MK): $(HEX) obj_dir
	verilator $(VL_FLAGS)

$(SIM_TOP): $(VL_MK)
	$(MAKE) -C obj_dir -f VCPU.mk VCPU

# ---------------------------------------------------------------------------
# 4.  Run simulation
# ---------------------------------------------------------------------------
run: $(SIM_TOP)
	./$(SIM_TOP)

# ---------------------------------------------------------------------------
# 5.  Convenience umbrella targets
# ---------------------------------------------------------------------------
all: $(SIM_TOP)          # default build (ROM + Verilator model)
sim: hex $(VL_MK) $(SIM_TOP) run  # one-shot regenerate ROM → build → run

# ---------------------------------------------------------------------------
# 6.  House-keeping
# ---------------------------------------------------------------------------
clean:
	rm -rf obj_dir $(GEN) $(ASM_TOOL) $(HEX) *.bin *.asm
