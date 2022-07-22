#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned integer
 * @b: pointer to a binary character
 *
 * Return: unsigned int || 0
 * otherwise: NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, b_2;

	if (!b)
	{
		return (0);
	}
	i = 0;

	for (len = 0; b[len]; len++)
	{
	}
	for (len--, b_2 = 1; len >= 0; len--, b_2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			i = i + b_2;
		}
	}

	return (i);
}
