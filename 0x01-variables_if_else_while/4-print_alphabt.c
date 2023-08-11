#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		if (tolower(x) == 'e' || tolower(x) == 'q')
		{
			continue;
		}
		putchar(tolower(x));
	}
	putchar('\n');

	return (0);
}
