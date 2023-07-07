#include "main.h"
#include <string.h>

/**
 * *cap_string - caplitalize each word in a string
 * @s: The string value.
 *
 * Return: capitalize string
 */

char *cap_string(char *s)
{
	int i = 0;
	const char *delimiters = " \t\n,;.!?\"(){}";

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - ('a' - 'A');

	i++;

	while (s[i] != '\0')
	{
		if (strchr(delimiters, s[i]) != NULL)
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - ('a' - 'A');
			}
		}
		else
			i++;
	}

	return (s);
}
