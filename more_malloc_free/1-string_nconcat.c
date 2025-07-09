#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: # of s2 bytes to concatenate
*
* Return: pointer to allocated mem
* or NULL on failure.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, size1, len;
	i = 0;

	while (s1[i] != '\0')
	{
		i++;
		size1 = i;
	}

	len = size1 + n + 1;
	string = malloc(sizeof(char) * len);

	for (i = 0; i < size1; i++)
	{
		string[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		string[size1] = s2[i];
		string[size1 + 1] = '\0';
		size1++;
	}

	if (string == NULL)
		return (NULL);

	return (string);
}
