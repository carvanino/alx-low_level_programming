#include "main.h"

/**
 * _strncat - concatenate two strings but selects the size of source
 *
 * @dest: destination of appended string
 * @src: string to be concatenated
 * @n: Integer declaring the size of source appendable
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_d, len_s, i;

	for (len_d = 0; dest[len_d]; len_d++)
	{
	}
	for (len_s = 0; src[len_s]; len_s++)
	{
	}
	for (i = 0; src[i]; i++, len_d++)
	{
		if (len_s <= n)
		{
			dest[len_d + i] = src[i];
		}
	}
	return (dest);
}
