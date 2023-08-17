#include "main.h"

/**
 * print_triangle - prints triangle of #s
 * @size: the number of #s
 *
 */
void print_triangle(int size)
{
	int n;

	for (n = 1; n <= size; n++)
	{
		int m;

		for (m = 1; m <= n; m++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
