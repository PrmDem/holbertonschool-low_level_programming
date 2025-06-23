#include "main.h"

/**
 * print_diagonal - prints a diagonal using ascii 92
 * @n: The number to be checked
 *
 * Return: none (void)
 */

void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y <= x; y++)
		{
			if (y == x)
				_putchar(92);
			else
				_putchar(' ');
		}

		_putchar('\n');

	}
}
