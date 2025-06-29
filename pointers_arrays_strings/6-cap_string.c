#include "main.h"

/**
 * cap_string - capitalises every word in given string
 * @str: string to capitalise
 *
 * Return: char
 */

char *cap_string(char *str)
{
	int c = 1;
	int bc = 0;
	char separ[] = "'\n'' ''9',;.!?(){}";

	while (str[c] != '\0')
	{
		if (str[c] >= 97 && str[c] <= 122)
		{
			int i = 0;

			while (i < 13)
			{
				if (str[bc] == separ[i])
				{
					str[c] -= 32;
					break;
				}

				i++;
			}
		}

		c++;
		bc++;
	}

	return (str);
}
