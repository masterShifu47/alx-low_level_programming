# Debugging

This directory contains solutions for debugging exercises in the context of software development. The exercises focus on identifying and fixing errors in code to ensure proper functionality.

## List of Files

1. `0-main.c`: This file tests the `positive_or_negative()` function by passing the value 0 and verifies if the correct output is generated.
2. `1-main.c`: This file contains a code snippet that results in an infinite loop. The task is to comment out the problematic code to prevent the infinite loop while maintaining the desired output.
3. `2-main.c`: This file tests the `largest_number()` function, which is responsible for finding the largest among three given integers. The task is to fix the code so that it correctly identifies the largest number in any scenario.
4. `2-largest_number.c`: This file contains the implementation of the `largest_number()` function, which needs to be fixed based on the task requirements.
5. `3-main_a.c`: This file tests the `convert_day()` and `print_remaining_days()` functions by providing a specific date. The goal is to determine the number of days left in the year, accounting for leap years.
6. `3-main_b.c`: This file tests the `print_remaining_days()` function with a leap year date (February 29th). The current implementation fails to handle this scenario correctly.
7. `3-convert_day.c`: This file contains the implementation of the `convert_day()` function, which converts the day of a given month into the day of the year without considering leap years.
8. `3-print_remaining_days.c`: This file contains the implementation of the `print_remaining_days()` function, which calculates and prints the number of days remaining in a year, accounting for leap years. This implementation needs to be fixed according to the task requirements.

## How to Use

To test the code files, follow these steps:

1. Compile the code files using an appropriate compiler (e.g., gcc):
   ```
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file_name.c> -o <output_file>
   ```

2. Execute the compiled program:
   ```
   ./<output_file>
   ```

   The program will display the output based on the specific task of each code file.

## Author

This directory is implemented and maintained by Mac-collins Lawal
