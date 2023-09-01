#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: the constant byte
 * @n: the first n bytes of memory
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
