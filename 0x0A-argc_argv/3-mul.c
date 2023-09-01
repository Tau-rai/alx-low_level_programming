#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: counts the number of arguments
 * @argv: pointer to an array of strings
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);

	return (0);
}
