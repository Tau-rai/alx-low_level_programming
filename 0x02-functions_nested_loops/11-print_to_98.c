#include "main.h"

/**
 * print_to_98 -prints all digit from n to 98
 * @n: is the starting point of the print
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		int temp = n;
	while (temp > 0)
	{
		_putchar((temp % 10) + '0');
		temp /= 10;
	}
	_putchar('\n');
	n++;
	}
}

