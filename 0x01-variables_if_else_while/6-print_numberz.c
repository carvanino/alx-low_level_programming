#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int decimal;

	decimal = '0';
	for (decimal = '0'; decimal <= '9'; decimal++)
		putchar(decimal);
	putchar('\n');
	return (0);
}
