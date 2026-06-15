# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c11

# List of source files
SOURCES = and_gate.c or_gate.c not_gate.c nand_gate.c nor_gate.c xor_gate.c xnor_gate.c

# List of executable files (created by stripping .c extension)
EXECUTABLES = $(SOURCES:.c=)

# Default target
all: $(EXECUTABLES)

# Rule to compile each source file into an executable
%: %.c
	$(CC) $(CFLAGS) $< -o $@

# Target to clean up compiled executables
clean:
	rm -f $(EXECUTABLES)
# ============================================
# Logic Gates in C - Makefile
# Compiles all digital logic gate programs
# ============================================

# List of all programs to compile
all: and_gate or_gate nand_gate nor_gate xor_gate xnor_gate not_gate

# Compile AND gate
and_gate: and_gate.c
	gcc and_gate.c -o and_gate

# Compile OR gate
or_gate: or_gate.c
	gcc or_gate.c -o or_gate

# Compile NAND gate
nand_gate: nand_gate.c
	gcc nand_gate.c -o nand_gate

# Compile NOR gate
nor_gate: nor_gate.c
	gcc nor_gate.c -o nor_gate

# Compile XOR gate
xor_gate: xor_gate.c
	gcc xor_gate.c -o xor_gate

# Compile XNOR gate
xnor_gate: xnor_gate.c
	gcc xnor_gate.c -o xnor_gate

# Compile NOT gate
not_gate: not_gate.c
	gcc not_gate.c -o not_gate

# Remove compiled files and executables
clean:
	rm -f and_gate or_gate nand_gate nor_gate xor_gate xnor_gate not_gate