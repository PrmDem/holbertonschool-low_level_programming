#include "main.h"

/**
 * _strchr - looks for a given char in string
 * @s: string to search in
 * @c: character to look for
 *
 * Return: pointer to first occurrence of c if found
 * NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int found = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s = &s[i];
			found++;
			break;
		}

		else
		{
			i++;
		}
	}

	if (found > 0)
		return (s);

	else
		return ('\0');
}
