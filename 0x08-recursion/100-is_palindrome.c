#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is a palidrome
 * @s: pointer to string
 * @start: beginning of a string
 * @end: end of a string
 * Return: Always 0.
 */
int palindrome_check(char *s, int start, int end);

int is_palindrome(char *s)
{
	int start = 0;
	int end = strlen(s) - 1;

	return (palindrome_check(s, start, end));
}

/**
 * palindrome_check - checks if the string s palindrome
 * @start: beginning of a string
 * @end: end of a string
 * @s: pointer to a string
 * Return: Always 0.
 */
int palindrome_check(char *s, int start, int end)
{
	if (s == NULL || start < 0 || end < 0)
	{
		return (0);
	}
	if (start >= end)
	{
		return (1);
	}
	if (s[start] == s[end])
	{
		return (palindrome_check(s, start + 1, end - 1));
	}
	return (0);
}
