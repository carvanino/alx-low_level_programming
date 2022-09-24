#include "hash_tables.h"

/**
 * hash_table_print - Print a representation of the hash table
 *
 * @ht: The hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	char *sep = "";
	hash_node_t *node;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("%s'%s': '%s'", sep, node->key, node->value);
			sep = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
