#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to make the search for substrings
 * @accept: substring
 *
 * Return: no of bytes in string that contains the initial segment of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count;

	count = 0;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (count);
}
