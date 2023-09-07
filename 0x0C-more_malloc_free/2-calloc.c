#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: an unsigned int
 * @size: an unsigned int
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (k = 0; k < (nmemb * size); k++)
			*(p + k) = 0;

	return ((void *)p);
}
