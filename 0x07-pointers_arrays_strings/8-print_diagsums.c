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
	int i, j;
	int sum1;
	int sum2;

	for (i = 0; i < size; i++)
	{
		for (j = 0; i < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + a[i];
			}
			if ((i + j) == (size - 1))
			{
				sum2 = sum2 + a[i];
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
