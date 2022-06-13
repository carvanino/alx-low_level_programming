#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: fist integer
 * @b: Second integer
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = b;
	*b = c;
}
