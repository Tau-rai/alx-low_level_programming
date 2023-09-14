#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: string template
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	char c;
	float f;
	char *s;
	const char *p = format;

	va_start(ap, format);
	while (*p != '\0')
	{
		switch (*p)
		{
			case 'c':
				c = va_arg(ap, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				break;
		}
		p++;
		if (*p)
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
