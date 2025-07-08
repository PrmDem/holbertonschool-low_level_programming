#include "main.h"

/**
 * print_line - prints a line using _
 * @n: number of times _ should be printed
 *
 * Return: none (void)
 */

void print_line(int n)
{
	if (n > 0)
	{
		int u = 1;

		while (u <= n)
		{
			_putchar('_');
			u++;
		}
	}

	_putchar('\n');
}
