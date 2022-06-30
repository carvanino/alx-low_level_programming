#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: First number in the array
 * @max: last number the array contains.
 *
 * Return: pointer to array on Success; NULL if fail
 */

int *array_range(int min, int max)
{
	int i, size;
	int *array;
	
	if (min > max)
	{
		return (NULL);
	}
	
	size = max - min;
	array = malloc(sizeof (*array) * (size + 1));

	if (array == 0)
	{
		return (NULL);
	} 
	for (i = 0; i <= size; i++)
	{
		array[i] = min++;
	}
	return (array);
}
