#include "main.h"

/***
 * alloc_grid -> create Pointer to pointers of 2D int array
 * @width: First Param
 * @height: Second Param
 * Return : On success int pointer to pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	if (width == 0 || height == 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return NULL;

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(grid[k]);

			free(grid);
			return NULL;
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
