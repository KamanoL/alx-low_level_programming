#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory allocated to grid
 * @grid: memory to freed
 * @height: of the grid
 * Return: grid (Success) else NULL (Error)
 */

void free_grid(int **grid, int height)
{
	int t;

	for (t = 0; t < height; ++t)
		free(grid[t]);

	free(grid);
}
