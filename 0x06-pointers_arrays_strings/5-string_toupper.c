#include "main.h"

/**
 * string_toupper - changes lowercase letter of a string to uppercase
 *
 * @s: string
 *
 * Return: Always 0
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] <= 'a' && s[i] >= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
