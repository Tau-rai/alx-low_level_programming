#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints out numbers to stdout
 * @separator: pointer to a string
 * @n: integer value
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int k, j;

	va_start(ap, n);

	if (separator == NULL)
		return;

	j = 0;
	while (j < n)
	{
		k = va_arg(ap, int);
		printf("%d", k);
		if (j < n - 1)
			printf("%s", separator);
		j++;
	}

	va_end(ap);

	putchar('\n');
}


