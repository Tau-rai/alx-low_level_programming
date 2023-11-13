#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: pointer to a string
 * @accept: pointer to a substring
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
