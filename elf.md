# Why

# Overview

Executable Linkable Format

| **ELF File Type** | **Example** | **Comment** |
| --- | --- | --- |
| Relocatable File | .o |  |
| Executable File | /bin/bash | Can be executed directly; no extension name required. |
| Shared Object File | .so |  |
| Core Dump File | core dump |  |

# Structure

## ELF Header

For any binary file (or object file), we can easily obtain its ELF Header using the `readelf` command:

```bash
readelf -h /bin/ls

ELF Header:
  Magic:   7f 45 4c 46 02 01 01 00 00 00 00 00 00 00 00 00
  Class:                             ELF64
  Data:                              2's complement, little endian
  Version:                           1 (current)
  OS/ABI:                            UNIX - System V
  ABI Version:                       0
  Type:                              DYN (Position-Independent Executable file)
  Machine:                           Advanced Micro Devices X86-64
  Version:                           0x1
  Entry point address:               0x6aa0
  Start of program headers:          64 (bytes into file)
  Start of section headers:          136232 (bytes into file)
  Flags:                             0x0
  Size of this header:               64 (bytes)
  Size of program headers:           56 (bytes)
  Number of program headers:         13
  Size of section headers:           64 (bytes)
  Number of section headers:         31
  Section header string table index: 30
```

The ELF Header ensures that the operating system can correctly read and interpret the object file.

### Magic

The prefix starts with 7F, which is a standard identifier for ELF files. The succeeding three bytes are 45, 4C, and 46, which represent the ASCII codes for "E", "L", and "F" respectively.

### Class

Determines the architecture for the file. More accurately, it specifies the word size of the CPU/ISA: either 32-bit or 64-bit.

### Data

### Version

### OS/ABI

### ABI Version

### Machine

### Type

## File data

### Program headers

### ELF sections

# Reference

https://linux-audit.com/elf-binaries-on-linux-understanding-and-analysis/
