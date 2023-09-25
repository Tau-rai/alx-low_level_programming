#include "lists.h"

/**
 * free_listint2 - frees the list and sets head to null
 * @head: pointer to a node
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *next, *current;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
