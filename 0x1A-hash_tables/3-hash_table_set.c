#include "hash_tables.h"

/**
 * hash_table_set - adds elements to the hash table
 * @ht: the hash table
 * @key: is the key and cannot be empty
 * @value: is the value associated with the key
 * Return: 1 Success , 0 failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *tmp;
	unsigned long int idx;

	if (!ht || !key || !*key)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (!tmp->value)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	/*create new node */
	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);

	if (!node->key || !node->value)
	{
		free(node);
		return (0);
	}
	/* add new node at the begining of the list*/
	node->next = ht->array[idx];
	ht->array[idx] = node;

	return (1);
}
