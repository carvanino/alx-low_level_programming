#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory allocated
 *
 * Return: process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	int *A;

	A = malloc(b);

	if (A == NULL)
	{
		exit(98);
	}
	return (A);
}
