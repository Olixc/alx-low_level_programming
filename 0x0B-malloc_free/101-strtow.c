#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * **strtow - split strings into words
 * @str: the string to split to words
 *
 * Return: pointer to an array
 */
char **strtow(char *str)
{
	char **A, *word;
	size_t i, j, len, word_count;

	word_count = 0;
	j = 0;

	len = strlen(str);

	if (str == NULL || *str == '\0')
		return (NULL);

	A = malloc(sizeof(char *) * (len + 1));

	if (A == NULL)
		return (NULL);
	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
	{
		free(A);
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && str[i] != '\0')
			word[j++] = str[i];
		else if (j != 0)
		{
			word[j] = '\0';
			A[word_count++] = strdup(word);
			j = 0;
		}
	}
	if (j != 0)
	{
		word[j] = '\0';
		A[word_count++] = strdup(word);
	}
	A[word_count] = NULL;
	free(word);
	return (A);
}
