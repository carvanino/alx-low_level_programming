#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 *
 * @head: a pointer to the beginning of the list
 * 
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
