#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* *str_concat - concatenates 2 strings
* @s1: first string
* @s2: second string
*
* Return: pointer to new string
* or NULL if fail.
*/

char *str_concat(char *s1, char *s2)
{
	char *fullstr;
	int i, j;
	int size1, size2, len;
	i = j = 0;

	if (s1 == NULL)
	{
		s1 = '\0';
	}

	if (s2 == NULL)
	{
		s2 = '\0';
	}

	while (s1[i] != '\0')
	{
		i++;
	}

	size1 = i;

	while (s2[j] != '\0')
	{
		j++;
	}

	size2 = j;
	len = size1 + size2;

	fullstr = malloc(sizeof(char) * len + 1);

	for (i = 0; i < size1; i++)
	{
		fullstr[i] = s1[i];
	}

	for (j = 0; j < size2; j++)
	{
		fullstr[size1 + j] = s2[j];
	}

	fullstr[len] = '\0';

	return (fullstr);

	free(fullstr);
}
