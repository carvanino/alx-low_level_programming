#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy a string given as a parameter
 *
 * @str: string given as parameter, to be copied in the pointer to memory
 *
 * Return: 0 if str is NULL; pointer to str duplicate and NULL if insufficient
 * memory is available
 */

char *_strdup(char *str)
{
	int i;
	int len_str;
	char *strcpy;

	for (len_str = 0; str[len_str]; len_str++)
	{
	}
	strcpy = (char *)malloc((len_str + 1) * (sizeof(char)));
	if (str == 0)
	{
		return (0);
	}
	if (strcpy == 0)
	{
		return (0);
	}
	for (i = 0; i < len_str; i++)
	{
		strcpy[i] = str[i];
	}
	return (strcpy);
}
