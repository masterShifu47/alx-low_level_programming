# 0x07-pointers_arrays_strings

This directory contains solutions to programming tasks related to pointers, arrays, and strings. The tasks are part of the low-level programming curriculum, and they aim to reinforce understanding and application of these concepts in the C programming language.

## Files

The following files are present in this directory:

### 0-memset.c

This file contains the implementation of the `_memset` function, which fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `c`.

### 1-memcpy.c

This file contains the implementation of the `_memcpy` function, which copies `n` bytes from the memory area pointed to by `src` to the memory area pointed to by `dest`.

### 2-strchr.c

This file contains the implementation of the `_strchr` function, which locates the first occurrence of the character `c` in the string `s`.

### 3-strspn.c

This file contains the implementation of the `_strspn` function, which gets the length of a prefix substring. It returns the number of bytes in the initial segment of `s` that consist only of bytes from `accept`.

### 4-strpbrk.c

This file contains the implementation of the `_strpbrk` function, which searches a string for any of a set of bytes. It locates the first occurrence in the string `s` of any of the bytes in the string `accept`.

### 5-strstr.c

This file contains the implementation of the `_strstr` function, which locates a substring within a string. It finds the first occurrence of the substring `needle` in the string `haystack`.

### 6-print_chessboard.c

This file contains the implementation of the `print_chessboard` function, which prints a chessboard represented by a 2D array of characters.

### 7-print_diagsums.c

This file contains the implementation of the `print_diagsums` function, which prints the sum of the two diagonals of a square matrix of integers.

### main.h

This header file contains the function prototypes for all the functions implemented in the respective `.c` files. It should be included in the source files that implement the functions to ensure proper function declarations.

### _putchar.c

This file provides the implementation of the `_putchar` function, used for printing characters.

### [Task Name]-main.c

These are example main files that demonstrate the usage of the implemented functions for each respective task. They can be compiled and run to test the functionality of the functions.

## Usage

To compile the source files and run the example programs, you can use the following steps:

1. Navigate to the directory containing the source files.
2. Run the `gcc` command with the appropriate flags to compile the desired example program along with the required source files. For example, to compile `1-memcpy.c` with its corresponding `1-main.c` file, use the following command:
   ```
   gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-memcpy.c _putchar.c -o 1-memcpy
   ```
3. Execute the compiled program by running `./<executable>`. For example, to run the compiled `1-memcpy` program, use the following command:
   ```
   ./1-memcpy
   ```

Make sure to replace `<executable>` with the actual name of the compiled executable file.

## Author

This directory is authored and maintained by Mac-collins Lawal.
