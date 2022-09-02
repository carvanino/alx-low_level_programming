#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 *
 * @head: pointer to the beginning of the list
 * @index: position of the node to return
 *
 * Return: The node at the index specified
 * Otherwise: NULL if node doesnt exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *transv;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	transv = head;
	while (i < index)
	{
		i++;
		transv = transv->next;
		if (transv == NULL)
		{
			return (0);
		}
	}
	return (transv);
}
