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
	if (n > 0)
	{
		int k;

		for (k = n; k < n; k++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
