#include <stdio.h>

/**
 * main - prints number 1 to 100 ommitting multiples of 3 and 5 
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num;

	num = 1; 
	while (num <= 100)
	{
		if (num % 3 = 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 = 0)
		{
			printf("Buzz ")
		}
		else if (num % 3 = 0 && num % 5 = 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", num);
		}

		num++;
	}
	putchar('\n');
	return (0);
}
