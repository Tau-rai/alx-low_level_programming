#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: the number of elementts in array
 * @value: the value to search for
 * Return: the first index where value is locateed
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t low, upper, i;

	if (array == NULL)
		return (-1);

	/* finding the block where the element is */
	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		low = prev;
		prev += step;
	}
	/* set the bounds for the block */
	upper = (prev < size) ? prev : size;

	printf("Value found between indexes [%lu] and [%lu]\n", low, upper);

	/* perfoming a linear search for value */
	for (i = low; i < upper; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
