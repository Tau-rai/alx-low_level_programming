#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to a node
 * @index: integer value
 * Return: node at index n
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int k = 0;

	while (temp != NULL)
	{
		if (k == index)
			return (temp);
		temp = temp->next;
		k++;
	}

	return (NULL);
}
