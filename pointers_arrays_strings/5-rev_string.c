#include "main.h"

/**
 * rev_string - reverses a string in memory
 * @s: points to string to reverse
 *
 * Return: none (void)
 */

void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	int pass;

	while (s[end] != '\0')
		end++;

	end--;

	while (start < end)
	{
		pass = s[start];
		s[start] = s[end];
		s[end] = pass;

		start++;
		end--;
	}
}
