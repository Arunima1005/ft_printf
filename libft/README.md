*This project has been created as part of the 42 curriculum by archowdh.*

# Libft

Welcome to my implementation of `Libft`, my first project at 42 that replicate many functions from the C standard library. This project was a great opportunity to improve my understanding of _memory management_, _string manipulation_, _file descriptor_ and _data structure - linked list_ implementation in C.

## Description

The goal of this project was to replicate standard library in C, including:
- Standard functions like `isdigit`,`memcpy`, `strlen`, `itoa`, `calloc`, `strdup`, etc.
- String, memory, and file operations.
- Data structure Linked List implemantations.

We get chance to learn making library using Makefile, Header file and Custom Functions in C. 

This library can be reused in future C projects at 42.

## Project Structure
```
libft
- ft_*.c	# All functions named with ft_
- libft.h	# Header file
- Makefile	# Project build instructions
```
## Functions Implemented

### Functions to check and manipulate characters: 

- **ft_isalpha**: Checks if a character is an alphabetic letter (A-Z or a-z).
- **ft_isdigit**: Checks if a character is a digit (0-9).
- **ft_isalnum**: Checks if a character is alphanumeric (alphabetic letter or digit).
- **ft_isascii**: Checks if a character is an ASCII character (0–127).
- **ft_isprint**: Checks if a character is printable, including space.
- **ft_toupper**: Converts a lowercase letter to uppercase.
- **ft_tolower**: Converts an uppercase letter to lowercase.

### Functions to manipulate Strings

- **ft_strlen**: Returns the length of a string (excluding the null terminator).
- **ft_strlcpy**: Copies a string to a buffer of a given size, ensuring null-termination.
- **ft_strlcat**: Appends a string to another, with buffer size checks.
- **ft_strchr**: Returns a pointer to the first occurrence of a character in a string.
- **ft_strrchr**: Returns a pointer to the last occurrence of a character in a string.
- **ft_strncmp**: Compares two strings up to a given number of characters.
- **ft_strnstr**: Locates a substring in a string, searching up to a given length.
- **ft_substr**: Extracts a substring from a string, given start index and length.
- **ft_strjoin**: Concatenates two strings into a newly allocated string.
- **ft_strtrim**: Trims characters from the start and end of a string.
- **ft_split**: Splits a string into an array of strings using a delimiter.
- **ft_strmapi**: Applies a function to each character of a string to create a new string.
- **ft_striteri**: Applies a function to each character of a string, modifying it in place.

### Functions to manipulate memory

- **ft_calloc**: Allocates and zeros memory for an array.
- **ft_strdup**: Duplicates a string by allocating new memory.
- **ft_memchr**: Scans memory for a specific byte.
- **ft_memcmp**: Compares two blocks of memory.
- **ft_memset**: Fills a block of memory with a specified byte.
- **ft_bzero**: Sets a block of memory to zero bytes.
- **ft_memcpy**: Copies a block of memory from source to destination.
- **ft_memmove**: Copies memory safely, handling overlapping regions.

### Functions for string number conversion

- **ft_itoa**: Converts an integer to its string representation.
- **ft_atoi**: Converts a string to an integer.

### Functions to write read to file descriptor

- **ft_putchar_fd**: Writes a character to a given file descriptor.
- **ft_putstr_fd**: Writes a string to a given file descriptor.
- **ft_putendl_fd**: Writes a string followed by a newline to a file descriptor.
- **ft_putnbr_fd**: Writes an integer to a given file descriptor.

### Functions for Linked List

- **ft_lstnew**: Creates a new list node with given content and sets next to NULL.
- **ft_lstadd_front**: Adds a node to the beginning of the list.
- **ft_lstadd_back**: Adds a node to the end of the list.
- **ft_lstsize**: Counts and returns the number of nodes in the list.
- **ft_lstlast**: Returns the last node of the list.
- **ft_lstdelone**: Frees a single node using a provided delete function for its content.
- **ft_lstclear**: Deletes and frees all nodes in the list and sets the list pointer to NULL.
- **ft_lstiter**: Applies a function to the content of each node in the list.
- **ft_lstmap**: Creates a new list by applying a function to each node’s content of the original list.

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
This will compile all ft_*.c files and create library named `libft.a`.

### 3. Library Usage

You can include this library in your future C project and reuse every function.

```
#include "libft.h"
```

## Resources

The Libft project builds a custom version of the C standard library, so official documentation like the *Linux man-pages* is an essential reference for understanding expected function behavior (calloc, strlen, strcpy, memcpy etc.).Online learning platforms like *GeeksforGeeks* (https://www.geeksforgeeks.org/c/c-programming-language/) and *TutorialsPoint* (https://www.tutorialspoint.com/cprogramming/index.htm) offer practical explanations and examples for implementing standard functions. To ensure thorough testing of each function, AI was used to identify a wide range of edge cases. This included handling scenarios such as null pointers, empty strings, boundary values, memory allocation failures, and unexpected inputs.

## Author

**Arunima Chowdhury**

Codam Amsterdam

