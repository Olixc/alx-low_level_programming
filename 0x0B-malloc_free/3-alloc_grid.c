#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * **alloc_grid - create function of 2 dimensional array of integers.
 * @width: grid width
 * @height: grid height
 *
 * Return: pointer to 2 dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}

			free(grid);
			return (NULL);
		}


		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
