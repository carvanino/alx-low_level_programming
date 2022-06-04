#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char rev_alpha;

	rev_alpha = 'a';
	for (rev_alpha = 'a'; rev_alpha <= 'z'; rev_alpha--);
		putchar(rev_alpha);
	putchar('\n');
	return (0);
}
