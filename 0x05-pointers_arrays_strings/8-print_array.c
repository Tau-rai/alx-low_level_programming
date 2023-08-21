#include "main.h"
#include <string.h>

/**
 * print_array - prints an array of integers
 * @a: a variable pointer to an integer array
 * @n: the number of times the integer will be printed
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("\n");
}
