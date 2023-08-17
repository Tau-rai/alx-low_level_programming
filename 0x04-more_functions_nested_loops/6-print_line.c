#include "main.h"

/**
 * print_line - prints a line
 * @n: is the number of times the line is printed
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}

