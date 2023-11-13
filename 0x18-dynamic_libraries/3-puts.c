#include "main.h"
#include <string.h>

/**
 * _puts - prints astring str to stdout
 * @str: is the string variable
 *
 * Return: Nothing.
 */

void _puts(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
