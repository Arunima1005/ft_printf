*This project has been created as part of the 42 curriculum by archowdh.*

# ft_printf

This is my implementation of `ft_printf`, which I have re-created the functionality of the standard `printf` function in C. This project gave me hands-on experience with variadic functions, manual type conversion, and output formatting, while reinforcing modular programming practices in C.

---
## Description

The goal of this project was to replicate standard `printf` function from scratch. This includes:

- Parsing a format string.
- Handling a variable number of arguments.
- Coverting different data types to formatted output.
- Wrtiting each output character manually.

This library compiles into a static library `libftprintf.a`, which can be reused in future C projects.

---
##  Supported Format Specifiers

| Specifier | Description |
|----------|-------------|
| `%c`     | Print a single character |
| `%s`     | Print a string |
| `%d` / `%i` | Print a signed decimal integer |
| `%u`     | Print an unsigned decimal integer |
| `%x`     | Print an unsigned hexadecimal (lowercase) |
| `%X`     | Print an unsigned hexadecimal (uppercase) |
| `%p`     | Print a pointer (as hexadecimal with `0x` prefix) |
| `%%`     | Print a literal percent sign |

---

## Project Structure

```
ft_printf/
├── ft_printf.c          		# Main printf logic and format parser
├── ft_printf.h          		# Header file with declarations and macros
├── ft_printf_putchar.c      	# Writes a single character
├── ft_printf_putstr.c       	# Writes a string
├── ft_printf_putnbr.c       	# Converts and prints signed integers
├── ft_printf_putunsign.c      	# Converts and prints unsigned integers
├── ft_printf_puthex.c       	# Converts and prints hex numbers
├── ft_printf_putptr.c       	# Converts and prints pointers (with "0x" prefix)
├── Makefile             		# Build rules for compiling the static library
└── libft/               		# My custom implementation of C standard library functions
```

---

## Instructions

### 1. Clone Repository
```
git clone <git link.git>
cd <inside the git repository>

```
### 2. Build The Library

```
make
```
This will compile all `.c` files and produce the static library `libftprintf.a`. It also builds `libft` as a dependency.

### 3. Library Usage

You can include this library in your future C project and reuse every function.

In your C file:

```
#include "ft_printf.h"

```

To compile:

<pre> gcc -Wall -Wextra -Werror main.c libftprintf.a -I. -Ilibft </pre>

## Resources

The ft_printf project involves recreating the behavior of the standard C printf function, so official documentation such as the Linux man-pages is a crucial reference for understanding how formatted output and conversions (like %d, %s, %x, %p, etc.) are expected to work. Learning resources like GeeksforGeeks (https://www.geeksforgeeks.org/c/c-programming-language/) and TutorialsPoint (https://www.tutorialspoint.com/cprogramming/index.htm) provide clear explanations and examples of format specifiers, variadic functions (va_list, va_start, va_arg, va_end), and output formatting techniques. To ensure correctness, AI was used to explore a wide range of edge cases, including handling null pointers, zero values, negative numbers, large integers, format strings etc.

## Author

**Arunima Chowdhury**

Codam Amsterdam
