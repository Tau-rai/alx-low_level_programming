#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints out a string in reverse
 * @s: pointer to a string
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
