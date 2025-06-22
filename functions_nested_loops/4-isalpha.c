#include "main.h"

/**
 * _isalpha - Checks whether the entered character is a letter
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
