#include "lists.h"

/**
 * print_listint - prints all the element of a list
 *
 * @h: a pointer to the first element in(start of) the list
 *
 * Return: Number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t no_nodes;
	const listint_t *trans_v;

	no_nodes = 0;
	trans_v = h;
	while (trans_v != NULL)
	{
		printf("%d\n", trans_v->n);
		no_nodes++;
		trans_v = trans_v->next;
	}
	return (no_nodes);
}
