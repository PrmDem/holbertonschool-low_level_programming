#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: pointer for first char of string
 *
 * Return: int that is length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
