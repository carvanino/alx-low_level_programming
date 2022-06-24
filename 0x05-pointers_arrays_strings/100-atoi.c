#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: parameter name
 *
 * Return: value of integer
 */

int _atoi(char *s)
{
	int i, j, k, len, m, tmp;

	int i = 0;
	int j = 0;
	int k = 0;
	int len = 0;
	int m = 0;
	int tmp = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && m == 0)
	{
		if (s[i] == '-')
		{
			++j;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			tmp = s[i] - '0';
			if (j % 2)
			{
				tmp = -tmp;
			}
			k = k * 10 + tmp;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			m = 0;
		}
		i++;
	}
	if (m == 0)
	{
		return (0);
	}
	return (k);
}
