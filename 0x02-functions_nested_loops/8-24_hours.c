#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Print every minute of the dy
 *
 * Return: Print the minutes
 */

void jack_bauer(void)
{

	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	while (i <= 2)
	{
		while (j <= 3)
		{
			while (k <= 5)
			{
				while (l <= 9)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
					l++;
				}
				l = 0;
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
}
