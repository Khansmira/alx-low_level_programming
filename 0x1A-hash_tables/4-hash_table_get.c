#include "hash_tables.h"

/**
 * key_exists - Checks if a key exists in a linked list
 * @node: Pointer to the linked list
 * @key: The key to search for
 *
 * Return: Pointer to the node with the key, or NUll
 */
char *key_exists(hash_node_t *node, const char *key)
{
	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const unsigned char *_key;
	unsigned long int idx;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	_key = (const unsigned char *)key;
	idx = hash_djb2(_key) % ht->size;
	node = ht->array[idx];
	if (ht->array[idx] == NULL)
		return (NULL);

	return (key_exists(node, key));
}

