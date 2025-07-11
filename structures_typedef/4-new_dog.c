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
	char *cpname;
	char *cpown;
	int sname = 0;
	int sowner = 0;
	int i = 0;

	if (name != NULL)
	{
		while (name[sname] != '\0')
		{
			sname++;
		}

		cpname = malloc(sizeof(char) * (sname + 1));
		if (cpname == NULL)
			return (NULL);

		for (i = 0; i < sname; i++)
		{
			cpname[i] = name[i];
		}
	}

	if (owner != NULL)
	{
		while (owner[sowner] != '\0')
		{
			sowner++;
		}

		cpown = malloc(sizeof(char) * (sowner + 1));
		if (cpown == NULL)
			return (NULL);

		for (i = 0; i < sowner; i++)
		{
			cpown[i] = owner[i];
		}
	}

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = cpname;
	dog->age = age;
	dog->owner = cpown;

	return (dog);
}
