#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lower case x10
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
