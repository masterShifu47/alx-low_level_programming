#include <stdlib.h>
#include <stdio.h>

int count_words(char *str);
int word_length(char *str);
char **free_memory(char **words, int count);

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of strings (words),
 *         or NULL if str == NULL or str == "" or if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count, len, word_len;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < word_count; i++)
	{
		while (str[j] == ' ')
			j++;
		word_len = word_length(&str[j]);
		words[i] = malloc(sizeof(char) * (word_len + 1));
		if (words[i] == NULL)
			return (free_memory(words, i));
		len = 0;
		for (k = 0; k < word_len; k++, j++)
			words[i][k] = str[j];
		words[i][k] = '\0';
	}

	words[i] = NULL;
	return (words);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}

	return (count);
}

/**
 * word_length - Calculates the length of a word.
 * @str: The string containing the word.
 *
 * Return: The length of the word.
 */
int word_length(char *str)
{
	int len = 0;

	while (str[len] != ' ' && str[len] != '\0')
		len++;

	return (len);
}

/**
 * free_memory - Frees the allocated memory.
 * @words: The array of words.
 * @count: The number of words.
 *
 * Return: NULL.
 */
char **free_memory(char **words, int count)
{
	int i;

	for (i = 0; i < count; i++)
		free(words[i]);

	free(words);
	return (NULL);
}

