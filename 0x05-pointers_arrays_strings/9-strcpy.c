#include "main.h"
#include <stdio.h>

/**
 **_strcpy -  copies the string pointed to by src, including
 *the terminating null byte (\0), to the buffer pointed to by dest
 *@dest: char to be checked
 *@src: char to be checked
 *Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
