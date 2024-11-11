STM32 : Custom Startup, Linker Script, and Build System
This repository provides a foundational setup for an STM32 Nucleo F303RE microcontroller project, focusing on creating a custom startup file, linker script, and makefile. The setup includes steps for building, flashing, and debugging the firmware on the STM32 microcontroller.

Project Overview
-------------------
This setup demonstrates:
Custom Startup File: Defines the vector table and reset handler to initialize memory sections and start the main application.
Linker Script: Configures memory layout, including .text,.data, .bss, and the program entry point.
Makefile-Based Build System: Manages the compilation and linking steps, generating relocatable object files , a final ELF file and final memory map file.

Getting Started
-------------------
Prerequisites **
ARM GCC Toolchain: arm-none-eabi-gcc
OpenOCD: For flashing and debugging the microcontroller via ST-Link
GDB: For debugging using arm-none-eabi-gdb

stm32_startup.c:
-------------------
Holds the custom startup file, defining the vector table and initialization routines.

Makefile.mak: 
-------------------
The custom makefile for building and flashing.

stm32_ls.ld: 
--------------------
Linker script that specifies the memory map and entry point.
Build and Flash Instructions

Step 1: Build the Project
---------------------
Compile the project with: bash
  make -f .\Makefile.mak
  This command preprocesses, assembles, and links the source code files and producing the final ELF file (final.elf) & producing final map file (final.map).

Step 2: Flash the Code onto the MCU
----------------------
Connect your STM32 Nucleo board to your PC via ST-Link and run: bash
  make -f .\Makefile.mak load
  This uses OpenOCD to load the ELF file onto the microcontroller core via ST-Link.


Debugging Instructions
-----------------------------------------------

Step 1: Start GDB
--------------------
Open a new terminal and start GDB:bash
  arm-none-eabi-gdb.exe

Step 2: Connect to the Target
--------------------
In the GDB session, connect to the target remotely:
gdb
target remote localhost:3333
This connects to OpenOCD, which communicates with the STM32 core via ST-Link on port 3333.

Step 3: Reset and Flash in GDB
--------------------
Initialize the target:
gdb
monitor reset init

Flash the code to the MCU:
gdb
monitor flash write_image erase final.elf

Step 4: Examine Variable Values in Memory
----------------------
You can inspect variables in SRAM and Flash memory using:
gdb
monitor mdw 0x20000000
This address is an example where specific variables (such as harsh2) may reside, based on information in final.map.

Compilation and Execution Flow
-------------------
1)  Preprocessing: 
    Each .c file is preprocessed to generate a .i file.
2)  Assembly: 
    Preprocessed files are compiled to .s assembly files.
3)  Object Files: 
    Each .s file is assembled into a .o relocatable object file.
4)  Linking: 
    The linker combines sections (.data, .bss, etc.), sets the entry point (Reset_Handler), and creates the final ELF file.

Execution Flow
-------------------
1)  Reset Handler:
    At runtime, the Reset_Handler in the startup file copies the .data section from Flash to SRAM, zeroes the .bss section, and calls main().
2)  Main Function:
    Program execution begins in main() after the memory is initialized.
