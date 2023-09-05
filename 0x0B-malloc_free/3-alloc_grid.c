#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - prints a 2D array
 * @width: width of the array
 * @height: height of the array
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int k;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		arr[k] = malloc(width * sizeof(int));
		if (arr[k] == NULL)
		{
			for (; k >= 0; k--)
			{
				free(arr[k]);
			}
			free(arr);

			return (NULL);
		}
		memset(arr[k], 0, width * sizeof(int));
	}
	return (arr);
}
