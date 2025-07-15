#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: scope for search
* @size: size of array
* @cmp: function to compare values
*
* Return: index of 1st elem
* for which cmp doesn't return 0
* or -1 if size <= 0 or no elem match
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
