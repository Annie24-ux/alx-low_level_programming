#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add-adds two ints
 * @a: first integer
 * @b:second int
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub-subtract a from b
 * @a: first int
 * @b:second int
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul-multiplication of two ints
 * @a:1st int
 * @b:2nd int
 * Return: Product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div-quotient of two ints
 * @a:1st int
 * @b:2nd int
 * Return: qoutient of a and b
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
 * op_mod-Shows remainder between two ints
 * @a:first int
 * @b:2nd int
 * Return: modulus between two ints
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
