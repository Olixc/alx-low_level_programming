#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character in a string.
 * @s: The string
 * @c: The character to locate
 *
 * Return: pointer to the first occurence of the char.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (1)
	{
		if (*(s + i) == c)
			return (&(s[i]));
		if (s[i] == 0)
			return (NULL);
		i++;
	}
}
