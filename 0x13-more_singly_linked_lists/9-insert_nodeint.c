#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a node
 * @idx: node index
 * @n: integer value
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k = 0;
	listint_t *newNode, *temp;

	newNode = (listint_t *) malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}

	temp = *head;

	for (k = 0; (k < idx - 1 && temp != NULL); k++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
