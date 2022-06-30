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
	unsigned int len_s1, len_s2, len, lens, i;
	char *catstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len_s1 = 0; s1[len_s1]; len_s1++)
	{
	}
	for (len_s2 = 0; s2[len_s2]; len_s2++)
	{
	}

	len = len_s1 + n;
	lens = len_s1 + len_s2;
	if (n <  len_s2)
	{
		catstr = malloc(sizeof(char) * (len +  1));
	}
	else
	{
		catstr = malloc(sizeof(char) * (lens + 1));
	}
	if (catstr == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
	{
		catstr[i] = s1[i];
	}
	for (i = 0; n < len_s2 && i < len; i++)
	{
		catstr[len_s1 + i] = s2[i];
	}
	for (i = 0; n >= len_s2 && i < lens; i++)
	{
		catstr[len_s1 + i] = s2[i];
	}
	catstr[i] = '\0';
	return (catstr);
}
