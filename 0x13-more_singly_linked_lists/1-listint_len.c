#include "lists.h"

/**
 * listint_len - returns the number of element in a linked list
 *
 * @h: pointer to the first element/beginning of the list
 *
 * Return: Number of element in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t no_nodes;
	const listint_t *trans_v;

	trans_v = h;
	no_nodes = 0;
	while (trans_v != NULL)
	{
		no_nodes++;
		trans_v = trans_v->next;
	}
	return (no_nodes);
}
