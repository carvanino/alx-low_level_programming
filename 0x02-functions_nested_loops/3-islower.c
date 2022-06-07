#include "main.h"
#include <ctype.h>

/**
 * int _islower(int c) - checks if character input is lowercase or not
 *
 * Return: 1 on Success and 0 on failure 
 */
int _islower(int c)
{
	int lower;
	lower = _islower(c);

	if (lower > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
