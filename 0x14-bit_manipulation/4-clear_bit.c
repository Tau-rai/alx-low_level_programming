#include "main.h"

/**
 * clear_bit - sets the value of a bit to zero at a given index
 * @n: pointer to an int
 * @index: an unsigned int
 * Return: 1 if it worked or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	*n &= mask;
	return (1);
}
