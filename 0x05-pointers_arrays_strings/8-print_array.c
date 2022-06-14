#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element array of integers
 *
 * @a: Integers to be in array
 * @n: Integers to be printed in array
 *
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
