#include "main.h"

/**
 * print_line - draws a straight line
 *
 * @n: character rep length of line
 *
 * Return: Always 0 (Success
 *
 */
void print_line(int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		i++;
	}
	_putchar('\n');
}
