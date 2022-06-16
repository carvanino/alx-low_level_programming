#include "main.h"

/**
 * cap_string - capitalize each word in a string after the specified
 * word separators
 *
 * @s: string given
 *
 * Return: Capitalized string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		else if	(s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n')
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		else if (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.')
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		else if (s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"')
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		else if (s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{')
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		else if (s[i - 1] == '}')
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		return (s[i]);
	}
}

