#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14 ten times
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i;
	int num;

	for (i = 0; i < 10; i++)
	{
		int num;

		num = 0;
		while (num <= 14)
		{
			_putchar(num + '0');
			num++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
