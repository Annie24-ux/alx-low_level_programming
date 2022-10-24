#include "main.h"
#include <stdio.h>

/**
 *_puts - prints out a string
 * Return: Always 0.
 *@str: string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar("\n");
}
