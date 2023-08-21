#include "main.h"
#include <string.h>
#include <unistd.h>

/**
 * _puts - prints astring str to stdout
 * @str: is the string variable
 *
 * Return: Nothing.N */

void _puts(char *str)
{
	size_t len = strlen(str);
	size_t i;

	for (i = 0; i < len; i++)
	{
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}
