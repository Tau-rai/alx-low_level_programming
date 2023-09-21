#include "lists.h"

/**
 * print_list - prints out all the elements of a list
 * @h: pointer to a list
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *current = h;
	size_t len;

	if (h == NULL)
		return (-1);

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			len = strlen(current->str);
			printf("[%lu] %s\n", len, current->str);
		}

		counter++;
		current = current->next;
	}
	return (counter);
}
