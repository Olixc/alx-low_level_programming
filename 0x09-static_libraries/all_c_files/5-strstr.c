#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * *_strstr - Locates a substring
 * @haystack: The string to search in.
 * @needle: The substring to find.
 *
 * Return: Pointer to the beginning of the
 *	found substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (!needle[j])
			return (haystack + i);
	}

	return (NULL);
}
