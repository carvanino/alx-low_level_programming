#include "lists.h"

/**
 * get_nodeint_at_index - return the n(th) node of a linked list
 *
 * @head: pointer to the first node in the list
 * @index: position of the node to be returned
 *
 * Return: The indexed node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *trans_v;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	trans_v = head;
	i = 0;
	while (i < index)
	{
		i++;
		trans_v = trans_v->next;
		if (trans_v == NULL)
		{
			return (0);
		}
	}
	return (trans_v);
}
