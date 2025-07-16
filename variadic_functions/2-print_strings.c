#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - prints provided strings
* @separator: printed between given strings
* @n: amount of strings to be printed
*
* Return: none (void)
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *ascii;
	unsigned int i = 0;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		ascii = va_arg(strings, char *);

		if (ascii == NULL)
			printf("(nil)");
		else
			printf("%s", ascii);

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
		else if (separator != NULL && i >= (n - 1))
			printf("\n");
	}
	va_end(strings);
}
