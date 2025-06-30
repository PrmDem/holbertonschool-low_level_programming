#include "main.h"

/**
 * _strspn - get length of substring
 * @s: initial string
 * @accept: characters to make the substring from
 *
 * Return: length as an unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int count;
	unsigned int len = 0;

	while (s[i] != '\0')
	{
		count = 0;
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				len++;
				break;
			}

			else
			{
				j++;
			}
		}

		if (count == 0)
		{
			break;
		}

		i++;
	}

	return (len);
}
