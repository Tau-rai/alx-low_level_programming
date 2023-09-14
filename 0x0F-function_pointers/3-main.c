#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of aguments
 * @argv: pointer to an array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char operator;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2][0];

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(&operator);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", f(num1, num2));

	return (0);
}
