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
	int count = 0;

	for (; *s++;)
		count++;
	return (count);
}
