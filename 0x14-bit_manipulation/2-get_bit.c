#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: integer
 * @index: position of bit
 *
 * Return: value of bit at index
 * otherwise: -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
	{
		return (0);
	}
	for (i = 0, i < 64; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
