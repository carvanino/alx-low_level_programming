#include "lists.h"

/**
 * free_listint2 - frees list and set head to NULL
 *
 * @head: pointer to the beginning of the list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *trans_v;
	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		trans_v = *head;
		*head = (*head)->next;
		free(trans_v);
	}
}
