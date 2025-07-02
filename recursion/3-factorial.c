#include "main.h"

/**
 * factorial - returns factorial of given number
 * @n: integer number to find factorial of
 *
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
