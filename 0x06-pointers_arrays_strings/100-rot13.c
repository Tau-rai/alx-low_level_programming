#include "main.h"
#include <string.h>

/**
 * rot13 - tranform a string in rot13 cipher
 * @s: pointer to a string
 * Return: Always 0.
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = ((s[i] - 'a' + 13) % 26) + 'a';
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = ((s[i] - 'A' + 13) % 26) + 'A';
		}
	}
	return (s);
}
