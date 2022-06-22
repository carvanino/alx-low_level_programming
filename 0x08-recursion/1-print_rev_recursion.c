#include "main.h"

/**
 * _print_rev_recursion - prints the reverse of string using recursion
 *
 * @s: string to be reversed
 *
 * Return: 0 at the beginning of string
 */

void _print_rev_recursion(char *s)
{

	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
