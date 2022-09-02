#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 *
 * @head: Double pointer to the beginning of the list
 * @n: integer value at the new node
 *
 * Return: address to the new element if Success
 * Otherwise: NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		newnode->n = n;
		newnode->next = *head;
		newnode->prev = NULL;

		(*head)->prev = newnode;
	}
	*head = newnode;
	return (newnode);
}
