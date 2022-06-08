#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * Return: Always 0 Success
 * @n: input to be computed
 */

int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
