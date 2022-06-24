#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 *  @s: address of the memory to print
 *  @b: The byte that fills the memory
 *  @n: The size of the memory to print
 *
 *  Return: pointer to the memory address
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
