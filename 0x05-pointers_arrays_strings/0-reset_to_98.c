#include "main.h"

/**
 * reset_to_98 - updates the value a pointer points to to 98
 *
 * @n: integer value to be updated
 *
 * Return: 0 Always
 */

void reset_to_98(int *n)
{
	int n = 98;
	int *r;

	r = &n;
	_putchar('*r');
}
