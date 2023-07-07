#include "main.h"

/**
 * *leet - encoe a string into 13307
 * @s: The string value.
 *
 * Return: s
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char *letters = "aAeEoOtTlL";
	char *leet_nums = "4433007711";

	while (s[i] != '\0')
	{
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
				s[i] = leet_nums[j];

			j++;
		}

		i++;
		j = 0;
	}

	return (s);
}
