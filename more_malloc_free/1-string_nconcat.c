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
	unsigned int i, j, size1, size2;
	size1 = size2 = i = j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
			n = size2;

	string = malloc(sizeof(char) * (size1 * size2));

	if (string == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		string[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		string[i + j] = s2[j];
	}

	string[i + j] = '\0';

	return (string);
}
