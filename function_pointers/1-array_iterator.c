#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - executes given action
* @array: array of elems to exec on
* @size: size of the array
* @action: pointer to function we want to execute
*
* Return: none (void)
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	for (i = 0; i < size; i++)
		action(array[i]);
}
