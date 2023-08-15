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
	int j;

	if (n <= 98)
	{
		for (j = n; j < 98; j++)
			printf("%d, ", j);
	}
	else
	{
		for (j = n; j > 98; j--)
			printf("%d, ", j);
	}
	printf("98\n");
}
