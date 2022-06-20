#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the diagonal of a square matrix of integers
 *
 * @a: array name
 * @size: size of element in array
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		sum2 = sum2 + a[(size - i) - 1];
		a = a + size;
	}
	printf("%d, %d\n", sum1, sum2);
}
