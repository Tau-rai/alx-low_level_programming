#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to a string
 * @c: character to be located
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
