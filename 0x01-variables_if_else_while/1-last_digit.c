#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int b = 'n' % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (b > 5)
	{
		printf("The last digit of %d is %u and is greater than 5", n, b);
	}
	else if (b == 0)
	{
		printf("The last digit of %d is %d and is zero", n, b);
	}
	else if (b < 6)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0", n, b);
	}
	return (0);
}
