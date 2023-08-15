#include "main.h"
#include <stdio.h>

/**
 * times_table - prints out the 9 times table
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int t, k;

	for (t = 0; t <= 9 ; t++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (k == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			if ((t * k) < 10)
			{
				_putchar(' ');
				_putchar((t * k) + '0');
			}
			else
			{
				_putchar((t * k) / 10 + '0');
				_putchar((t * k) % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
