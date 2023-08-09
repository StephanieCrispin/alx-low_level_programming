#include "main.h"

/**
 * free_grid -> Frees a 2D Array grid
 * @grid: First Param
 * @height: Second Param
 * Return: returns freed
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}
