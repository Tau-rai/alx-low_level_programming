#include "main.h"
#include <ctype.h>

/**
 * print_line - prints a straight line from _s
 * @n: the integer that represents the character to be printed
 *
 * Return: Always 0 (Sucess)
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = n; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
