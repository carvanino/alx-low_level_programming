#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int amt;
	unsigned long int fibo;
	unsigned long int n1;
	unsigned long int n2;

	amt = 0;
	n1 = 0;
	n2 = 1;
	fibo = 0;

	while (amt < 98)
	{
		fibo = n1 + n2;
		n1 = n2;
		n2 = fibo;
		printf("%lu", fibo);

		if (amt < 97)
		{
			printf(", ");
		}
		amt++;
	}
	printf("\n");
	return (0);
}
