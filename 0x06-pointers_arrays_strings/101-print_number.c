#include "main.h"

/**
 * print_number - prints out integers to the stdout
 * @n: an integer value
 * Return: nothing
 */
void print_number(int n)
{
	int dig;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	dig = n % 10;
	_putchar(dig + '0');
}
