#include "hash_tables.h"

/**
 * hash_table_print - print sthe hash table
 * @ht: is the hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int k;
	hash_node_t *node;
	int sep = 0;

	printf("{");
	for (k = 0; k < ht->size; k++)
	{
		node = ht->array[k];
		while (node != NULL)
		{
			if (sep)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			sep = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
