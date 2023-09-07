#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: integer value
 * @max: integer value
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *arr;
	int k;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (k = 0; k <= (max - min); k++)
	{
		*(arr + k) = min + k;
	}
	return (arr);
}
