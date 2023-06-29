#include "main.h"

/**
 * *leet - encoe a string into 13307
 * @s: The string value.
 *
 * Return: s
 */
char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if (s[i] == 'A' || s[i] == 'a')
			{
					s[i] = '4';
			}

			else if (s[i] == 'E' || s[i] == 'e')
				s[i] = '3';

			else if (s[i] == 'O' || s[i] == 'o')
				s[i] = '0';

			else if (s[i] == 'T' || s[i] == 't')
				s[i] = '7';

			else if (s[i] == 'L' || s[i] == 'l')
				s[i] = '1';
		}

		i++;
	}

	return (s);
}
