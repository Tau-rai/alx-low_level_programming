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
	int sum = 1;
	/*sum *= atoi(argv[i]); */

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		sum *= atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
