#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9, but excludes 2 and 4. 
 *
 * Return: Always 0 (Success)
 */
print_most_numbers(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		_putchar(num);
		if (num == '2' || num == '4')
		{
			break;
		}
		num++;
	}
}
