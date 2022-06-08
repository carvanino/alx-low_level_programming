#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int a;
	unsigned long int fibo;
	unsigned long int n1;
	unsigned long int n2;

	a = 0;
	n1 = 0;
	n2 = 1;
	fibo = 0;

	while (a < 98)
	{
		fibo = n1 + n2;
		n1 = n2;
		n2 = fibo;
		printf("%lu", fibo);

		if (a < 97)
		{
			printf(", ");
		}
		a++;
	}
	putchar('\n');
	return (0);
}
