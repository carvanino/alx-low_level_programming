#include "main.h"

/**
 * _strcpy - a function that copies string
 *
 * @src: source
 * @dest: destination
 *
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len + 1; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
