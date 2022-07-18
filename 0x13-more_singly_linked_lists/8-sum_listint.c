#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: pointer to the beginning of the list
 *
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *trans_v;

	if (head == NULL)
	{
		return (0);
	}
	trans_v = head;
	while (trans_v != NULL)
	{
		sum = sum + trans_v->n;
		trans_v = trans_v->next;
	}
	return (sum);
}
