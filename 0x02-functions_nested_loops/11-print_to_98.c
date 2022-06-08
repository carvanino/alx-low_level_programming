#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints list of number to 98
 *
 * Return: Always 0 (Success)
 *
 * @n: integer from where list starts
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	printf("%d", n);
	printf("\n");
}
