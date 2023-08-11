#include "hash_tables.h"

/**
 * key_index - calculates the index of a key using djb2
 * hash function
 * @key: the key for which to calculate index
 * @size: the size of the array of  hash table
 *
 * Return: the calculated index at which the key and value
 * will be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key) % size;

	return (idx);

}
