#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int stop;
	long int sum;
	long int n1;
	long int n2;

	stop = 0;
	n1 = 0;
	n2 = 1;
	sum = 0;
	while (stop < 4000000)
	{
		stop = n1 + n2;
		n1 = n2;
		n2 = stop;
		if (stop % 2 == 0)
		{
			sum = sum + stop;
		}
	}
	printf("%li\n", sum);
	return (0);
}
