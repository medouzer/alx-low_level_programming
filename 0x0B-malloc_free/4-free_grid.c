#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid
 * @grid: is the grid to free
 * @height: is the hieght of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
