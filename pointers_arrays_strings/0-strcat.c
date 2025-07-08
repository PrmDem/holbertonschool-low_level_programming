#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the initial string, to append to
 * @src: the second string, to append
 *
 * Return: pointer to the resulting string, dest
 */

char *_strcat(char *dest, char *src)
{
	int l = 0;
	int i = 0;
	int destl;

	while (dest[l] != '\0')
		l++;

	destl = l;

	while (src[i] != '\0')
	{
		dest[destl + i] = src[i];
		i++;
	}

	dest[destl + i] = '\0';

	return (dest);
}
