#include "main.h"

/**
 * wildcmp - Compares two strings considering the special character '*'
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0') /* Base case: Both strings are empty */
		return (1);

	if (*s2 == '*') /* Special case: '*' can replace any string */
	{
		if (*s1 == '\0' && *(s2 + 1) == '\0')
/* If s1 is empty and s2 has only '*', they are considered identical */
			return (1);
		if (*s1 == *s2 && wildcmp(s1 + 1, s2 + 1))
		/* Recursive call to check if rest of the strings match */
			return (1);
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
	/* Recursive call to check if '*' replaces current character in s2 */
			return (1);
		return (0);
	}

	if (*s1 == *s2 && wildcmp(s1 + 1, s2 + 1))
		/* Recursive call to check if current characters match */
		return (1);

	return (0);
}

