#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - the natural square root of a number
 * @n: an integer
 * @i: is an integer
 * Return: Always 0.
*/
/* sqrt_checker - checks for sqrt */
int sqrt_checker(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_checker(n, 1));
}

/**
 * sqrt_checker - checks sqrt
 * @n: an integer
 * @i: an integer
 * Return: Always 0.
 */
int sqrt_checker(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_checker(n, i + 1));
}
