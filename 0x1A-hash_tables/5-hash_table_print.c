#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to printed
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hnode;
	int c = 0;
	unsigned long int i;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hnode = ht->array[i];
		while (hnode)
		{
			if (c)
				printf(", ");
			printf("'%s': '%s'", hnode->key, hnode->value);
			hnode = hnode->next;
			c = 1;
		}
	}
	printf("}\n");
}
