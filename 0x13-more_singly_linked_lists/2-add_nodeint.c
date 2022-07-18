#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 *
 * @head: A pointer to the first node in the list
 * @n: new integer to the added to the list as a node
 *
 * Return: The address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
