#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: an integer
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		n = n * factorial(n - 1);
	}
	return (n);
}
