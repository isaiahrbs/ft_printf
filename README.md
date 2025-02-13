# ft_printf

## Description
`ft_printf` is a custom implementation of the standard C `printf` function. It formats and prints output to the standard output (`stdout`). The project aims to enhance understanding of variadic functions, formatted output, and low-level data handling.

## Features
- Supports the following format specifiers:
  - `%c` : Prints a single character.
  - `%s` : Prints a string.
  - `%d` / `%i` : Prints a signed integer.
  - `%u` : Prints an unsigned integer.
  - `%x` / `%X` : Prints a hexadecimal number (lowercase/uppercase).
  - `%p` : Prints a pointer address.
  - `%%` : Prints a percent sign.
- Handles field width, precision, and some flags like `-` (left alignment) and `0` (zero padding).
- Uses variadic arguments (`va_list`, `va_start`, `va_arg`, `va_end`).

## Usage
To use `ft_printf`, compile it into your project and include the header file:

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hello, %s! You have %d new messages.\n", "Isaiah", 5);
    return 0;
}
```

### Compilation
Compile:
```sh
make all
```
Clean:
```sh
make fclean
```

## Allowed Functions
- `write`
- `malloc`
- `free`
- `va_start`, `va_arg`, `va_copy`, `va_end`

## Project Constraints
- Must not use standard library functions like `printf`, `sprintf`, or `snprintf`.
- Functions should be properly modularized and memory-efficient.
- Edge cases and error handling should be considered.

## Testing
Run various test cases to ensure correct behavior:
```c
ft_printf("Character: %c\n", 'A');
ft_printf("String: %s\n", "Hello, world!");
ft_printf("Integer: %d\n", 42);
ft_printf("Hex: %x\n", 255);
```

