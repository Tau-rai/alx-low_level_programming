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

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", current->str);

		counter++;
		current = current->next;
	}
	return (counter);
}
