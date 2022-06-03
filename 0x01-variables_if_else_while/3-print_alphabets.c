#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphA;
	char alpha;

	if ((alpha = 'a'), alpha <= 'z', alpha++)
	{
		putchar(alpha);
	}
	for (alphA = 'A'; alphA <= 'Z'; alphA++)
	{
		putchar(alphA);
	}
	putchar('\n');
	return (0);
}
