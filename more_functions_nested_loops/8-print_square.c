#include "main.h"

/**
 * print_square - prints a square using # symbol
 * @size: size of the square we want to print
 *
 * Return: none (void)
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
				_putchar(35);

			_putchar('\n');
		}
	}
}
