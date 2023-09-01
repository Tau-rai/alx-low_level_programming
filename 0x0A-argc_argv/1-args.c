#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: counts number of arguments
 * @argv: pointer to an array of strings
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	int i = 1;

	printf("%d\n", argc - i);

	return (0);
}
