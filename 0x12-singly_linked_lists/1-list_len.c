#include "lists.h"

/**
 * list_len - returns the number of all elements in alinked list
 * @h: pointer to a linked list
 * Return: the number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
