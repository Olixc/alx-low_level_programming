#include "main.h"
#include <stddef.h>

/**
 * _strspn - get the length of a prefix substring.
 * @s: The string to get substring from
 * @accept: - The string of characters to compare against.
 *
 * Return: number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;	
			}
		}

		if (accept[j] == '\0')
			break;
	}

	return (i);
}
