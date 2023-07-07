#include <stdio.h>
#include <string.h>

/**
 * main - prints the number of argument passed into it.
 * @argc: The argument count to print.
 * @argv: arguement vector
 *
 * Return: always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
