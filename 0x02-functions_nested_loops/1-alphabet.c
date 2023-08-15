#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');

	return (0);
}
