#include "main.h"

/**
 * times_table - prints out the 9 times table
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int t, k, z;

	for (t = 0; t < 10; t++)
	{
		for (k = 0; k < 10; k++)
		{
			z = t * k;
			if (t == 0)
			{
				_putchar(z + '0');
			}
			if (z < 10 && k != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
