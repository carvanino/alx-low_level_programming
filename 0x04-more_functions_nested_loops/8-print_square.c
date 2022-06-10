#include "main.h"

/**
 * print_square - prints a square using character #
 *
 * @size: size of square to be printed
 *
 * Return: Always 0 (success)
 */

void print_square(int size)
{
	int a = 0, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a < size )
		{
			i = 0;

			while (i < size)
			{
				_putchar('#');
				i++;
			}
			_putchar('\n');
			a++;
		}
	}
}
