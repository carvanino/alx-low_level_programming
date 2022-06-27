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
	c = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		_putchar(c[i]);
	}
	return (0);
}
