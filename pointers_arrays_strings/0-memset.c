#include "main.h"

/**
 * _memset - fills the first n bytes of s with b
 * @s: pointer to chosen memory area
 * @b: character to fill with
 * @n: number of bytes to fill
 *
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
