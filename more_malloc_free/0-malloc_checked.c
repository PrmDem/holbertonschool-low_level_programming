#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocates memory
* @b: amount of memory to allocate
*
* Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *mall;

	mall = malloc(b);

	if (mall == NULL)
		exit(98);

	return (mall);
}
