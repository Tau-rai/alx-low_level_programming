#include "lists.h"

/**
 * add_nodeint - adds a new node at the begining of a linked list
 * @head: pointer to a linked list
 * @n: an integer value
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = (listint_t *) malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	newnode->next = *head;
	*head = newnode;

	return (newnode);
}

