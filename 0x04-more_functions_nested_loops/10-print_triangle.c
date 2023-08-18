#include "main.h"

/**
 * print_triangle - prints triangle of #s
 * @size: the number of #s
 *
 */
void print_triangle(int size)
{
	int n, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 1; n <= size; n++)
		{
			for (m = 1; m <= size - n; m++)
			{
				_putchar(' ');
			}
			for (m = 1; m <= n; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
