#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints a 2D array
 * @width: width of the array
 * @height: height of the array
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int k;
	int **arr = (int **)malloc(height * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		arr[k] = (int *)malloc(width * sizeof(int));
		if (arr[k] == NULL)
		{
			while (--k >= 0)
				free(arr[k]);
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
