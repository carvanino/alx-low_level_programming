#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: number of array element
 * @size: amount of bytes for array element
 *
 * Return: NULL if fail
 */

-void *_calloc(unsigned int nmemb, unsigned int size)
{
	char* array;
	unsigned int i;

	if (nmemb == 0)
	{
		return (NULL)
	}
	if (size == 0)
	{
		return (NULL)
	}

	array = malloc(size * nmemb);
	if (array == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = 0;
	}
	return (array);
}
