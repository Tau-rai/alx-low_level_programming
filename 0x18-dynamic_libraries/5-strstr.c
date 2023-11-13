#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer to a string
 * @needle: pointer to a substring
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
