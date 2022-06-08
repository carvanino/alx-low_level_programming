#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * Return: Always 0 Success
 *
 */

int _abs(int)
{
	int num;
	int a;

	if (num < '0')
	{
		a = num * '-1';
		_putchar(a);
	}
	else
	{
		_putchar(num);
	}
}
