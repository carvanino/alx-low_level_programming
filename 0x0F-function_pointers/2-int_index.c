#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer and returns the integers first
 * occurrence index
 *
 * @array: array of integers
 * @size: sise of array
 * @cmp: funtion pointer
 *
 * Return: -1 if no element matches;
 * -1 if size <= 0; i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (-1);
		}
	}
	return (-1);
}
