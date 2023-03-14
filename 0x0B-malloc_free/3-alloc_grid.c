#include "main.h"

/**
 * alloc_grid -  function that returns a pointer to a 2D array
 * @width: width of 2D
 * @height: height of 2D
 * Return: 2D / NULL
 */

int **alloc_grid(int width, int height)
{
	/*3vars for h, w and grid*/
	int h = 0;
	int w = 0;
	int **grid;

	/*If width or height is 0 or negative, return NULL*/
	if (height <= 0 || width <= 0)
		return (NULL);

	/*malloc grid*/
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);

		if (grid[h] == NULL)
		{
			for (; grid >= 0; h--)
				free(grid[h]);

			free(grid);
			return (NULL);
		}
	}

	/* initailize h & w to 0*/
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}
	/*return grid*/
	return (grid);
}
