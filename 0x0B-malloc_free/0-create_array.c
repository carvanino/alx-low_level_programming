#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of char & initializes it with a specific char
 *
 * @size: size of array
 * @c: character to initialize
 *
 * Return: 0 if (Fail); NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char *)malloc(size * sizeof(char));
	if (size == 0)
	{
		return (0);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
