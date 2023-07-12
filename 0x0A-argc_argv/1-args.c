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
	print_args(argc, argv);
	return (0);
}

/**
 * print_args - Prints the number of arguments
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 */
void print_args(int argc, char *argv[])
{
	int count = argc - 1;

	_putchar(count + '0');
	_putchar('\n');
}

