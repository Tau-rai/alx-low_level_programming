#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: an integer
 * @av: double pointer to a string
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	int k, j;
	int len = 0;
	int t_len = 0;
	char *res;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < ac; k++)
	{
		len = strlen(av[k]);
		t_len += len + 1;
	}

	res = malloc(t_len * sizeof(char));
	if (res == NULL)
		return (NULL);

	for (k = 0, j = 0; k < ac; k++)
	{
		len = strlen(av[k]);
		memcpy(res + j, av[k], len);
		j += len;
		res[j++] = '\n';
	}

	res[j - 1] = '\n';
	res[j] = '\0';

	return (res);
}
