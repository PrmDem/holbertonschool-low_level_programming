#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: arguments given
 *
 * Return: 0 if successful
 * 1 if missing arguments.
 */

int main(int argc, char *argv[])
{
	(void)argc;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		printf("%d\n", (*argv[1] * *argv[2]));
	}

	return (0);
}
