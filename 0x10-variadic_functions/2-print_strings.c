#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints out a string to the stdout
 * @separator: pointer to a string character
 * @n: number of strings passed to the function
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int k;
	char *j;

	va_start(p, n);

	if (separator == NULL)
		return;

	for (k = 0; k < n; k++)
	{
		j = va_arg(p, char *);
		if (n == 0)
			printf("(nil)");
		printf("%s", j);

		if (k < n - 1)
			printf("%s", separator);
	}
	if (k != n)
		return;
	
	va_end(p);

	putchar('\n');
}

