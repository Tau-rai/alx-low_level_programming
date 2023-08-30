#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints out a string
 * @s: pointer to a string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
