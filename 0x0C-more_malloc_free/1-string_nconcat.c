#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: integer value
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	s3 = malloc((len1 + n + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	for (len1 = 0; s1[len1] != '\0'; len1++)
		s3[len1] = s1[len1];

	for (len2 = 0; len2 < n; len2++)
		s3[len1 + len2] = s2[len2];
	
	s3[len1 + len2] = '\0';

	return (s3);
}
