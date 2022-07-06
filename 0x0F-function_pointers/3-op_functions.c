#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - gets the sum of two integers
 *
 * @a: interger 1
 * @b: integer 2
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two integers
 *
 * @a: interger 1
 * @b: integer 2
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two integers
 *
 * @a: interger 1
 * @b: integer 2
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the quotient of two integers
 *
 * @a: interger 1
 * @b: integer 2
 *
 * Return: quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the modulus of two integers
 *
 * @a: interger 1
 * @b: integer 2
 *
 * Return: modulus
 */

int op_mod(int a, int b)
{
	return (a % b);
}
