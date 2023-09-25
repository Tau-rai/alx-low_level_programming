#include "lists.h"

/**
 * listint_len - functions that returns the number of elements in a list
 * @h: pointer to a linked list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		counter++;
	}
	return (counter);
}
