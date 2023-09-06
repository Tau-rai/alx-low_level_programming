#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: pointer to an array
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int cents;
	int counter = 0;
	unsigned long int i;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < (sizeof(coins) / sizeof(coins[0])); i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			counter++;
		}
	}
	printf("%d\n", counter);

	return (0);
}
