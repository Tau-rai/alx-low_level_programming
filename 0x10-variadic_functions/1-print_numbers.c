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
	unsigned int k;

	va_start(ap, n);

	if (separator != NULL)
	{
		for (k = 0; k < n; k++)
		{
			printf("%d", va_arg(ap, int));

			if (k < n - 1)
				printf("%s", separator);

		}
	}
	else
	{
		for (k = 0; k < n; k++)
		{
			printf("%d", va_arg(ap, int));
		}
	}

	printf("\n");

	va_end(ap);
}
