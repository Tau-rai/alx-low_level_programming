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
	size_t len1;
	size_t len2;
	char *s3;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	s3 = malloc((len1 + len2 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);

	strcpy(s3, s1);
	strcat(s3, s2);

	return (s3);
}
