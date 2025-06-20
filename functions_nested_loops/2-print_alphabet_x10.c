#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet ten times
 */

void print_alphabet_x10(void)
{
	int n = 1, i;

	while (n <= 10)
	{
		i = 97;

		while (i <= 122)
		{
			_putchar(i);
			i++;
		}

		_putchar('\n');
		n++;
	}

}
