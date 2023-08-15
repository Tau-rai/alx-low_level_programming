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
			if (k == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			printf("%2d", t * k);
		}
		_putchar('\n');
	}
}
