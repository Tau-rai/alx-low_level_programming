#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to a substring
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
