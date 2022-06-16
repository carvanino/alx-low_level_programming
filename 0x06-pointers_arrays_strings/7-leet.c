#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: string ti be encoded
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i, j;

	for (j = 0; s[j]; j++)
	{
	for (i = 0; a[i]; i++)
	{
		if (s[j] == a[i])
		{
			s[j] = b[i];
		}
	}
	}
	return (s);
}
