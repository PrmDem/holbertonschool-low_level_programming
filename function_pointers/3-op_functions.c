#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* op_add - adds given ints
* @a: first int
* @b: second int
*
* Return: result as an int
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - substracts given ints
* @a: first int
* @b: second int
*
* Return: result as an int
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplies given ints
* @a: first int
* @b: second int
*
* Return: result as an int
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divides given ints
* @a: first int
* @b: second int
*
* Return: result as an int
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
* op_mod - divides given ints
* @a: first int
* @b: second int
*
* Return: remainder as an int
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
