#include "main.h"

/**
 * print_binary - prints the binaary representation of a number
 * @n: an unsigned int
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int leading_zero = 1;
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			leading_zero = 0;
		}
		else if (!leading_zero)
		{
			_putchar('0');
		}

		mask >>= 1;
	}
	if (leading_zero)
	{
		_putchar('0');
	}
}
