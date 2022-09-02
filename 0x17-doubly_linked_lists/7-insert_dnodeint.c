#include "lists.h"

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
	dlistint_t *transv, *newnode;

	if (h == NULL)
	{
		return (NULL);
	}
	transv = *h;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (i < idx - 1 && transv != NULL)
	{
		i++;
		transv = transv->next;
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
