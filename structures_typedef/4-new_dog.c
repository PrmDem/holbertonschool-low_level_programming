#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* new_dog - creates a new dog
* @name: array of char
* @age: float
* @owner: array of char
*
* Return: pointer for new dog
* NULL on failure.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int sname = 0;
	int sowner = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	if (name != NULL)
	{
		while (name[sname] != '\0')
		{
			sname++;
		}
	}

	dog->name = malloc(sizeof(char) * (sname + 1));
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}

	if (owner != NULL)
	{
		while (owner[sowner] != '\0')
		{
			sowner++;
		}
	}

	dog->owner = malloc(sizeof(char) * (sowner + 1));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		return (NULL);
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
