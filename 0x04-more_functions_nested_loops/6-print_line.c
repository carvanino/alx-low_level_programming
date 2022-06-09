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
	n = 0;

	while (n > 1)
	{
		_putchar('_');
		n++;
	}
}
