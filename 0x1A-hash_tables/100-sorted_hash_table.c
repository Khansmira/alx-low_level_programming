#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - creates a sorted hash table of specified size
 * @size: size of the hash table
 *
 * Return: pointer to the new sorted hash table, return otherwise NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_t;
	unsigned long int i;

	new_t = malloc(sizeof(shash_table_t));
	if (new_t == NULL)
		return (NULL);

	new_t->size = size;
	new_t->array = malloc(sizeof(shash_node_t *) * size);

	if (new_t->array == NULL)
	{
		free(new_t);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_t->array[i] = NULL;
	new_t->shead = NULL;
	new_t->stail = NULL;

	return (new_t);
}

/**
 * shash_table_set - adds a new element to a sorted hash table aka key-value pair
 * @ht: pointer to the hash table
 * @key: key
 * @value: value associated with key
 *
 * Return: 1 on success and 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_n;
	shash_node_t *n;
	char *_value;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	_value = strdup(value);
	if (_value == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	n = ht->shead;
	while (n)
	{
		if (strcmp(n->key, key) == 0)
		{
			free(n->value);
			n->value = _value;
			return (1);
		}
		n = n->snext;
	}

	new_n = malloc(sizeof(shash_node_t));
	if (new_n == NULL)
	{
		free(_value);
		return (0);
	}
	new_n->key = strdup(key);
	if (new_n->key == NULL)
	{
		free(_value);
		free(new_n);
		return (0);
	}
	new_n->value = _value;
	new_n->next = ht->array[i];

	if (ht->shead == NULL)
	{
		new_n->sprev = NULL;
		new_n->snext = NULL;
		ht->shead = new_n;
		ht->stail = new_n;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_n->sprev = NULL;
		new_n->snext = ht->shead;
		ht->shead = new_n;
	}
	else
	{
		n = ht->shead;
		while (n->snext != NULL && strcmp(n->snext->key, key) < 0)
		new_n->sprev = n;
		new_n->snext = n->snext;
		n = n->snext;
	}
	if (!n)
		ht->stail = new_n;

	return (1);
}

/**
 * shash_table_get - Retrieve the value of a key in a sorted hash table.
 * @ht: pointer to the hash table
 * @key: key to get the value of.
 *
 * Return: value of key or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *new_n;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	new_n = ht->shead;
	while (new_n != NULL && strcmp(new_n->key, key) != 0)
		new_n = new_n->snext;

	return ((new_n == NULL) ? NULL : new_n->value);
}

/**
 * shash_table_print - Prints a sorted hash table in the right order
 * @ht: A pointer to the hash table
 *
 * Return: key-value pair
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *new_n;

	if (ht == NULL)
		return;

	new_n = ht->shead;
	printf("{");
	while (new_n != NULL)
	{
		printf("'%s': '%s'", new_n->key, new_n->value);
		new_n = new_n->snext;
		if (new_n != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *new_n;

	if (ht == NULL)
		return;

	printf("{");
	new_n = ht->stail;
	while (new_n)
	{
		printf("'%s': '%s'", new_n->key, new_n->value);
		new_n = new_n->sprev;
		if (new_n != NULL)
			printf(", ");
		new_n = new_n->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: A pointer to the hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *new_n;

	if (ht == NULL)
		return;

	new_n = ht->shead;
	while (new_n != NULL)
	{
		new_n = new_n->snext;
		free(new_n->key);
		free(new_n->value);
		free(new_n);
	}

	free(ht->array);
	free(ht);
}
