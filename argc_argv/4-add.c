#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: arguments given
 *
 * Return: 0 if successful
 * 1 if args aren't digits.
 */

int main(int argc, char *argv[])
{
	int res = 0;
	int i;
	(void)argc;

        for (i = 1; i < argc; i++)
	{
		res += atoi(argv[i]);
	}

	printf("%d\n", res);

	return (0);
}
