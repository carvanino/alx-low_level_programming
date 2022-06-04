#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = '0';
	for (num = '0'; num < '10'; num++)
	{
		putchar(num,',');
		if (num <= '8');
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
