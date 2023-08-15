#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number
 * @num: represents the integer number to be checked
 *
 * Return: Always 0.
 */

int print_last_digit(int num)
{
	int last_d;

	last_d = num % 10;

	if (last_d < 0)
	{
		last_d = -last_d;
	}
	_putchar(last_d + '0');

	return (last_d);
}
