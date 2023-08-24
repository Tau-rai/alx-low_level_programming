#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * leet - replaces letters with digits
 * @s: pointer to a string
 * Return: Always 0.
 */

char *leet(char *s)
{
	int i;
	char *map = "A4E3O0T7L1";

	for (i = 0; s[i] != '\0'; i++)
	{
		char *p = strchr(map, toupper(s[i]));

		if (p)
		{
			s[i] = *(p + 1);
		}
	}
	return (s);
}
