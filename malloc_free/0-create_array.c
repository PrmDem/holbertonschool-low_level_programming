#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* create_array - creates an array of char
* @size: desired array size
* @c: character to initialise
*
* Return: pointer to array or NULL if size = 0.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));

	for (i = 0; i <= size; i++)
	{
		array[i] = c;
	}

	if (size == 0)
		return ('\0');

	else
		return (array);

	free(array);
}
