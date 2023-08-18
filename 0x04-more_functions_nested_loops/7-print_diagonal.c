#include "main.h"
#include <ctype.h>

/**
 * print_diagonal - prints a diagonal line in the terminal
 * @n: the number of times the charcter \ will be printed
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		int j;

		for (j = 0; j < n; j++)
		{
			if (k == j)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
