#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index of a list
 *
 * @head: pointer to the beginning of the list
 * @index: position of node to be deleted
 *
 * Return: -1 if Fail
 * Otherwise: 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trans_v = *head;
	listint_t *prevnode = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(trans_v);
		return (1);
	}
	while (i < index)
	{
		if (!trans_v || !(trans_v->next))
		{
			return (-1);
		}
		prevnode = trans_v;
		trans_v = trans_v->next;
		i++;
	}
	prevnode->next = trans_v->next;
	free(trans_v);

	return (1);
}
