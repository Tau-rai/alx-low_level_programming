#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory from source to target
 * @dest: target pointer to memory
 * @src: source pointer to copy from
 * @n: size of memory
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
