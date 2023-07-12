#include "main.h"

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len++] = src[i];

	dest[dest_len] = '\0';

	return (dest);
}

