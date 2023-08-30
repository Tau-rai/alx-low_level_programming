#include "main.h"

/**
 * is_prime_number - checks for a prime number
 * @n: an integer
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n / n == 1 || n / 1 == n)
	{
		return (1);
		is_prime_number(n);
	}
	else
	{
		return (0);
	}
}
