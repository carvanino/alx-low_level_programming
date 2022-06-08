#include "main.h"

/**
 * print_sign - prints thw sign of a number
 *
 * Return: 1 if positive, 0 if zero, and -1 if negative
 *
 * @n: int type to be checked
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
