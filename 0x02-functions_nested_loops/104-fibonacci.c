#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, next = 0;

	while (i < 100)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 99)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
