#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* main - entry point
* @argc: number of arguments
* @argv: arguments provided by user
*
* Return: always 0.
*/

int main(int argc, char *argv[])
{
	int a, b;
	int res = 0;

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (*argv[2] != '+' &&
	*argv[2] != '-' &&
	*argv[2] != '*' &&
	*argv[2] != '/' &&
	*argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	res = get_op_func(argv[2])(a, b);

	printf("%i\n", res);

	return (0);
}
