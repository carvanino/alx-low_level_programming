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

/**
 * insert_dnodeint_at_index - inserts a new node at a specified position
 *
 * @h: pointer to the beginning of the list
 * @idx: position, where node should be inserted
 * @n: integer data for the new node
 *
 * Return: address of the new node
 * Otherwise: NULL if fail
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *transv = *h;
	dlistint_t *newnode;
	size_t nodes;

	if (h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	nodes = dlistint_len(*h);
	if (idx > nodes)
		return (NULL);

	while (i < idx - 1  && transv != NULL)
	{
		transv = transv->next;
		i++;
	}
	if (transv->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		newnode->next = transv->next;
		newnode->prev = transv;
		(newnode->next)->prev = newnode;
		transv->next = newnode;
		return (newnode);
	}
	return (NULL);
}
