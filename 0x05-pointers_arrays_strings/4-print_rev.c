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

	while (i >= 0)

	{
		if (i[i] == '\0')
			break;

		i++;
	}
	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
