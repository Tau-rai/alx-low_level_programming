#include "main.h"
#include <string.h>

/**
 * _puts - prints astring str to stdout
 * @str: is the string variable
 * Return: nothing.
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
