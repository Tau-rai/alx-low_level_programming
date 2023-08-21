#include "main.h"

/**
 * swap_int - swaps the integers values of a and b
 * @a: integer value
 * @b: second integer value
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

