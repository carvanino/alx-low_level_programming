#include "main.h"

/**
 * print_rev - prints the reverse of string
 *
 * @s: Character ti be printed in reverse
 *
 * Return; Always 0
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
