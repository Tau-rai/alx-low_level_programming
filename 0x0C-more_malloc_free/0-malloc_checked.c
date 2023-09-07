#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer value
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b * sizeof(int));

	if (ptr == NULL)
	{
		exit(98);
	}
	else
		return (ptr);

	return (0);
}
