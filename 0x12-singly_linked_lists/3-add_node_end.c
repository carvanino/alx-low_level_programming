#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds new node at the end of a list
 *
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: The address of the new element
 * Otherwise: NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *newlist;
	int len;
	char *cpy;

	end = malloc(sizeof(list_t));
	if (end == NULL)
	{
		return (NULL);
	}
	cpy = strdup(str);
	if (cpy == NULL)
	{
		free(end);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
	{
	}
	end->len = len;
	end->str = cpy;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
	}
	else
	{
		newlist = *head;
		while (newlist->next != NULL)
		{
			newlist = newlist->next;
		}
		newlist->next = end;
	}

	return (end);
}
