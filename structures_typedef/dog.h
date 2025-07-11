#ifndef DOG_H
#define DOG_H

/**
* name - typedef for string of chars
*/
typedef char *name;

/**
* age - typedef for float
*/
typedef float age;

/**
* char - typedef for string of chars
*/
typedef char *owner;

/**
* struct dog - for our dog facts
* @name: dog's name
* @age: dog's age
* @owner: owner's name
*
* Contains name, age, and owner
* of any dog, big or small
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
