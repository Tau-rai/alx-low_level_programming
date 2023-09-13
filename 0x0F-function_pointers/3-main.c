#include "function_pointers.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of aguments
 * @argv: pointer to an array
 * Return: Always 0.
 */
int main(int argc, *argv[])
{
	int i = 0;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	if ((argv[2] == "/" || argv[2] == "%") && argv[3] == 0))
	{
		printf("Error\n");
		exit (99)
	}
	if ( i < argc)


