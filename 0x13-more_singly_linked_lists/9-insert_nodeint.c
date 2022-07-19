#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: a pointer to the first element in the list
 * @idx: position of new node
 * @n: data of the new node
 *
 * Return: The address of the new node
 * Otherwise: NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *trans_v, *newnode;

	if (head == NULL)
	{
		return (0);
	}
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (0);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		(*head) = newnode;
		return (newnode);
	}
	trans_v = *head;
	if (trans_v == NULL)
	{
		free(newnode);
		return (NULL);
	}
	while (i < idx)
	{
		trans_v = trans_v->next;
		i++;
	}
	newnode->next = trans_v->next;
	trans_v->next = newnode;

	return (newnode);
}
