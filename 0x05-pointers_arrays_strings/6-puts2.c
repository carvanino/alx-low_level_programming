#include "main.h"

/**
 * puts2 - prints every other character starting with the first
 *
 * @str: Steing to be printed in that manner
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		_putchar(str[i]);
	}
}
