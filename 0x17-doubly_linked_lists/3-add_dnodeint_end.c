#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 *
 * @head: Pointer to the beginning of the list
 * @n: integer to added to the list at the new node
 *
 * Return: Address of the new node if Success
 * Otherwise: NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *transv;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head != NULL)
	{
		transv = *head;
		while (transv->next != NULL)
		{
			transv = transv->next;
		}
		transv->next = newnode;
		newnode->prev = transv;
	}
	else
	{
		*head = newnode;
	}

	return (newnode);
}
