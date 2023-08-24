#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - capitalizes all the words of a string
 * @str: pointer to a string
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || str[i - 1] == ' ')
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
