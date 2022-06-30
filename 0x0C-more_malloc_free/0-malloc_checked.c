#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory allocated
 *
 * Return: process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *A;

	A = malloc(sizeof(*A) * b);

	if (A == NULL)
	{
		exit(98);
	}
	return (A);
}
