#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head: A pointer to the first element in the list
 *
 * Return: A pointer to the beginning of the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *trans_v, *nextnode;

	trans_v = *head;
	nextnode = *head;
	*head = NULL;

	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		trans_v->next = *head;
		*head = trans_v;
		trans_v = nextnode;
	}

	return (*head);
}
