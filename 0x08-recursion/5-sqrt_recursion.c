#include "main.h"

int numsqr(int n, int i);

/**
 * _sqrt_recursion - prints the square root of a number
 *
 * @n: number to find the square root
 *
 * Return: Square root of number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (numsqr(n, 0));
}

/**
 * numsqr - checks if number, n is a perfect square
 *
 * @n: number to find square root
 * @i: possible squares root value of n
 *
 * Return: i, if it fulfils the condition of squareroot
 */

int numsqr(int n, int i)
{
	if (i >= (n / 2))
	{
		return (-1);
	}
	if ((i * i) == n)
	{
		return (i);
	}
	else
	{
		return (numsqr(n, i + 1));
	}
}
