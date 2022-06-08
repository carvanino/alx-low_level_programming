#include "main.h"

/**
 * print_last_digit - print last digit of number
 *
 * Return: Value of last digit
 * @num: interger given
 */

int print_last_digit(int num)
{
	int l_dig;

	l_dig = num % 10;
	if (l_dig  < 0)
	{
		l_dig = l_dig * -1;
	}
	_putchar('0' + l_dig);
	return (l_dig);
}
