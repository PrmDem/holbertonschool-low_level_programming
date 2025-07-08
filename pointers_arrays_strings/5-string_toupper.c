#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * @str: pointer to the target string
 *
 * Return: char
 */

char *string_toupper(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
			str[c] -= 32;

		c++;
	}

	return (str);
}
