#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 *
 * @s1: First string
 * @s2: Second string
 * @n: number of btyes allocated for s2 on memory
 *
 * Return: NULL if fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, i;
	char *catstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
	{
		len++;
	}

	catstr = malloc(sizeof(char) * (len +  1));
	if (catstr == NULL)
		return (NULL);
	len = 0;
	for (i = 0; s[i]; i++)
	{
		catstr[len++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		catstr[len++] = s2[i];
	}
	catstr[len] = '\0';
	return (catstr);
}
