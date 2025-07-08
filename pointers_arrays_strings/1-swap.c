#include "main.h"

/**
 * swap_int - swaps the values of two given int
 * @a: first value
 * @b: second value
 *
 * Return: none (void)
 */

void swap_int(int *a, int *b)
{
	int c = 0;

	c = *b;
	*b = *a;
	*a = c;
}
