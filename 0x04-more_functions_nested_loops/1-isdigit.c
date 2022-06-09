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
	for (c = '0'; c <= '9'; c++)
	{
		return (1);
	}

	return (0);
}
