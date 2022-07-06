#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects function to perform operation asked by user
 *
 * @s: operator to be used
 *
 * Return: A pointer to the function that corresponds to the users operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}
	return (ops[i].f);
}
