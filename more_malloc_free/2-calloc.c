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
	void *array;

	array = malloc(size * nmemb);

	if (array == NULL || nmemb == 0 || size == 0)
		return (NULL);

	return (array);
}