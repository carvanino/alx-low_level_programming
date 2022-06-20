#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 *
 * @s: string to be searched
 * @accept: character/bytes searched for
 *
 * Return: a pointer to the char s that matches any of the bytes in accept
 * if success; NULL is fail
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
