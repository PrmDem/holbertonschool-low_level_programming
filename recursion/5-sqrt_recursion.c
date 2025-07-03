#include "main.h"

/**
 * count - returns value to sqrt_recursion
 * @n: int to get sqrt from
 * @x: int (sqrt)
 *
 * Return: int x
 */

int count(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (count(n, x + 1));
}

/**
 * _sqrt_recursion - returns natural square root of given number
 * @n: int to get square root for
 *
 * Return: int (square root)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (count(n, 0));
}
