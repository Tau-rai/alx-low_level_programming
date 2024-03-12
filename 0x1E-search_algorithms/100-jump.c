#include "search_algos.h"
#include <math.h>

size_t min(int a, int b);
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
	size_t low, upper;

	/* finding the block where the element is */
	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}
	/* set the bounds for the block */
	low = (prev == 0) ? 0 : prev - sqrt(size) + 1;
	upper = prev;

	printf("Value found between indexes [%lu] and [%lu]\n", low, upper);

	/* perfoming a linear search for value */
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == min(step, size))
			return (-1);

	}
	/* if element if found or search ends */
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
		return (prev);

	return (-1);
}
/**
 * min - find the minmun of two integers
 * @a: an integer
 * @b: an integer
 * Return: the min integer
 */
size_t min(int a, int b)
{
	if (b > a)
		return (a);
	else
		return (b);
}
