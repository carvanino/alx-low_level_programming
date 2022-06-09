#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 *
 * @c: character to be checked
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
}
