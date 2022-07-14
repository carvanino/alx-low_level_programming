#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 *
 * @head: a pointer to the beginning of the list
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (ptr = head)
	{
		ptr = ptr->next;
		free(ptr->str);
		free(ptr);
	}
}
