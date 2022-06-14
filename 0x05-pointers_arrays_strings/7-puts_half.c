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

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}
	for (i = len - n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
