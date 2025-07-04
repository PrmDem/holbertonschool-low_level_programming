#include <stdio.h>
#include "main.h"

/**
 * name - prints the name of the program
 * @argc: number of arguments
 * @argv: arguments given
 *
 * Return: always 0.
 */

int name(int argc, char *argv[])
{
        (void)argc;
	
	printf("%s\n", argv[0]);

	return (0);
}
