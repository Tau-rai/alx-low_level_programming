#include "main.h"
#include <string.h>

/**
 * puts_half - prints the last half of a string
 * @str: the string to be printed
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n = (len - 1) / 2;
	int i;

	if (len % 2 == 0)
	{
		str += n + 1;
	}
	else
	{
		str += n;
	}
	for (i = 0; i < len - n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
