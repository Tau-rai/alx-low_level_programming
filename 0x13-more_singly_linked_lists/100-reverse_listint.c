#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to a node
 * Return: the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prevNode = NULL;

	while (current != NULL)
	{
		listint_t *nextNode = current->next;

		current->next = prevNode;
		prevNode = current;
		current = nextNode;
	}
	*head = prevNode;

	return (*head);
}


