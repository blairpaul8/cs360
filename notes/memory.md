# Memory

These are a few notes on memory and important information to remember

## Memory Sections

- .text --> executable code
- .rodata --> read-only data (eg. string literals with char\*)
- .data --> initialized global/stack variables
- .bss --> uninitialized global/stack variables (set to 0)
- Stack --> local variables
- Heap --> dynamically allocated memory (malloc)

## gcc/cland compilation flags

```
gcc -O0 -S test.c test.s     # Generates Assembly
objdump -d test.o            # Disassemble object files

```

Also, use gdb to step through C code to see stack frames, pointers, and memory contents.
