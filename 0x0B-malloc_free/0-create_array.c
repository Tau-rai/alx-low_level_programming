#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: initial value of char
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;/* = malloc(size * sizeof(char));*/

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
