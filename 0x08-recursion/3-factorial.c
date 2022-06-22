#include "main.h"

/**
 * factorial - prints the factorial of a number
 *
 * @n: Integer to determine its factorial
 *
 * Return: Factorial of interger
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
