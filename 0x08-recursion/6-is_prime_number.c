#include "main.h"

/**
 * is_prime_number - checks for a prime number
 * @n: an integer
 * @i: an integer
 * Return: Always 0.
 */
int prime_check(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_check(n, 2));
}

/**
 * prime_check - checks the prime
 * @n: an integer
 * @i: an integer
 *
 * Return: Always 0.
 */
int prime_check(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_check(n, i + 1));
}
