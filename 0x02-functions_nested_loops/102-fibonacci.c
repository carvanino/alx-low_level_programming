#include <stdio.h>

/**
 * main - Entry p oint
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int seq;
	long int fibo;
	long int n1;
	long int n2;
	
	seq = 0;
	n1 = 0;
	n2 = 1;

	while (seq < 50)
	{
		fibo = n1 + n2;
		n1 = n2;
		n2 = fibo;
		printf("%lu", fibo);

		if (seq < 49)
		{
			printf(", ");
		}
		seq++;
	}
	printf("\n");
	return (0);
}

