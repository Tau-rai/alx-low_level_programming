#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case
 *
 * Return: Nothing
 *
 */

int main(void)
{
	print_alphabet();
	return (0);
}

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
