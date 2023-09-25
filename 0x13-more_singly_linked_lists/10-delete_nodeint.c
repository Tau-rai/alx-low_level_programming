#include "lists.h"

/**
 * delete_nodeint_at_index - deletes at a node at a specified index
 * @head: pointer to a node
 * @index: node index
 * Return: 1 for success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *temp, *current;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);

		return (1);
	}

	for (k = 0; (k < index - 1 && current != NULL); k++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
