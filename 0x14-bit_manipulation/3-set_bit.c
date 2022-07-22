#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 *
 * @n: integer
 * @index: position of bit to set
 *
 * Return: 1 if Success -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
	{
		return (-1);
	}

	m = 1 << index;
	*n = (*n | m);

	return (1);

}

