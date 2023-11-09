#include "lists.h"

/**
 * free_dlistint - frees a linked lists
 * @head: pointer to a list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
