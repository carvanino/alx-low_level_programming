#ifndef VARIADIC_FUNC_H
#define VARIADIC_FUNC_H

#include <stdarg.h>

/**
 * struct form_types - contains identifier and pointer to function
 *
 * @identifier: format type, int(i), char(c), float(f), string(s)
 * @type: pointer to function that takes an unknown number of variable list
 *
 */

typedef struct form_types
{
	char *identifier;
	void (*type)(va_list *);
} f_types;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNC_H */
