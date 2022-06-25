#include <stdio.h>

/**
 * main - prints the name of the file and a new line
 *
 * @argc: number of command pine arguments
 * @argv: array containing the prigram command line argument
 *
 * Return: 0 - Success
 */

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
