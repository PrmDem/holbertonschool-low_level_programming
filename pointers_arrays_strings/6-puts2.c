#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: points at the string to print
 *
 * Return: none (void)
 */

void puts2(char *str)
{
	int len = 0;
	int jump = 0;

	while (str[len] != '\0')
		len++;

	len--;

	while (jump <= len)
	{
		_putchar(str[jump]);
		jump += 2;
	}

	_putchar('\n');
}
