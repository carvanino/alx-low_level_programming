#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %d\n", sizeof(char) + "byte(s)");
	printf("Size of an int: %d\n", sizeof(int));
	printf("Size of a long int: %d\n", sizeof(long int));
	printf("Size of a long long int: %d\n", sizeof(long long int));
	printf("Size of a float: %d\n", sizeof(f));
	return (0);
}
