#include "main.h"

/**
 * leet - encodes string into 1337
 * @str: string to encode
 *
 * Return: char
 */

char *leet(char *str)
{
	char base[6] = "oleat";
	char leet[6] = "01347";
	int i = 0;

	while (str[i] != '\0')
	{
		int j = 0;

		while (j < 5)
		{
			if (str[i] == base[j] || str[i] == (base[j] - 32))
			{
				str[i] = leet[j];
				break;
			}

			j++;
		}

		i++;
	}

	return (str);
}
