#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: arguments given
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	(void)argc;
	(void)*argv;

	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
