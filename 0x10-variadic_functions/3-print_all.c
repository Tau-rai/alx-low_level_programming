#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything to stdout
 * @format: number of arguments in the func
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int k = 0;
	char *st, *separator = "";

	va_start(ap, format);

	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", separator, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(ap, double));
					break;
				case 's':
					st = va_arg(ap, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", separator, st);
					break;
				default:
					k++;
					continue;
			}
			separator = ", ";
			k++;
		}
	}
	printf("\n");
	va_end(ap);
}
