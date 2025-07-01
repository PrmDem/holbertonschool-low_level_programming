#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: initial string
 * @needle: substring to look for
 *
 * Return: pointer to needle if found
 * NULL if needle is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *start;
	int count;
	int i = 1;
	int j = 0;

	while (needle[i] != '\0')
	{
		count = 0;

		while (haystack[j] != '\0')
		{
			if (haystack[j] == needle[0])
			{
				start = &haystack[j];
				count++;
			}

			else if (haystack[j] == needle[i] && count > 0)
			{
				i++;
				j = 0;
			}

			j++;
		}
	}

	if ((haystack[j] + 1) == '\0' && count == 0)
		return ('\0');

	else
		return (start);
}
