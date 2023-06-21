#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		/* Print each letter of the alphabet */
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		/* Print a new line after each iteration */
		_putchar('\n');
	}
}

