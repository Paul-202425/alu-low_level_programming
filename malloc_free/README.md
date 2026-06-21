# C - malloc, free

A project focused on dynamic memory allocation in C using `malloc` and `free`, completed as part of the ALU Low Level Programming curriculum.

## Learning Objectives

By the end of this project, I am able to explain:

- The difference between automatic and dynamic memory allocation
- What `malloc` and `free` are and how to use them
- Why and when to use `malloc`
- How to use `valgrind` to check for memory leaks

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS using `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows the **Betty style**
- No global variables
- No more than 5 functions per file
- Only `malloc` and `free` are allowed from the standard library
- `_putchar` is allowed
- All prototypes included in `main.h`

## Files

| File | Description |
|---|---|
| `main.h` | Header file with all function prototypes |
| `0-create_array.c` | Creates an array of chars and initializes it with a specific char; returns NULL if size = 0 |
| `1-strdup.c` | Returns a pointer to a newly allocated copy of a given string using `malloc` |
| `2-str_concat.c` | Concatenates two strings into a newly allocated memory space |
| `3-alloc_grid.c` | Returns a pointer to a 2D array of integers, each initialized to 0 |
| `4-free_grid.c` | Frees a 2D grid previously created by `alloc_grid` |

## Compilation Example

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a
./a
```

## Memory Leak Check

```bash
valgrind ./4-free_grid
```

A clean run should show:
```
All heap blocks were freed -- no leaks are possible
ERROR SUMMARY: 0 errors from 0 contexts
```

## Author

Paul Masamvu
