#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: ref to the number of arrays total
 *
 * return: none (void)
 */

void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y;

	while (x < 8)
	{
		y = 0;

		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}

		_putchar('\n');
		x++;
	}
}
