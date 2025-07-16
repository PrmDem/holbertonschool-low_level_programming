#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - prints provided numbers and separator
* @separator: printed between numbers
* @n: amount of integers to be printed
*
* Return: none (void)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nbr;
	unsigned int i = 0;

	va_start(nbr, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i % 4)
			printf("%s", separator);

		printf("%d", va_arg(nbr, int));
	}

	va_end(nbr);
	printf("\n");
}
