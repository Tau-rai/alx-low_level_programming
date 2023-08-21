#include "main.h"
#include <string.h>

/**
 * _strcpy - copies a string to another variable using pointers
 * @dest: string variable to be copied to
 * @src: variable to be copied from
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
		*dest = *src;

		dest++;
		src++;
	}
	/* append the null byte to the end of dest */
	*dest = '\0';

	return (temp);
}
