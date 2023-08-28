#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to an array
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int k, j;

	for (k = 0; k < 8; k++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[k][j]);
		}
		_putchar('\n');
	}
}
