#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node index n
 * @h: pointer to a node
 * @idx: pointer to an index
 * @n: ann integer
 * Return: pointer to a new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int k = 0;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	temp = *h;
	if (idx == 0)
	{
		new_node->next = temp;
		new_node->prev = NULL;
		if (temp != NULL)
			temp->prev = new_node;
		*h = new_node;
	}
	else
	{
		while (temp != NULL && k < idx)
		{
			temp = temp->next;
			k++;
		}
		if (k < idx)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = temp->next;
		new_node->prev = temp;
		if (temp->next != NULL)
			temp->next->prev = new_node;
		temp->next = new_node;
	}
	return (new_node);
}
