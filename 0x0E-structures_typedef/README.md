# 0x0E-structures_typedef

This repository contains C programs that demonstrate the usage of structures and typedef in the C programming language.

## Files

- `dog.h`: This header file defines the `struct dog` type, representing a dog with the members `name`, `age`, and `owner`. It also defines a new type `dog_t` as an alias for `struct dog`.

- `1-init_dog.c`: This file contains the implementation of the function `init_dog`, which initializes a variable of type `struct dog` with the provided values for `name`, `age`, and `owner`.

- `2-print_dog.c`: This file contains the implementation of the function `print_dog`, which prints the members of a `struct dog` variable. If any member is `NULL`, it prints `(nil)` instead.

- `4-new_dog.c`: This file contains the implementation of the function `new_dog`, which creates a new dog with the given `name`, `age`, and `owner`. It stores copies of `name` and `owner`, and returns a pointer to the newly created dog. If the function fails, it returns `NULL`.

- `5-free_dog.c`: This file contains the implementation of the function `free_dog`, which frees the memory allocated for a `struct dog` variable, including the `name` and `owner` strings.

- `3-main.c`, `1-main.c`, `2-main.c`, `4-main.c`, `5-main.c`: These are example main programs that demonstrate the functionality of the corresponding functions.

## Usage

To compile and run the programs, use the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 file.c -o output_file
./output_file
```

Replace `file.c` with the name of the C file you want to compile and run, and `output_file` with the desired name of the output executable.

Make sure to include all the necessary C files for the corresponding main program, such as including `dog.h` when using `1-init_dog.c`.

## Examples

```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    // Example usage of init_dog
    struct dog my_dog;
    init_dog(&my_dog, "Fido", 2.5, "John");
    printf("My name is %s, and I am %.1f years old - Woof!\n", my_dog.name, my_dog.age);

    // Example usage of print_dog
    print_dog(&my_dog);

    // Example usage of new_dog
    dog_t *new_d = new_dog("Buddy", 1.5, "Alice");
    if (new_d != NULL)
    {
        printf("My name is %s, and I am %.1f years old - Woof!\n", new_d->name, new_d->age);
        print_dog(new_d);
    }

    // Example usage of free_dog
    free_dog(new_d);

    return (0);
}
```

## Note

These programs are intended for educational purposes and may not cover all possible edge cases or error handling. They are meant to illustrate the basic usage of structures and typedef in C.
