#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for digit 0 - 9
 *
 * @c: character to be checked
 *
 * Return: 1 (Success), 0 (Fail)
 */

int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}

	return (0);
}
