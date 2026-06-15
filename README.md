# Logic Gates in C

A collection of C programs demonstrating the implementation and operation of basic digital logic gates.

## 📌 Features
- AND Gate
- OR Gate
- NOT Gate
- NAND Gate
- NOR Gate
- XOR Gate
- XNOR Gate
  
- ## 📂 Project Structure
- and_gate.c   - AND gate implementation
- or_gate.c    - OR gate implementation
- not_gate.c   - NOT gate implementation
- nand_gate.c  - NAND gate implementation
- nor_gate.c   - NOR gate implementation
- xor_gate.c   - XOR gate implementation
- xnor_gate.c  - XNOR gate implementatio

## 💻 Language Used
- C Programming

## 🎯 Purpose
This project was created to practice C programming and understand the fundamentals of digital logic design.

## 🚀 How to Run

Follow these simple steps to compile and execute the program on your system:

### 1️⃣ Clone the Repository

```bash
git clone https://github.com/devaharshith/logic-gates-in-c.git
cd logic-gates-in-c
```

### 2️⃣ Compile the Program

Use the GCC compiler to build the source code:

```bash
gcc logic_gates.c -o logic_gates
```

### 3️⃣ Run the Executable

Execute the compiled program:

```bash
./logic_gates
```

### 📋 Requirements

* A C compiler (GCC recommended)
* Any operating system that supports C compilation (Windows, Linux, or macOS)

> **Note:** If your source file has a different name (for example, `main.c`), replace `logic_gates.c` with your actual file name in the commands above.

## 📊 Truth Tables & Examples

### AND Gate
| A | B | Output |
|---|---|--------|
| 0 | 0 | 0      |
| 0 | 1 | 0      |
| 1 | 0 | 0      |
| 1 | 1 | 1      |

### OR Gate
| A | B | Output |
|---|---|--------|
| 0 | 0 | 0      |
| 0 | 1 | 1      |
| 1 | 0 | 1      |
| 1 | 1 | 1      |

### NOT Gate
| A | Output |
|---|--------|
| 0 | 1      |
| 1 | 0      |

### NAND Gate
| A | B | Output |
|---|---|--------|
| 0 | 0 | 1      |
| 0 | 1 | 1      |
| 1 | 0 | 1      |
| 1 | 1 | 0      |

### NOR Gate
| A | B | Output |
|---|---|--------|
| 0 | 0 | 1      |
| 0 | 1 | 0      |
| 1 | 0 | 0      |
| 1 | 1 | 0      |

### XOR Gate
| A | B | Output |
|---|---|--------|
| 0 | 0 | 0      |
| 0 | 1 | 1      |
| 1 | 0 | 1      |
| 1 | 1 | 0      |

### XNOR Gate
| A | B | Output |
|---|---|--------|
| 0 | 0 | 1      |
| 0 | 1 | 0      |
| 1 | 0 | 0      |
| 1 | 1 | 1      |

## 📄 License
This project is licensed under the MIT License.
