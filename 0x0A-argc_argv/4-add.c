#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two integer
 *
 * @argc: number of command pine arguments
 * @argv: array containing the prigram command line argument
 *
 * Return: 0 - Success otherwise return 1
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!(isdigit(*argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + (atoi(argv[i]));
		}
		continue;
	}
	printf("%d\n", sum);
	return (0);
}
