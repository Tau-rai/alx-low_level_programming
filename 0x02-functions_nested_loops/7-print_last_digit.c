#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number
 * @num: represents the integer number to be checked
 *
 * Return: Always 0.
 */

int print_last_digit(int num)
{
	int last_d = num % 10;

	if (last_d % 10)
	{
		_putchar(last_d);
	}
	return (0);
}
