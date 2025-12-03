# Mini BMS Simulation v0.1

This project is a C-based simulation of a Battery Management System (BMS) logic. It acts as a safety monitor for a drone battery, calculating power consumption and checking critical safety limits (Over-Voltage, Under-Voltage, Over-Current).

## Project Overview
In embedded systems, monitoring battery health is critical. This program simulates reading sensor data (Voltage & Current) from a user input and determining the safety status of the system.

**Unique Feature:** This project relies entirely on **Logical Operators** and **Boolean Algebra** to generate status flags. No `if-else` or `switch-case` control flow statements were used, mimicking low-level register status bit operations found in microcontrollers.

## Features
- **Real-time Power Calculation:** Automatically calculates Power (Watt) based on user inputs ($P = V \times I$).
- **Safety Flags:** Generates `1` (True) or `0` (False) flags for:
  - High Voltage Error
  - Low Voltage Error
  - High Current Error
- **System Health Check:** Determines if the system is safe to operate using logical `AND`, `OR`, `NOT` operators based on the generated flags.
- **Configurable Limits:** Safety thresholds are defined via Preprocessor Directives (`#define`) for easy modification.

## Technologies Used
- **Language:** C Programming
- **Concepts:** Variables, Preprocessor Macros, Standard I/O, Boolean Logic.
- **IDE:** Code::Blocks / GCC Compiler

## How to Run
1. Clone this repository to your local machine.
2. Compile the `main.c` file using any standard C compiler (GCC, Clang, or via an IDE like Code::Blocks/VS Code).
3. Run the executable file.
4. Enter the **Voltage (V)** and **Current (A)** values when prompted.
5. View the generated safety report and status flags.

---

### Author
**[Aykut Gencer KARACA]**
*Electrical & Electronics Engineering Student*
