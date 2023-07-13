#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string one.
 * @s2: string two.
 * @n: string two nbytes.
 *
 * Return: pointer to newly allocated space in memeory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int i, j, len1, len2;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n < len2)
		len2 = n;

	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat_str[i + j] = s2[j];

	concat_str[len1 + len2] = '\0';

	return (concat_str);
}
