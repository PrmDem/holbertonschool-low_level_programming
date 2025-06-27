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
	int l = 0;
	int ln = 0;
	int res;

	while (s1[l] != '\0' || s2[ln] != '\0')
	{
		res = s1[l] - s2[ln];

		if (res == 0)
		{
			l++;
			ln++;
		}

		else
		{
			break;
		}
	}

	return (res);
}
