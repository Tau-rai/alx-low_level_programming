#include "function_pointers.h"

/**
 * array_iterator - iterates through an array of integers
 * @array: pointer to an array
 * @size: size of the array
 * @action: pointer to a function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
