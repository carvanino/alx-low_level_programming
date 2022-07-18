#include "lists.h"

/**
 * pop_listint - Deletes the head node
 *
 * @head: a pointer to the beginning of the list
 *
 * Return: The head node data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *trans_v;
	int data;

	if (head == NULL)
	{
		return (0);
	}
	while (trans_v != NULL)
	{
		trans_v = *head;
		data = trans_v->n;
		*head = (*head)->next;
		free(trans_v);
	}

	return (data);
}
