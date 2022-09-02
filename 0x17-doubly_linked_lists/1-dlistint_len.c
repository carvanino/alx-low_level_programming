#include "lists.h"

/**
 * dlistint_len - returns the number of element in a doubly linked list
 *
 * @h: pointer to the beginning of the list
 *
 * Return: Number of element in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t no_nodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		no_nodes++;
		h = h->next;
	}
	return (no_nodes);
}
