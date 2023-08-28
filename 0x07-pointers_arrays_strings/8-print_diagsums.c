#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of two diagonals of a square matrix
 * @a: pointer to a matrix
 * @size: the size of the matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int k, j;
	int sum1 = 0;
	int sum2 = 0;

	for (k = 0; k < size; k++)
	{
		for (j = 0; j < size; j++)
		{
			if (k == j)
			{
				sum1 += *(a + k * size + j);
			}
			if (k == size - j - 1)
			{
				sum2 += *(a + k * size + j);
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
