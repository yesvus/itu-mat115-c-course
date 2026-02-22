# MAT115E C Class Exercises

This repository contains C code snippets I wrote during my **MAT115E** class at **Istanbul Technical University**.

All code in this repository is organized and uploaded to GitHub to help new students.

## Repository Structure

- **[`labs/`](./labs/)**: Contains the weekly laboratory assignments and projects.
- **[`exercises/`](./exercises/)**: Contains practice snippets, homework tasks, and class exercises.
- **[`exams/`](./exams/)**: Contains any mock exams, midterms, or final practices.
- **`template.c`**: A boilerplate file for starting new C programs with proper documentation headers.

## Notes

- These files are class exercises and practice snippets.
- The repository is intended as a learning reference for beginners.

## How to Compile and Run

Compile and run one C file (for example, `labs/w3_lab1.c`) with `gcc`.

### macOS

- Compile: `gcc "labs/w3_lab1.c" -o program`
- Run: `./program`

### Windows (MinGW / MSYS2)

- Compile: `gcc "labs\w3_lab1.c" -o program.exe`
- Run: `program.exe`

## If `gcc` Is Not Found

### macOS

- Install Xcode Command Line Tools: `xcode-select --install`
- Check installation: `gcc --version`

### Windows

- Install **MSYS2** (recommended) or **MinGW-w64**.
- If needed, add the `bin` folder (where `gcc.exe` is) to your **PATH**.
- Reopen terminal and check: `gcc --version`