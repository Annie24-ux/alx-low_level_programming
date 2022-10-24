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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		return (i);
	}
	return (0);
}
