#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: vector that contains the positive numbers to add.
 *
 * Return: Always zero
 */
int main(int argc __attribute__((__unused__)), char *argv[])
{
	int sum = 0;
	char **ptr = argv + 1;

	while (*ptr)
	{
		if (!isdigit(**ptr))
		{
			puts("Error");
			return (1);
		}
		sum += atoi(*ptr);
		ptr++;
	}
	printf("%d\n", sum);
	return (0);
}
