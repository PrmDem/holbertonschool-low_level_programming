#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - calculates sum of given ints
* @n: number of parameters given
*
* Return: result as an int
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list nmb;
	int sum = 0;
	unsigned int i = 0;

	va_start(nmb, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nmb, int);
	}

	va_end(nmb);

	return (sum);
}
