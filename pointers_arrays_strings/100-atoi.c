#include "main.h"

/**
 * _atoi - converts a string to an int
 * @s: points to string to convert
 *
 * Return: int (numbers within s)
 */

int _atoi(char *s)
{
	int len = 0, min = 0, count = 0, num = 0;

	while (s[len] != '\0')
	{
		if ((s[len] < 48 || s[len] > 57) && count > 0)
		{
		break;
		}

		if (s[len] == 45)
		{
			min++;
		}

		if (s[len] >= 48 && s[len] <= 57)
		{
			num = num * 10 + s[len] - 48;
			count++;
		}

		len++;
	}

	if (min % 2 != 0)
	{
		num *= (-1);
	}

	return (num);
}
