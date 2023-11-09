#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at index
 * @head: pointer to a node
 * @index: an integer
 * Return: the nth node of a linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int counter = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (ptr != NULL)
		{
			if (counter == index)
				return (ptr);

			ptr = ptr->next;
			counter++;
		}
	}
	return (NULL);
}
