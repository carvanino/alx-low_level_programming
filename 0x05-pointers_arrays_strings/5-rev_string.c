#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: string thag will be reversed
 *
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i, len, left, right;
	char t;

	for (len = 0; s[len]; len++)
	{
	}
	left = 0;
	right = len - 1;

	for (i = left; i < right; i++)
	{
		t = s[i];
		s[i] = s[right];
		s[right] = t;
		right--;
	}
}
