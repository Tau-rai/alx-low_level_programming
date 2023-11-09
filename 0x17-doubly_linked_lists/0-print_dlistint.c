#include "lists.h"

/**
 * print_dlistint - displays the elements of a list
 * @h: pointer to a list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		counter++;
	}
	return (counter);
}
