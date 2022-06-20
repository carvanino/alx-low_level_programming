#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to string
 * @c: chracter to be located in string
 *
 * Return: pointer to c first occurrence (sucess), NULL (fail)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
