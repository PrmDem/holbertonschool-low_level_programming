#include <stdio.h>
#include "main.h"

/**
 * main - prints nb of arguments
 * @argc: number of arguments
 * @argv: arguments given
 *
 * Return: always 0.
 */

int main(int argc, char  *argv[])
{
	(void)argc;
	(void)*argv;

	printf("%d\n", argc - 1);

	return (0);
}
