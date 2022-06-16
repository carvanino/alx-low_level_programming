#include "main.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: destination of stding to be concatenated
 * @src: string to be concatenated
 *
 * Return: concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	for (len = 0; dest[len]; len++)
	{
	}
	for (i = 0; src[i]; i++, len++)
	{
		dest[len] = src[i];
	}
	return (dest);
}
