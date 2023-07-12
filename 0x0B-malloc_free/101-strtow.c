#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] && str[i] != ' ')
				i++;
		}
		else
			i++;
	}

	return (count);
}

/**
 * allocate_memory - Allocates memory for words array
 * @str: The input string
 * @word_count: The number of words
 *
 * Return: Pointer to the allocated memory
 */
char **allocate_memory(char *str, int word_count)
{
	char **words;
	int i;

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < word_count; i++)
	{
		words[i] = malloc(sizeof(char) * (strlen(str) + 1));
		if (words[i] == NULL)
		{
			while (i >= 0)
				free(words[i--]);
			free(words);
			return (NULL);
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: If str == NULL, str == "", or the function fails - NULL.
 *         Otherwise - a pointer to a 2D array of strings (words).
 */
char **strtow(char *str)
{
	char **words;
	int i, j = 0, k = 0, word_count = 0, word_len = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = count_words(str);

	words = allocate_memory(str, word_count);
	if (words == NULL)
		return (NULL);

	for (i = 0; i < word_count; i++)
	{
		while (str[j] == ' ')
			j++;

		word_len = 0;
		while (str[j + word_len] && str[j + word_len] != ' ')
			word_len++;

		strncpy(words[i], &str[j], word_len);
		words[i][word_len] = '\0';
		j += word_len;
	}

	words[i] = NULL;

	return (words);
}

