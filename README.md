# mcat — mini `cat`

A simple, lightweight, and portable *mini `cat`* written in C++. Reads files (or `stdin`) and prints them to `stdout`.

---

## Features

* Supports multiple files as arguments.
* `"-"` represents `stdin` (UNIX convention).
* Opens files in binary mode (`rb`) — works well on Windows and *nix.
* Minimal dependencies, simple and readable code.

---

## Compilation

Simple compilation commands:

```bash
# using g++
g++ -O2 -std=c++11 mcat.cpp -o mcat

# or using clang++
clang++ -O2 -std=c++11 mcat.cpp -o mcat
```

## Usage

```bash
# Read a file
./mcat file.txt

# Read multiple files sequentially
./mcat file1.txt file2.bin file3

# Read from stdin (no arguments)
./mcat < file.txt

# Using '-' for stdin explicitly
./mcat - otherfile.txt

# Pipeline example
./mcat big_logs.log | head -n 5
```
