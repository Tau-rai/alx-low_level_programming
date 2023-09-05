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
	int k, j;
	int **arr; /*= malloc(height * sizeof(int));*/

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		arr[k] = malloc(width * sizeof(int));
		if (arr[k] == NULL)
		{
			/*while (--k >= 0)
			{
				free(arr[k]);
			}
			free(arr);*/

			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[k][j] = 0;
		}
	}
	return (arr);
}
