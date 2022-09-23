#include "hash_tables.h"

/**
 * key_index - Retrieves the index of a key
 *
 * @key: The key
 * @size: Size of array in the hash table
 *
 * Return: The index at which the key should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
