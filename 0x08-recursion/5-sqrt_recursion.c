#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return:The square root of n, or -1 if it does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Base case: n is negative */
		return (-1);

	return (sqrt_helper(n, 0)); /* Call the helper function */
}

/**
 * sqrt_helper - Helper function to find the square root recursively
 * @n: The number to find the square root of
 * @i: The current number to check as a possible square root
 *
 * Return:The square root of n, or -1 if it does not have a natural square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n) /* Base case: i*i is greater than n */
		return (-1);

	if (i * i == n) /* Base case: i*i is equal to n */
		return (i);

	return (sqrt_helper(n, i + 1));
	/* Recursive callwith next possible square root */
}

