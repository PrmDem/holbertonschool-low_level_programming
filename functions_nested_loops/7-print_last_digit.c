#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number
 * @n: number to print last digit of
 *
 * Return: always 0
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = -last;

	_putchar(last + '0');

	return (last);
}
