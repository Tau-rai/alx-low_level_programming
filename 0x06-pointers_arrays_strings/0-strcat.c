#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: pointer to first string
 * @src: points to second string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
