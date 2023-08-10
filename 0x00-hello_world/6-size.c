#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char my_character;
	int my_integer;
	long int my_long_integer;
	long long int mylong_long_integer;
	float my_float;

	printf("Size of a char: %lu byte(s)\n", sizeof(my_character));
	printf("Size of an int: %lu byte(s)\n", sizeof(my_integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(my_long_integer));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(mylong_long_integer));
	printf("Size of a float: %lu byte(s)\n", sizeof(my_float));

	return (0);
}
