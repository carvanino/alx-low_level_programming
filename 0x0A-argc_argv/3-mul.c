#include <stdio.h>
#include <stdlib.h>

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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
