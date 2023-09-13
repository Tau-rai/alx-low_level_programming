#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: pointer to an array
 * @size: size of an array
 * @cmp: pointer to a function
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (size <= 0)
		return (-1);
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}
