#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string into another string
 * @dest: first pointer to a string
 * @src: second pointer to a string
 * @n: the integer value of the characters of the string
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
