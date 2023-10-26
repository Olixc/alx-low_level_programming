#include "main.h"

/**
* binary_to_uint - convert binary to an integer.
* @b: parameter to a pointer to the string.
*
* Return: converted number.
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		j += (b[(_strlen(b) - 1) - i] - '0') << i;
	}

	return (j);
}

/**
* _strlen - caluclate the length of the string
* @s: string parameter to calculate
* Return: length of string
*/
unsigned int _strlen(const char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
