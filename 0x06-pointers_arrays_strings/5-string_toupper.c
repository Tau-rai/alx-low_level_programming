#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - capitalizes a string
 * @s: pointer to a string
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = toupper(s[i]);
	}
	return (s);
}
