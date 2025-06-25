#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 *
 * Return: null (void)
 */

void print_rev(char *s)
{
	int len = 0;
	int start = 0;
	int end;

	while (s[len] != '\0')
		len++;

	for (end = len; end > start; end--)
		_putchar(s[end]);

	_putchar('\n');
}
