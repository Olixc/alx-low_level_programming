#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: vector that contains the positive numbers to add.
 *
 * Return: Alwahys zero
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int sum = 0;
	char **ptr = argv + 1;

	while (*ptr)
	{
		if (!isdigit(**ptr))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(*ptr);
		ptr++;
	}
	printf("%d\n", sum);
	return (0);
}
