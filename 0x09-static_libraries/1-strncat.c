#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: integer number to count where len of the strings
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len_d = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len_d + i] = src[i];
	}
	dest[len_d + i] = '\0';

	return (dest);
}
