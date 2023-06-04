#include "main.h"

/**
 * free_grid - frees memory allocated to a 2 dimensional grid
 * @grid: grid to free
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}

	free(grid);
}
