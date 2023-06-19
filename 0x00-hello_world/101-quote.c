#include <unistd.h>

/**
 * main - Entry point
 * prints out text
 * Return: Always 1 (Failure)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - ", 36);
	write(2, "Dora Korpar, 2015-10-19\n", 25);
	return (1);
}

