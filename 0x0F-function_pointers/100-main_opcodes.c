#include <stdio.h>
#include <stdlib.h>

void opcodes(int a);
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: pointer to an array of strings
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);
	opcodes(a);

	return (0);
}

/**
 * opcodes - prints out opcodes
 * @a: an integer value
 * Return: Nothing
 */
void opcodes(int a)
{
	char *p = (char *)opcodes;
	int k;

	if (a < 1)
	{
		printf("Error\n");
		exit(2);
	}

	for (k = 0; k < a; k++)
	{
		printf("%02x", p[k] & 0xff);
	}
	printf("\n");
}

