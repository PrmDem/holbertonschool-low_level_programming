#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initialises var of type struct dog
* @d: struct dog type variable
* @name: name of the dog
* @age: age of dog
* @owner: dog's best friend?
*
* Return: none (void)
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
