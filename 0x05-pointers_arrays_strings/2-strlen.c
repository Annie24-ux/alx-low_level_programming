#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strlen - prints length of string
 *@s: char to check
 *Return: Always 0
 */

int _strlen(char *s)
{
	int len = strlen(*s);

	_putchar("%d\n", len);


}

