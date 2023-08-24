#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses the contents of an array
 * @a: pointer to an array
 * @n: the number of eelements of the array
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
