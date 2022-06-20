#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: main string
 * @needle: substring to be located in string
 *
 * Return: a poubter to the beginning of substring in string (success)
 * NULL (fail)
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
