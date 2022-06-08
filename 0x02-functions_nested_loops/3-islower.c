#include "main.h"

/**
 * _islower - checks if character input is lowercase or not
 *
 * @c: character type letter
 * Return: 1 on Success and 0 on failure
 */

int _islower(int c)
{
	int lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (c == lower)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
