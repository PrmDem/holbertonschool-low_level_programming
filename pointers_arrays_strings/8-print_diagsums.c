#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of ints in a diagonal
 * @a: 2D array name
 * @size: size of array
 *
 * Return: none (void)
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum_a = 0;
	int sum_b = 0;

	for (i = 0; i < size; i++)
	{
		sum_a += a[i * (size + 1)];
	}

	for (i = 1; i <= size; i++)
	{
		sum_b += a[i * (size - 1)];
	}

		     printf("%d, %d\n", sum_a, sum_b);
}
