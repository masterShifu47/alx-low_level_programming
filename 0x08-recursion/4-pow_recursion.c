#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base value
 * @y: The exponent value
 *
 * Return: The result of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /* Base case: y is lower than 0 */
		return (-1);

	if (y == 0) /* Base case: y is 0 */
		return (1);

	return (x * _pow_recursion(x, y - 1)); /* Recursive call with y - 1 */
}

