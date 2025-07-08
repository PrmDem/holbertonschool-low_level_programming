#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: array
 * @n: number of elements in that array
 *
 * Return: none (void)
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int pass;

	while (start < end)
	{
		pass = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = pass;

		start++;
		end--;
	}
}
