#include "main.h"
#include <ctype.h>

/**
 * _isdigit -checks for a digit 0 through 9
 * @c: is the integer value to be checked
 *
 * Return: 1 Success.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
