#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocates memory for array
* @nmemb: number of elements in array
* @size: nb of bytes used by each element
*
* Return: pointer to allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * sizeof(size));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		array[i] = 0;

	return (array);
}