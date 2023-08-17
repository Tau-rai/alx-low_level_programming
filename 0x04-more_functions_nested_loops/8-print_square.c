#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 *
 * Return: Always 0.
 */

void print_square(int size)
{
	if (size > 0)
	{
		int j;

		for (j = 0; j < size; ++j)
		{

			int k;

			for (k = 0; k < size; ++k)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
