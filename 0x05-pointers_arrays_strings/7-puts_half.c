#include "main.h"

/**
 * puts_half - prints half of a string with conditions
 *
 * @str: String to be printed in half
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
	int i, len, n;

	for (len = 0; str[len]; len++)
	{
		i = len / 2;
		for (; str[i]; i++)
		{
			_putchar(str[i]);
			n = (len - 1) / 2;

			if ((len / 2) != 0)
			{
				_putchar(str[n]);
			}
		}
	}
	_putchar('\n');
}
