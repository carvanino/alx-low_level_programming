#include "main.h"

/**
 * _strcmp - compares two string and returns their differences in int
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 (Success) s1 - s2 (Fail)
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
