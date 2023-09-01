#include "main.h"
#include <ctype.h>

/**
 * _islower - checks if a character is lowercase
 * @c: is the integer we are using to check for lowercase
 * Return: 1 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
