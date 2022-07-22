#include "main.h"

/**
 * clear_bit - set the value of a bit at a given index to 0
 *
 * @n: pointer to integer
 * @index: position of bit to be cleared
 *
 * Return: 1 if Success, -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
	{
		return (-1);
	}

	i = 1 << index;

	if (*n & i)
	{
		*n ^= i;
	}

	return (1);
}
