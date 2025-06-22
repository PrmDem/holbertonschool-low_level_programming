#include "main.h"

/**
 * _abs - computes absolute value of given int
 * @n: int to get absolute value for
 *
 * Return: Always 0.
 */

int _abs(int n)
{
	n = (n * ((n > 0) - (n < 0)));
	return (n);
}
