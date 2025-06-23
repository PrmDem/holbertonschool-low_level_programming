#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times,
 * each iteration on its own line
 *
 * Return: none (void)
 */

void more_numbers(void)
{
	int l = 0, n;

	while (l < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');

			_putchar((n % 10) + '0');
		}

		_putchar('\n');
		l++;
	}
}
