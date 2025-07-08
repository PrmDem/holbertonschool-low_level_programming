#include "main.h"

/**
 * _strncpy - copies n elements of src to dest
 * @dest: string to copy onto and return
 * @src: string to copy from
 * @n: number of src elements to copy
 *
 * Return: pointer to dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
