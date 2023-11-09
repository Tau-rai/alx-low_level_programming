#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a specific index
 * @head: pointer to a head
 * @index: an integer
 * Return: 1 of successful, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL && k < index)
	{
		temp = temp->next;
		k++;
	}
	if (temp == NULL)
		return (-1);

	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
