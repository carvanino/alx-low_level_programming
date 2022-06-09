#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: character to be checked
 *
 * Return: 1 (success), 0 (fail)
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
