#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first interger for pointer
 *@b: second interger for pointer
 *Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int *x;

	 x = *a;
	*a = *b;
	*b = x;
}
