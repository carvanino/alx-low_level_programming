#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: Character to be checked
 *
 * Return: 1 (Success) 0 (Failure)
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
		return (0);
	}
}
