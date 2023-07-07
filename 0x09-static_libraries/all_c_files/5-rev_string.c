#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * rev_string - reverse string.
 * @s: The string value.
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char *rev_str;
	int str_length = strlen(s);

	rev_str = malloc((str_length + 1) * sizeof(char));

	if (rev_str == NULL)
		return;

	for (i = str_length - 1, j = 0; i >= 0; i--, j++)
	{
		rev_str[j] = s[i];
	}

	rev_str[j] = '\0';

	strcpy(s, rev_str);
	free(rev_str);
}
