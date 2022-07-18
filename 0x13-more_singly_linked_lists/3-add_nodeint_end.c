#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 *
 * @head: a pointer to the beginning of the list
 * @n: new integer to be added to the new list through the new node
 * Return: The address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *trans_v;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		trans_v = *head;
		while (trans_v->next != NULL)
		{
			trans_v = trans_v->next;
		}
		trans_v->next = newnode;
	}
	return (newnode);
}
