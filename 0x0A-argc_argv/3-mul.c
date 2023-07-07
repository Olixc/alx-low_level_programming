#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - multiplies two number
 * @argc: To return failure if arg. is != 3.
 * @argv: Where to get the two numbers from.
 *
 * Return: result of two argv(values). i.e
 */
int main(int argc, char *argv[])
{

	int result = 1;
	char **ptr = argv + 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	while (*ptr)
	{
		result *= atoi(*ptr);
		ptr++;
	}

	printf("%d\n", result);
	return (0);
}
