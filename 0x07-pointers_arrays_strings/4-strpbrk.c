#include "main.h"
#include <stddef.h>
/**
 * *_strpbrk - searches for any string of any set of bytes
 * @s: String s of any byte
 * @accept: 
 *
 * Return: pointer to s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}