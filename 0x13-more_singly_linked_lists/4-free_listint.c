#include "lists.h"

/**
 * free_listint - Frees a list
 *
 * @head: a pointer to the beginning of the list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *trans_v, *temp;

	trans_v = head;
	while (trans_v != NULL)
	{
		temp = trans_v;
		trans_v = trans_v->next;
		free(temp);
	}
	head = NULL;
}
