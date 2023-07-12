# 0x09-static_libraries

This directory contains C programs and scripts related to static libraries in the context of low-level programming.

## Description

In this project, we explore the concept of static libraries in the C programming language. Static libraries are collections of precompiled functions and procedures that can be linked with programs at compile time. They provide a way to reuse code across multiple projects, resulting in modular and efficient code organization.

The directory contains the following files and directories:

- `create_static_lib.sh`: A shell script that creates a static library (`liball.a`) from all the `.c` files in the current directory.
- `libmy.a`: A static library created as an example, containing various functions implemented in separate source files.
- `main.h`: A header file that contains function prototypes for the functions implemented in the `libmy.a` library.
- `main.c`: An example program that uses functions from the `libmy.a` library.

## Compilation

To compile the programs and create the static library, you can use the following commands:
gcc -c *.c


Make sure to replace `program` with the desired executable name.

## Usage

After compilation, you can run the program using the generated executable. For example:


Feel free to modify the code, create your own functions, or add additional source files to explore and experiment with static libraries.

## Author

This directory is created and maintained by  Mac-collins Lawal. Any questions or suggestions can be directed to m.collinsdeone@gmail.com.

