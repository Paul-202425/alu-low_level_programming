# C - Recursion

A project focused on understanding and implementing recursion in C, completed as part of the ALU Low Level Programming curriculum.

## Learning Objectives

By the end of this project, I am able to explain:

- What recursion is
- How to implement recursion
- In what situations recursion should be used
- In what situations recursion should not be used

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS using `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows the **Betty style**
- No global variables
- No more than 5 functions per file
- Standard library functions (`printf`, `puts`, etc.) are **not allowed**
- `_putchar` is allowed
- No loops of any kind
- No static variables
- All prototypes included in `main.h`

## Files

| File | Description |
|---|---|
| `main.h` | Header file with all function prototypes |
| `0-puts_recursion.c` | Prints a string followed by a new line using recursion |
| `1-print_rev_recursion.c` | Prints a string in reverse using recursion |
| `2-strlen_recursion.c` | Returns the length of a string using recursion |
| `3-factorial.c` | Returns the factorial of a given number; returns -1 if n < 0 |
| `4-pow_recursion.c` | Returns the value of x raised to the power of y; returns -1 if y < 0 |
| `5-sqrt_recursion.c` | Returns the natural square root of a number; returns -1 if no natural root exists |
| `6-is_prime_number.c` | Returns 1 if the input integer is a prime number, otherwise returns 0 |

## Compilation Example

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
./0-puts_recursion
```

## Author

Paul Masamvu
