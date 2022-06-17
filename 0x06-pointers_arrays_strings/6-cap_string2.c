#include "main.h"

/**
 * cap_string - capitalize each word in a string after the specified
 * word separators
 * @s: string given
 * Return: Capitalized string
 */

char *cap_string(char *s)
{
	int i;
	int p[] = {32, 9, 10, 44, 46, 59, 33, 63, 34, 123, 125, 40, 41};

	for (i = 0; s[i]; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		else if (s[i] == p[i])
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
