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
 * delete_dnodeint_at_index - deletes a node at a specified index
 *
 * @head: pointer to the beginning of the list
 * @index: position of node to be deleted
 *
 * Return: 1 if sucess
 * Otherwise: -1 if fail
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *transv;
	unsigned int i = 0;
	size_t nodes;

	if (*head == NULL)
		return (-1);
	if (index == i)
	{
		transv = *head;
		*head = (*head)->next;
		transv->prev = NULL;
		transv->next = NULL;
		free(transv);
		return (1);
	}
	nodes = dlistint_len(*head);

	if (index == nodes)
	{
		while (i < index)
		{
			transv = transv->next;
			i++;
		}
		transv->prev->next = NULL;
		transv = transv->prev;
		free(transv);
		return (1);
	}
	if (index > nodes)
		return (-1);
	transv = *head;
	while (i < index - 1)
	{
		transv = transv->next;
		i++;
	}
	transv->prev->next = transv->next;
	transv->next->prev = transv->prev;
	free(transv);

	return (1);
}
