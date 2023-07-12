#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
			len++;
		total_len += len + 1;
	}

	str = malloc(sizeof(char) * total_len + 1);

	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
			str[k] = av[i][len];
			len++;
			k++;
		}
		str[k] = '\n';
		k++;
	}

	str[k] = '\0';

	return (str);
}

