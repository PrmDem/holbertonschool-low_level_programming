#include "main.h"

/**
 * _strcpy - copies n elements of src to dest
 * @dest: string to copy onto and return
 * @src: string to copy from
 *
 * Return: pointer to dest string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		dest[i + 1] = '\0';
		i++;
	}

	return (dest);
}
