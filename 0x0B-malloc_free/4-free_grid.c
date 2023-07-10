#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - free 2 dimensional array previously created.
 * @grid: grid
 * @height: grid height
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
	}

	free(grid);
}
