#include "lists.h"

/**
 * dlistint_len - prints the number of elements in a linked list
 * @h: pointer to a node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		counter++;
	}
	return (counter);
}
