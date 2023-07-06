#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to find the factorial of
 *
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n < 0) /* Base case: n is lower than 0 */
		return (-1);

	if (n == 0) /* Base case: n is 0 */
		return (1);

	return (n * factorial(n - 1)); /* Recursive call with n - 1 */
}

