#include "main.h"

/**
 * print_sign - checks if a number is positive , negative or zero
 * @n: is the integer to be checked
 *
 * Return: 1 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar('\n');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
