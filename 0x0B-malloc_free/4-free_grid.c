#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: pointer to the 2D array
 * @height: 2D array height
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
