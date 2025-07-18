#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);
void print_c(va_list input);
void print_i(va_list input);
void print_float(va_list input);
void print_s(va_list input);

/**
* struct format_base - input of variable types
* @flag: accepted type of input
* @print: printf tailored to type
*
*/

typedef struct format_base
{
	char *flag;
	void (*print)(va_list input);
} template;

#endif
