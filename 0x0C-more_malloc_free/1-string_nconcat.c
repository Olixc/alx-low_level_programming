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
	unsigned int i;


	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= strlen(s2) )
	{
		n = strlen(s2) + 1;
	}

	concat_str = malloc(sizeof(char) * (strlen(s1) + n));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(s1); i++)
	{
		concat_str[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		concat_str[strlen(s1) + i] = s2[i];
	}

	concat_str[strlen(s1) + i] = '\0';

	return (concat_str);

}
