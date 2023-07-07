#include <stdio.h>
#include <string.h>

/**
 * main - prints all arguements it received.
 * @argc: Argument positional index.
 * @argv: The arguments to print
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	char **ptr = argv;

	while (*ptr)
	{
		printf("%s\n", *ptr);
		ptr++;
	}

	return (0);
}
