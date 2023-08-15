#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case
 *
 * Return: Nothing
 *
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
