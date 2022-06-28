#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 *
 * @s1: First string
 * @s2: Second String
 *
 * Return: NULL if fail; pointer to a new string on Success
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int len_s1;
	int len_s2;
	int len;
	char *catstr;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	for (len_s1 = 0; s1[len_s1]; len_s1++)
	{
	}
	for (len_s2 = 0; s2[len_s2]; len_s2++)
	{
	}

	len = len_s1 + len_s2;
	catstr = (char *)malloc((len + 1) * sizeof(char));

	if (catstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{
		catstr[i] = s1[i];
	}
	for (i = 0; i < len; i++)
	{
		catstr[len_s1 + i] = s2[i];
	}
	return (catstr);
}
