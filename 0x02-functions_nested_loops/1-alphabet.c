#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This is the entry point of the program. It calls the
 *              print_alphabet function to print all the lowercase
 *              letters of the alphabet from 'a' to 'z', followed by
 *              a newline character.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
    print_alphabet();
    return (0);
}

/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Description: This function prints all the lowercase letters of the alphabet,
 *              from 'a' to 'z', followed by a newline character.
 *
 * Return: None
 */
void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        _putchar(letter);
    }
    _putchar('\n');
}

