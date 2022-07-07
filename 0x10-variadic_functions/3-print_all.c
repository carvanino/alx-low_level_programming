#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_char - prints a character
 *
 * @ap: pointer to argument parameter
 *
 * Return: character
 */

void print_char(va_list *ap)
{
	char c;

	c = va_arg(*ap, int);
	printf("%c", c);
}

/**
 * print_int - prints integer
 *
 * @ap: pointer to argument parameter
 *
 * Return: Integer
 */

void print_int(va_list *ap)
{
	int i;

	i = va_arg(*ap, int);
	printf("%i", i);
}

/**
 * print_float - prints float
 *
 * @ap: pointer to argument parameter
 *
 * Return: Float
 */

void print_float(va_list *ap)
{
	float f;

	f = va_arg(*ap, double);
	printf("%f", f);
}
/**
 * print_string - prints a string
 *
 * @ap: pointer to argument parameter
 *
 * Return: String
 */

void print_string(va_list *ap)
{
	char *str;

	str = va_arg(*ap, char *);
	if (str == NULL || *str == '\0')
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 * print_all - prints anything based on format specifiers
 *
 * @format: types of argument passed
 *
 * Return: anything passed
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *separator = "";
	int i, j;
	f_types check[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	i = 0;
	while (format != NULL && (*(format + i)) != '\0')
	{
		j = 0;
		while (check[j].identifier != NULL)
		{
			if (*(check[j].identifier) == *(format + i))
			{
				printf("%s", separator);
				check[j].type(&ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
