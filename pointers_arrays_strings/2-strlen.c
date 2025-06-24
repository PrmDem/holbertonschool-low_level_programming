#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: pointer for first char of string
 *
 * Return: int that is length of string
 */

int _strlen(char *s)
{
	int xyz = 0;

	while (s[xyz] != '\0')
		xyz++;

	return (xyz);
}
