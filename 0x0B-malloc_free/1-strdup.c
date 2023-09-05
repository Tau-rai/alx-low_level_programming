#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - creates an array of chars
 * @str: pointer to a string
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	size_t len;
	char *n_str;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str) + 1;
	n_str = malloc(len * sizeof(char));
	if (n_str == NULL)
		return (NULL);

	memcpy(n_str, str, len);

	return (n_str);
}
