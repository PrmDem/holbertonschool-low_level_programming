#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* free_dog - frees previously created dog
* @d: pointer to a dog to free
*
* Return: none (void)
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
	}

	free(d);
}
