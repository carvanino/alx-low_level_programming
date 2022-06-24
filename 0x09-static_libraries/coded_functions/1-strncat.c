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
	int len_d, len_s;

	len_d = 0;
	while (dest[len_d] != '\0')
	{
		len_d++;
	}

	len_s = 0;
	while (src[len_s] != '\0')
	{
		if (len_s < n)
		{
			dest[len_d + len_s] = src[len_s];
		}
		len_s++;
	}
	return (dest);
}
