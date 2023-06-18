#include <unistd.h>

/**
 * main - Entry point
 *Prints out error message
 * Return: Always 1 (Failure)
 */
int main(void)

{
	write(2, "and that piece of art is useful", 28);
	write(2, "\" - Dora Korpar, 2015-10-19\n", 31);
	return (1);
}

