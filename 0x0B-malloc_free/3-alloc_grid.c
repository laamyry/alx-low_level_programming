#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: array's width.
 * @height: array's height.
 * Return: returns a pointer,  return NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int n, m;

	if (width < 1 || height < 1)
	{
		return (0);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == 0)
	{
		free(grid);
		return (0);
	}

	for (n = 0; n < height; n++)
	{
		grid[n] = malloc(width * sizeof(int));
		if (grid[n] == 0)
		{
			for (n--; n >= 0; n--)
			{
				free(grid[n]);
			}
			free(grid);
			return (0);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
		{
			grid[n][m] = 0;
		}
	}
	return (grid);
}
