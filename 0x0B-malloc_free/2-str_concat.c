#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, total_len, i;
	char *concat_str;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	total_len = len1 + len2;

	concat_str = malloc(sizeof(char) * (total_len + 1));


	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		concat_str[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		concat_str[len1 + i] = s2[i];
	}

	concat_str[total_len] = '\0';
	return (concat_str);
}
