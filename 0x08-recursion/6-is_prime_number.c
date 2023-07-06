#include "main.h"

/**
 * is_prime_helper - Helper function to check if a number is prime recursively
 * @n: The number to be checked
 * @i: The divisor to check divisibility with
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_helper(int n, int i);

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to be checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1) /* Base case: n is less than or equal to 1 */
		return (0);

	return (is_prime_helper(n, 2)); /* Call the helper function */
}

/**
 * is_prime_helper - Helper function to check if a number is prime recursively
 * @n: The number to be checked
 * @i: The divisor to check divisibility with
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n % i == 0) /* Base case: n is divisible by i */
	{
		if (n == i) /* If n is equal to i, n is prime */
			return (1);
		else /* If n is not equal to i, n is not prime */
			return (0);
	}

	return (is_prime_helper(n, i + 1)); /* Recursive call with next divisor */
}

