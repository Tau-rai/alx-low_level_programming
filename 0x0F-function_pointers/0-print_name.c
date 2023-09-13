#include "function_pointers.h"

/**
 * print_name - prints out a string to stdout
 * @name: pointer to a string
 * @f: pointer to a function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
