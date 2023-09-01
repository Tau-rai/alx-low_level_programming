#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 * @c: is the character to be checked and printed out
 *
 * Return: 1 Success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
