#include "main.h"
#include <string.h>

/**
 * *_strncat - Concatenates two string
 * @dest: first string vlue.
 * @src: second string value.
 * @n: size or bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
