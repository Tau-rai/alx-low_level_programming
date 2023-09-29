#include "main.h"

/**
 * set_bit - sets the vlue of a bit to 1 at a given index
 * @n: pointer to an integer
 * @index: an unsigned int
 * Return: 1 if it worked or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	*n |= mask;
	return (1);
}
