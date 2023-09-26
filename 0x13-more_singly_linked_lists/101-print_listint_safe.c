#include "lists.h"

size_t print_listint_safe(const listint_t *head);
/**
 * print_listint_safe - prints out elememts of a linked list
 * @head: pointer to a node
 * Return: the number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t k, j = 0;
	size_t counter = 0;
	size_t max_nodes = 10;
	size_t *addresses = malloc(max_nodes * sizeof(size_t));
	size_t *new_addresses = malloc(max_nodes * sizeof(size_t));

	if (addresses == NULL)
		exit(98);

	while (current != NULL)
	{
		printf("[%p]%d\n", (void *)current, current->n);

		for (k = 0; k < counter; k++)
		{
			if (addresses[k] == (size_t)current)
			{
				free(addresses);
				exit(98);
			}
		}

		/* store the current address in an array*/
		addresses[counter] = (size_t)current;

		/*if the array is full, double its size*/
		if (counter == max_nodes - 1)
		{
			max_nodes *= 2;
			/*size_t *new_addresses = malloc(max_nodes * sizeof(size_t));*/

			if (new_addresses == NULL)
			{
				free(addresses);
				exit(98);
			}
			/*copy the existing addresses to the new array*/
			for (j = 0; j < counter; j++)
			{
				new_addresses[j] = addresses[j];
			}

			free(addresses);
			addresses = new_addresses;
		}
		current = current->next;
		counter++;
	}

	free(addresses);
	return (counter);
}

