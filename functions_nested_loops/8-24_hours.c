#include "main.h"

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h, o, m, n;

	for (h = 0; h <= 2; h++)
	{
		for (o = 0; o <= 9; o++)
		{
			if (h == 2 && o > 3)
				break;

			for (m = 0; m <= 5; m++)
			{
				for (n = 0; n <= 9; n++)
				{
					_putchar(h + '0');
					_putchar(o + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(n + '0');
					_putchar('\n');
				}
			}
		}
	}
}
