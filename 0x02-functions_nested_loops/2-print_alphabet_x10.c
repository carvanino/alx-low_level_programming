#include "main.h"

/**
 * main -check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet_x10();
	return(0);
}
void print_alphabet_x10(void)
{
	int alpha;
	int step;

	step = '0';
	while (step < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
			_putchar('\n');
		}
	}
	return(alpha);
}
