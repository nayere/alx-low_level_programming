#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hashs table I want to add or update the key/value to
 * @key: is the str passed to djb2 (tha key )
 * @value: value associated with the key
 * Return: 1 if succeeded or 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_nodes;
	hash_node_t *new_node;
	unsigned long int index;

	if (!ht || !key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	hash_nodes = ht->array[index];
	while (hash_nodes)
	{
		if (strcmp(hash_nodes->key, key) == 0)
		{
			free(hash_nodes->value);
			hash_nodes->value = strdup(value);
			if (hash_nodes->value == NULL)
				return (0);
			return (1);
		}
		hash_nodes = hash_nodes->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->value == NULL)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

