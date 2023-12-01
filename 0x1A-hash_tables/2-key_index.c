#include "hash_tables.h"

/**
 * key_index - gets the index of a key
 * @key: pointer to the key
 * @size: size fo teh hash table
 * Return: the index at which key/val pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* computes the hash key*/
	unsigned long int hash_key = hash_djb2(key);
	/* computes the index */
	unsigned long int index = hash_key % size;

	return (index);
}
