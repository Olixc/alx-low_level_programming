#include <stdio.h>

/**
 * main - program that prints all possible combinations of threee-digit numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{

				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');

				if (i == 7 && j == 8 && k == 9)
					continue;
				putchar(',');
				putchar(' ');
			}

		}
	}

	putchar('\n');
	return (0);
}
