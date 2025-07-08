#include "main.h"

/**
 * _strncat - a more precise version of strcat
 * that uses n bytes from src
 * @dest: string to append to, then return
 * @src: string to append
 * @n: amount of src bytes to append
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i = 0;
	int destl;

	while (dest[l] != '\0')
		l++;

	destl = l;

	while (i < n && src[i] != '\0')
	{
		dest[destl + i] = src[i];
		i++;
	}

	dest[destl + i] = '\0';

	return (dest);
}
