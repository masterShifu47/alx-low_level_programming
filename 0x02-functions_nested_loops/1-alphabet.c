#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description:print_alphabet prints all the lowercase letters of the alphabet,
 * from 'a' to 'z', followed by a newline character.
 * print_alphabet - Prints the lowercase alphabet
 * Return: none
 */
/* print_alphabet - Prints the lowercase alphabet */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

