#include "lists.h"

/**
 * sum_dlistint - adds all the data in a list
 * @head: pointer to a node
 * Return: sum of the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
