#include "main.h"

/**
 * _puts - prints a strung followed by a new line
 *
 * @str: string to be printed
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
