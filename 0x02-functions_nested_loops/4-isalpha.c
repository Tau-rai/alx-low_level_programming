#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks if the int is an alphabet character
 * @c: is the integer representation of the character being checked
 *
 * Return: 1 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
