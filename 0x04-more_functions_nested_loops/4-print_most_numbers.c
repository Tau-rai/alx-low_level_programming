#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 through 9 except 2 & 4
 *
 * Return: Always 0 (Sucess)
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		else
		{
			_putchar(num + '0');
		}
	}
	_putchar('\n');
}
