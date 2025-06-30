#include "main.h"

/**
 * _strpbrk - searches for a byte out of a set
 * @s: string to search in
 * @accept: set of accepted bytes
 *
 * Return: pointer to matching byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int count;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		count = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				count++;
				break;
			}

			j++;
		}

		if (count == 1)
			break;

		else
			i++;
	}

	return (s);
}
