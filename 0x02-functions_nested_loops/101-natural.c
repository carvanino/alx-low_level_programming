#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num;
	int su_mul;

	num = 0;
	su_mul = 0;

	while (num < 1024)
	{
		if (num % 3 == 0 || num % 5  == 0)
		{
			su_mul = su_mul + num;
		}
		num++;
	}
	printf("%d", su_mul);
	printf("\n");
	return (0);
}
