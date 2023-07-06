#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: The string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0') /* Base case: end of string */
		return (0);

	return (1 + _strlen(s + 1));
	/* Recursive call to calculate length of remaining string */
}

/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome
 * @s: The string to be checked
 * @start: The start index
 * @end: The end index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end) /* Base case: All characters have been compared */
		return (1);

	if (s[start] != s[end])
	/* Base case: Characters at start and end indices do not match */
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
	/* Recursive call to check next characters */
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}

