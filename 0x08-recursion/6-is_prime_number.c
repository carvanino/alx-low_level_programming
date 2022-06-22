#include "main.h"

int prime_number(int n, int i);

/**
 * _is_prime_number - checks if number is a prime number
 *
 * @n: input to be checked
 *
 * Return: 1 if n is prime number and 0 if not
 */

int is_prime_number(int n)
{
	return (prime_number(n, 1));
}

/**
 * prime_number - checks n it satisfies prime number conditions
 *
 * @n: number to be checked
 * @i: 
 *
 * Return: 1 if number satisfies and 0 if not
 */

int prime_number(int n, int i)
{
	if (n <= 1)
	{
		return(0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	else
	{
		return (prime_number(n, i + 1));
	}
}
