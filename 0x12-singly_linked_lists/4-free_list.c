#include "lists.h"

/**
 * free_list - frees the memory allocated to the linked list
 * @head: pointer to a element of the list
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		free(head->str);

		next = head->next;

		free(head);
		head = next;
	}
}
