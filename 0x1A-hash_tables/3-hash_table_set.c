#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if Success
 * Otherwise: 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new_node;
	char *value_cpy, *key_cpy;

	index = key_index((const unsigned char *)key, ht->size);
	value_cpy = strdup(value);
	key_cpy = strdup(key);
	if (value_cpy == NULL || key_cpy == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = key_cpy;
	new_node->value = value_cpy;

	/*
	 * First, we check through the array if a key already exist,
	 * and we update its value, intead of making a duplicate
	 */
	for (i = 0; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key_cpy) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cpy;
			return (1);
		}
	}
	/* If there is collision: Array index has already been used */
	if (ht->array[index] != NULL)
	{
		new_node->next = ht->array[index];
	}
	else
	{
		new_node->next = NULL;
	}
	ht->array[index] = new_node;
	return (1);
}
