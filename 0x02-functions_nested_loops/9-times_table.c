#include "main.h"

/**
 * times_table - prints multiplication table from 0 to 12
 *
 * Return: Always 0 (Success)
 *
 */

void times_table(void)
{
	int num;
	int num_;
	int t;

	for (num = '0'; num <= '9'; num++)
	{
		for (num_ = '0'; num_ <= '9'; num++)
		{
			_putchar(num);
			_putchar(*);
			_putchar(num_);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
