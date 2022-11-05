#include "main.h"

#include <stdio.h>
/**
 *_abs - Computes the absolute value of an integer.
 *@n: The integer about to be computed.
 *Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
