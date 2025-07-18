#include "variadic_functions.h"

/**
* print_c - prints a character
* @input: input from user
*
* Return: none (void)
*/

void print_c(va_list input)
{
	printf("%c", va_arg(input, int));
}

/**
* print_i - prints an integer
* @input: input from user
*
* Return: none (void)
*/

void print_i(va_list input)
{
	printf("%i", va_arg(input, int));
}

/**
* print_float - prints a float
* @input: input from user
*
* Return: none (void)
*/

void print_float(va_list input)
{
	printf("%f", va_arg(input, double));
}

/**
* print_s - prints a string of characters
* @input: input from user
*
* Return: none (void)
*/

void print_s(va_list input)
{
	printf("%s", va_arg(input, char *));
}

/**
* print_all - prints provided numbers and separator
* @format: accepted, printable formats
*
* Return: none (void)
*/

void print_all(const char * const format, ...)
{
	va_list input;
	int counter = 0;
	int formcnt = 0;

	template accepted[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_float},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(input, format);

	while (format[formcnt] != '\0')
	{
		counter = 0;

		while (accepted[counter].flag != NULL)
		{
			if (format[formcnt] == (*accepted[counter].flag))
			{
				accepted[counter].print(input);

				if (format[formcnt + 1] != '\0')
					printf(", ");
			}

			counter++;
		}

		formcnt++;
	}

	printf("\n");
}
