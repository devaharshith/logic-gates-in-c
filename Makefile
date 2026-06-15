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