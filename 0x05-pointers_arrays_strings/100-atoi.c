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
	int FirstNum;
	int r = 0;

	for (FirstNum = 0; !(s[FirstNum] >= 48 && s[FirstNum] <= 57); FirstNum++)
	{
		if (s[FirstNum] == '-')
		{
			a = a * -1;
		}
	}
	for (int i = FirstNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		r = r * 10;
		r = r + (s[i] - 48);
	}
	return (a * r);
}
