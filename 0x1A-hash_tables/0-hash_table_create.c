#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: pointer to a newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int k;

	if (size < 1)
		return (NULL);
	/* allocate memory for the hash table struct*/
	new_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);
	/* allocate memory for the table */
	new_table->array = (hash_node_t *)malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	/* initialize lements of the array*/
	for (k = 0; k < size; k++)
	{
		new_table->array[k] = NULL;
	}
	/* set the size of the table*/
	new_table->size = size;

	return (new_table);
}
