#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * Return: 1 if Success and 0 for failure
 *
 * @c: character type
 */

int _isalpha(int c)
{
	int low_alpha;
	int up_alpha;

	low_alpha = 'a';
	up_alpha = 'A';

	if (low_alpha <= 'z' && up_alpha <= 'Z')
	{
		if (c == low_alpha || c == up_alpha)
		{
			return (1);
		}
	}
	return (0);
}
