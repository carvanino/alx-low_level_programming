#include "lists.h"
#include <string.h>

/**
 * add_node - adds node at the beginning of a list
 *
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: The address of the new element
 * Otherwise: NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *start;
	int len;
	char *cpy;

	start = malloc(sizeof(list_t));
	if (start == NULL)
	{
		return (NULL);
	}
	cpy = strdup(str);
	if (cpy == NULL)
	{
		free(start);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
	{
	}
	start->len = len;
	start->str = cpy;
	start->next = *head;

	*head = start;

	return (start);
}
