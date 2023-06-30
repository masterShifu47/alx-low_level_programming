#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to capitalize
 *
 * Return: The capitalized string
 */
char *cap_string(char *str)
{
	int i;
	int capitalize_next = 1; /*Capitalize the first character*/

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
	str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalize_next = 1;
		}
		else if (capitalize_next && islower(str[i]))
		{
			str[i] = toupper(str[i]);
			capitalize_next = 0;
		}
		else
		{
			capitalize_next = 0;
		}
	}

	return (str);
}

