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

## Memory Management

- Memory layout of a C program
  +-------------------------+
  | Command-line args | <-- Top of stack (high address)
  | Environment vars |
  +-------------------------+
  | Stack | <-- Local variables, function calls
  | (grows down) |
  +-------------------------+
  | Heap | <-- Dynamically allocated memory (malloc, etc)
  | (grows up) |
  +-------------------------+
  | BSS Segment (.bss) | <-- Uninitialized global/static vars
  +-------------------------+
  | Data Segment (.data) | <-- Initialized global/static vars
  +-------------------------+
  | Read-Only Data (.rodata) | <-- String literals, const vars
  +-------------------------+
  | Text (.text) | <-- Executable instructions
  +-------------------------+

- Memory Allocation

| Function                 | Purpose                            | Initializes Memory?    | Can Resize? | Must Free? | Common Source (Syscall) |
| ------------------------ | ---------------------------------- | ---------------------- | ----------- | ---------- | ----------------------- |
| `malloc(size)`           | Allocates `size` bytes             | ❌ No                  | ❌ No       | ✅ Yes     | `sbrk` / `mmap`         |
| `calloc(n, s)`           | Allocates `n * s` bytes            | ✅ Yes (zeroed)        | ❌ No       | ✅ Yes     | `sbrk` / `mmap`         |
| `realloc(ptr, new_size)` | Resizes previously allocated block | ❌ No (unless new mem) | ✅ Yes      | ✅ Yes     | `sbrk` / `mmap`         |
| `free(ptr)`              | Frees memory allocated above       | N/A                    | N/A         | ❌ No      | N/A                     |

- Notes
  - calloc zero-initializes the memory (either by explicitly writing 0s or via OS-provided zero pages).

  - realloc may move memory and invalidate the old pointer.

  - free must be called only on pointers returned by malloc, calloc, or realloc.
