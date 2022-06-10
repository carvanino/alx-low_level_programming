#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: character representing length of line
 *
 * Return: Always 0.Success
 */
void print_diagonal(int n)
{
	int a = 0, i;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (i = 0; i < a; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
