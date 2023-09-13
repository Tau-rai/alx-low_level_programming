#include "3-calc.h"

/**
 * get_op_func - gets the right operator for the function
 * @s: pinter to a character
 * Return: Always 0.
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	if (ops[i] == (sizeof(ops) - 1))
		return (NULL);
	while (i < sizeof(ops))
	{
		s = (*get_op_func(ops[i]);
		 i++;
	 }

	 return (s);
}
