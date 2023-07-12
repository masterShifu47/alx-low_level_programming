# Malloc and Free

This directory contains C programs that demonstrate the usage of dynamic memory allocation and deallocation in C using the `malloc()` and `free()` functions. The programs cover various concepts related to memory management and showcase how to allocate memory for different data types, create dynamic arrays, and free the allocated memory when it is no longer needed.

## List of Programs

1. `0-create_array.c`: This program creates an array of characters and initializes it with a specific character.

2. `1-strdup.c`: This program returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

3. `2-str_concat.c`: This program concatenates two strings and returns a newly allocated concatenated string.

4. `3-alloc_grid.c`: This program returns a pointer to a 2-dimensional array of integers, with each element initialized to 0.

5. `4-free_grid.c`: This program frees a 2-dimensional grid previously created by the `alloc_grid` function.

6. `100-argstostr.c`: This program concatenates all the arguments of the program and returns a pointer to the concatenated string.

7. `101-strtow.c`: This program splits a string into words and returns a pointer to an array of strings (words).

## Getting Started

To compile the programs, use the following command format:
gcc -Wall -Wextra -Werror -pedantic <program_name.c> -o <output_file>


Replace `<program_name.c>` with the name of the program file you want to compile and `<output_file>` with the desired name for the output executable file.

To run a compiled program, use the following command format:



Replace `<output_file>` with the name of the compiled executable file.

## Contributions

Contributions to the repository are welcome. If you find any issues or have suggestions for improvement, feel free to create an issue or submit a pull request.

