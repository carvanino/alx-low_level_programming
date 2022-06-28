#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2D array of integers
 *
 * @width: row element of array
 * @height: number of element in array | array column
 *
 * Return: NULL if fail; NULL if width and height is <= 0
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **array;

	if (width == 0)
	{
		return (NULL);
	}
	if (height == 0)
	{
		return (NULL);
	}

	array = (int **)malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			while (i >= 0)
			{
				free(array[i]);
				i--;
			}
			free(array);
			return(NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}


