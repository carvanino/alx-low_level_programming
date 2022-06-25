#include <stdio.h>

/**
 * main - prints the number od argument passed into the command line
 *
 * @argc: number of command line arguments
 * @argv: array containing the prigram command line argument
 *
 * Return: 0 - Success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
