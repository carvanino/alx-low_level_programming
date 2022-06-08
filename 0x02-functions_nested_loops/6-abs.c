#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * Return: Always 0 Success
 * @num: input to be computed
 */

int _abs(int num)
{

	if (num < 0)
	{
		return (num * -1);
	}
	else
	{
		return (num);
	}
}
