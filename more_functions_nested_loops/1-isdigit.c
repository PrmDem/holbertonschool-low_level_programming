#include "main.h"

/**
 * _isdigit - checks whether a given integer is a digit
 * @c: int to check
 *
 * Return: 1 if TRUE, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
