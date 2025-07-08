#include "main.h"

/**
 * print_sign - prints the sign (+ or -) of a given number
 * @n: the number to be tested
 *
 * Return: 1 if n > 0. 0 is n == 0. -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
