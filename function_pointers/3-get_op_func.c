#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* get_op_func - selects correct function
* @s: operator
*
* Return: NULL if no match
* result to func if found
*/

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);

		i++;
	}

	return (0);
}
