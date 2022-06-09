#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14 10 times followed by a new line
 *
 * Return: Always 0 (Success)
 *
 */
void more_numbers(void)
{
	int num, num_;
	int loop;

	loop = 0;
	while (loop < 10)
	{
		for (num_ = 0; num_ <= 14; num_++)
		{
			num = num_;
			if (num_ > 9)
			{
				_putchar('1');
				num = num_ % 10;
			}
			_putchar('0' + num);
		}
		_putchar('\n');
		loop++;
	}
}
