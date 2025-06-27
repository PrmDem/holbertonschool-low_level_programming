#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if s1 == s2
 * negative number if s1 < s2
 * positive number if s1 > s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int res = (s1[i] - s2[i]);

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (res == 0)
			i++;

		else
			break;
	}

	return (res);
}
