#include "search_algos.h"

void print_array(int *array, size_t size);
int binary_search(int *array, size_t size, int value);
/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: the number of elementts in array
 * @value: the value to search for
 * Return: the first index where value is locateed
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t low, high;

	if (array[0] == value)
		return (0);

	/* find range of binary search through repeated doubling */
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		low = i;
		i = i * 2;
	}
	/* set the bounds for the block */
	high = (i < size) ? i : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search(array, high, value));
}
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: the number of elementts in array
 * @value: the value to search for
 * Return: the first index where value is locateed
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, mid;
	size_t j = size - 1;

	if (array == NULL)
		return (-1);

	while (i <= j)
	{
		print_array(array + i, j - i + 1);
		mid = i + (j - i) / 2;

		/* check if value is present at mid */
		if (array[mid] == value)
			return (mid);

		/* if value is greater, ignore left half */
		if (array[mid] < value)
			i = mid + 1;

		/* if value is smaller, ignore right half */
		else
			j = mid - 1;
	}
	return (-1);
}
/**
 * print_array - prints the array being searched in
 * @array: pointer to the first element of the array
 * @size: size of the array
 * Return: Nothing
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}
