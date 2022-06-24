#include "main.h"

/**
 * _atoi - converts string to integer
 *
 * @s: string to be converted
 *
 * Return: 0 string doesnt contain number, 1 otherwise.
 */

int _atoi(char *s)
{
	int a = 1;
	int i;
	int r = 0;

	for (i = 0; !(s[i] >= 48 && s[i] <= 57); i++)
	{
		if (s[i] == '-')
		{
			a = a * -1;
		}
	}
	for (i = 0; s[i] >= 48 && s[i] <= 57; i++)
	{
		r = r * 10;
		r = r + (s[i] - 48);
	}
	return (a * r);
}
