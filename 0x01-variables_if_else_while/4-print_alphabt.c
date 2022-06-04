#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	char alph_a;

	for (alph_a = 'a'; alph_a <= 'z'; alph_a++)
		putchar(alph_a);
	 if (alph_a != 'e' && alph_a != 'q')
	 {
		 continue;
	 }
	 putchar('\n');
	 return (0);
}
