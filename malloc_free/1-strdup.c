#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - duplicates string and returns pointer
* @str: string to duplicate
*
* Return: NULL if str = null or insufficient memory
* Pointer to duplicate of initial str otherwise.
*/

char *_strdup(char *str)
{
	int i = 0;
	int size;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
		size = i + 1;
	}

	copy = malloc(sizeof(char) * size);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
}