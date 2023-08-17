#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: is the character to be checked and printed out
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
	}
}
