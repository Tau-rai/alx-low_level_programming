#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 * @n: an integer
 * @m: an unsigned long int
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int counter = 0;

	while (result != 0)
	{
		counter += result & 1;
		result >>= 1;
	}

	return (counter);
}
