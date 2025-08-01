#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - prints a name
* @name: name to print
* @f: function 'print name as is'
*
* Return: none (void)
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
