#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid previously created.
 *
 * @grid: memory block.
 * @height: array's height.
 * Return:returns nothing
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
