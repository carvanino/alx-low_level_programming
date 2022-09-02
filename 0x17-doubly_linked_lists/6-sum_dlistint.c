#include "lists.h"

/**
 * sum_dlistint - sum the data in a linked list
 *
 * @head: pointer to the beginning of the list
 *
 * Return: Sum of all integers in the list
 * Otherwise: 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *transv;

	if (head == NULL)
	{
		return (0);
	}
	transv = head;

	while (transv != NULL)
	{
		sum = sum + transv->n;
		transv = transv->next;
	}
	return (sum);
}
