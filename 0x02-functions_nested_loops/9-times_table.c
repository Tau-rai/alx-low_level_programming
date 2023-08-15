#include "main.h"

/**
 * times_table - prints out the 9 times table
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int t, k;

	for (t = 0; t < 10; t++)
	{
		for (k = 0; k < 10; k++)
		{
			_putchar((t * k) + '0');
				if (k != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
		}
		_putchar('\n');
	}
}
