#include "main.h"

/**
 * print_triangle - prints character using character #
 *
 * @size: rep. size of triangle to be printed
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int c = 0, i,  n = size - 1;

	if (size > 0)
	{
		for (c = 0; c < size; c++)
		{
			for (i = 0; i < size; i++)
			{
				if (i < n)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			n--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
