#include "main.h"
#include <stdio.h>

/**
 * *_strcat - a function that concatenates two strings
 *@dest:dest string
 *@src: src string
 *Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	_putchar("%s\n", strcat(dest, src));
	return (0);
}

