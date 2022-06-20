#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: characters destination
 * @src: source to be copied
 * @n: size of src to be copied
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
