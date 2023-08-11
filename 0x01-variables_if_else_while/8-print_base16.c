#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all numbers in base 16 lowercase followed by new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 16; x++)
	{
		if (x < 10)
		{
			putchar(x + '0');
		}
		else
		{
			putchar(x - 10 + 'a');
		}
	}
	putchar('\n');

	return (0);
}
