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
	int a;
	int b;

	for (a = 'a'; a <= 'z'; a++)
	{
		for (b = 'A'; b <= 'Z'; b++)
		{
			if (a == c || b == c)
			{
				return (1);
			}
		}
	}
	return (0);
}
