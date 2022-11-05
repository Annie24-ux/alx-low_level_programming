#include "main.h"
#include <stdio.h>

/**
 * *_strncat - a function that concatenates two strings.
 * @n: interger
 * @src: src string
 * @dest: dest string
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
