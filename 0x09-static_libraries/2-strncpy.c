#include "main.h"
#include <stdio.h>

/**
 *_strncpy - a function that copies a string
 * @n: an integer to check
 * @dest: dest string
 * @src: src string
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
