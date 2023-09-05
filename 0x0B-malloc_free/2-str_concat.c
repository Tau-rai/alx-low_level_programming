#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	size_t len = (strlen(s1) + strlen(s2)) + 1;
	char *s3 = malloc(len * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}
	if (s3)
	{
		strcpy(s3, s1);
		strcat(s3, s2);
	}
	return (s3);
}
