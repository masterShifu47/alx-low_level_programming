# argc_argv Directory

This directory contains C programs that demonstrate the usage of `argc` and `argv` in command line arguments handling.

## Files

The following files are present in this directory:

1. **0-whatsmyname.c**: This program prints the name of the program itself. It demonstrates how to access `argv[0]`.

2. **1-args.c**: This program prints the number of arguments passed into it. It showcases the use of `argc` and `argv` to count command line arguments.

3. **2-args.c**: This program prints all the arguments it receives. Each argument is printed on a separate line. It highlights the iteration over `argv` and the usage of `argc`.

4. **3-mul.c**: This program multiplies two numbers passed as command line arguments and prints the result. It demonstrates how to convert strings to integers using `atoi` and perform arithmetic operations.

5. **4-add.c**: This program adds positive numbers passed as command line arguments and prints the result. It showcases the usage of loops, conditionals, and error handling.

6. **100-change.c**: This program calculates the minimum number of coins needed to make change for an amount of money in cents. It illustrates the use of loops and conditional statements to calculate the number of coins.

## Usage

To compile these programs, you can use the following command:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <filename>.c -o <executable_name>
```

Replace `<filename>` with the name of the desired program file (e.g., `0-whatsmyname`) and `<executable_name>` with the desired name for the compiled executable.

To run the compiled program, use the following command:

```
./<executable_name> [arguments]
```

Replace `<executable_name>` with the name of the compiled executable.

For programs that require command line arguments, provide the required arguments after the executable name.

## Examples

Here are a few examples demonstrating the usage of the programs in this directory:

1. Running `./0-whatsmyname`:

   ```
   $ ./0-whatsmyname
   ./0-whatsmyname
   ```

2. Running `./1-args hello world`:

   ```
   $ ./1-args hello world
   3
   ```

3. Running `./2-args This is a sentence.`:

   ```
   $ ./2-args This is a sentence.
   ./2-args
   This
   is
   a
   sentence.
   ```

4. Running `./3-mul 10 5`:

   ```
   $ ./3-mul 10 5
   50
   ```

5. Running `./4-add 2 3 5`:

   ```
   $ ./4-add 2 3 5
   10
   ```

6. Running `./100-change 65`:

   ```
   $ ./100-change 65
   3
   ```

## Notes

Make sure to provide the correct number and type of command line arguments required by each program. Refer to the specific program's README or comments within the source code for more details on usage and behavior.

It's important to compile the programs with the necessary flags and standards to ensure proper compilation and adherence to coding standards.
