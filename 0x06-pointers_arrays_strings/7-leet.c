#include "main.h"
#include <string.h>

/**
 * leet - encodes a string to 1337
 * @s: pointer to a string
 * Return: Nothing.
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 'a' || i == 'A')
		{
			s[i] = 52;
		}
		else if (i == 'e' || i == 'E')
		{
			s[i] = 51;
		}
		else if (i == 'o' || i == 'O')
		{
			s[i] = 48;
		}
		else if (i == 't' || i == 'T')
		{
			s[i] = 55;
		}
		else if (i == 'l' || i == 'T')
		{
			s[i] = 49;
		}
		else
		{
			s[i] = s[i];
		}
	}
}

