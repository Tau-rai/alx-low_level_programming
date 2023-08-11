#include <stdio.h>

/**
 * main - Entry point
 * Description: Print alphabet in reverse using putchar only
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
