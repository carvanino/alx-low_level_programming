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
	unsigned long int index;
	hash_node_t *new_node;
	char *value_cpy, *key_cpy;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	value_cpy = strdup(value);
	key_cpy = strdup(key);
	if (value_cpy == NULL || key_cpy == NULL)
		return (0);

	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key_cpy) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = value_cpy;
			return (1);
		}
		ht->array[index] = ht->array[index]->next;
	}


	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = key_cpy;
	new_node->value = value_cpy;

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
