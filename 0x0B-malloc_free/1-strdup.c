#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - returns a pointer to a newly
 *	allocated space in memory.
 * @str: copy of string
 *
 * Return: pointer to newly allocaed memory.
 */
char *_strdup(char *str)
{
	size_t i, len;
	char *strcpy;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;

	strcpy = malloc(sizeof(char) * len);

	if (strcpy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		strcpy[i] = str[i];
	}

	return (strcpy);
}
