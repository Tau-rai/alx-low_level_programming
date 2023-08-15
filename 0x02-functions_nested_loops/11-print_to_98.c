#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -prints all digit from n to 98
 * @n: is the starting point of the print
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int j, k;

	if (n <= 98)
	{
		for (j = n; j <= 98; j++)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
	else if (n >= 98)
	{
		for (k = n; k >= 111; k--)
		{
			printf("%d, ", k);
		}
			printf("111\n");
		}
}
