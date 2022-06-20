#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer printed to stdout
 *
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int n_ = n;

	if (n < 0)
	{
		_putchar('-');
		n_ = -n_;
	}
	if (n_ > 9)
	{
		print_number(n_ / 10);
	}
	_putchar(n_ % 10 + '0');
}
