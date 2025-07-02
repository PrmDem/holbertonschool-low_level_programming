#include "main.h"

/**
 * _pow_recursion - returns x to the power of y
 * @x: initial int
 * @y: power value
 *
 * Return: -1 if y < 0
 * value of x^y otherwise
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y > 1)
		x *= _pow_recursion(x, (y - 1));

	return  (x);
}
