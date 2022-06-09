#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 *
 * @c: character fo be checked
 *
 * Return: 1 (success), 0 (fail)
 */
int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
