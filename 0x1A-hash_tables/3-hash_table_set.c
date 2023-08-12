#include "hash_tables.h"

/**
 * _setter - sets the value and key pair
 * @node: Pointer to node
 * @key: key
 * @value: value
 *
 * Return: Pointer to the modified node
 */
hash_node_t *_setter(hash_node_t *node, const char *key, const char *value)
{
	hash_node_t *new_n, *current_n;

	if (node == NULL)
	{
		new_n = malloc(sizeof(hash_node_t));
		if (new_n == NULL)
			return (NULL);
		new_n->key = strdup(key);
		new_n->value = strdup(value);
		new_n->next = NULL;
		return (new_n);
	}
	current_n = node;
	while (current_n != NULL)
	{
		if (strcmp(key, current_n->key) == 0)
		{
			free(current_n->value);
			current_n->value = strdup(value);
			return (node);
		}
		current_n = current_n->next;
	}
	new_n = malloc(sizeof(hash_node_t));
	if (new_n == NULL)
		return (NULL);
	new_n->key = strdup(key);
	new_n->value = strdup(value);
	new_n->next = node;
	return (new_n);
}

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value
 *
 * Return: 1 on success and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	const unsigned char *_key;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	_key = (const unsigned char *) key;
	idx = hash_djb2(_key) % ht->size;
	node = _setter(ht->array[idx], key, value);
	if (node == NULL)
		return (0);
	ht->array[idx] = node;
	return (1);
}
