#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of an array
 * in order, separated by a comma and a space
 * @a: pointer to array
 * @n: number of elements in the array
 *
 * Return: none (void)
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		n = -n;
	
	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d\n", a[i]);

		else
			printf("%d, ", a[i]);
	}
}
