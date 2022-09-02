#include "lists.h"

/**
 * print_dlistint - prints all elements in a doubly linked list
 *
 * @h: pointer to the the beginning of the list
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t no_nodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		no_nodes++;
		h = h->next;
	}
	return (no_nodes);
}
