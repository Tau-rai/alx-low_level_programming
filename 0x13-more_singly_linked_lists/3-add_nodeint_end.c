#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: pointer to a linked list node
 * @n: integer value
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = (listint_t *) malloc(sizeof(listint_t));

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		listint_t *endNode = *head;

		while (endNode->next != NULL)
		{
			endNode = endNode->next;
		}
		endNode->next = newnode;

	}
	return (newnode);
}
