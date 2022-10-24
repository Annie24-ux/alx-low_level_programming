#include "main.h"
#include <stdio.h>

/**
 *print_rev - prints a string in reverse
 * followed by a new line
 * @s: string as a parameter
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')

	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
