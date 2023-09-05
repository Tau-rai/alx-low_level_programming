#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory allocation of the alloc_grid func
 * @grid: pointer to a 2D array
 * @height: height of an array
 * Return: Always 0.
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
