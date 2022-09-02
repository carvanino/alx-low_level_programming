#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list from the heap memory
 *
 * @head: pointer to the beginning of the list
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *transv;

	while (head != NULL)
	{
		transv = head->next;
		free(head);
		head = transv;
	}
}
