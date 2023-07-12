#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	print_name();
	return (0);
}

/**
 * print_name - Prints the name of the program
 */
void print_name(void)
{
	int i = 0;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');
}

