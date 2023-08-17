#include "main.h"
#include <ctype.h>

/**
 * more_numbers - prints the numbers 0 to 14 ten times
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int num;

		num = 0;
		while (num <= 14)
		{
			if (num < 10)
			{
				_putchar((char)num + '0');
			}
			else
			{
				_putchar((char)num / 10 + '0');
				_putchar((char)num % 10 + '0');
			}
			num++;
		}
		_putchar('\n');
	}
}
