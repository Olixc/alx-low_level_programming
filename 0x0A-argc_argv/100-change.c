#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - prints the minimum number of min_coins to
 *          make change for an amount of money
 * @argc: Argument counts
 * @argv: Money value
 *
 * Return: Always void
 */

int main(int argc, char *argv[])
{
	int i, change, min_coin, amount;
	int cents[SIZE] = {25, 10, 5, 2, 1};

	i = 0;
	change = 0;
	min_coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	while (i < SIZE)
	{
		if (amount - cents[i] >= 0)
		{
			amount -= cents[i];
			change += cents[i];
			min_coin++;
		}
		else
			i++;
	}
	printf("%d\n", min_coin);
	return (0);
}
