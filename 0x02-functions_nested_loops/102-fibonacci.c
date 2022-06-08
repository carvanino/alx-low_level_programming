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
	int fibo;
	int n1;
	int n2;

	while (seq > 50)
	{
		fibo = n1 + n2;
		n1 = n2;
		n2 = fibo;
		printf("%l", fibo);

		if (seq < 49)
		{
			printf(", ");
		}
		seq++;
	}
	printf("\n");
	return (0);
}

