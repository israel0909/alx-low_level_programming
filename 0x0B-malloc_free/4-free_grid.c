#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid in alloc_grid.c
 * @grid: 2D grid
 * @height: height of grid
 * Return: Freed memory in alloc_grid.c
 */

void free_grid(int **grid, int height)
{
	/*var 4 count*/
	int x;

	/*free grid[h]*/
	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	/*free grid*/
	free(grid);
}
