#include "main.h"

/**
 * times_table - prints time tables from 0 to 9, included.
 *
 * Return: 0.
 */

void times_table(void)
{
	int a = 0;

	while (a <= 9)
	{
		int b = 0;

		while (b <= 9)
		{
			int p = (a * b);

			if (b == 0)
			{
				_putchar(p + '0');
			}

			else
			{
				_putchar(',');

				if (p < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}

				else
				{
					_putchar(' ');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
			}

			b++;
		}

		_putchar('\n');
		a++;
	}
}
