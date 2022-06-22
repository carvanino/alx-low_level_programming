#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 *
 * @s: The string to be printed
 *
 * Return - New line if s is a NULL characte
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
