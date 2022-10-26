#include "main.h"
#include <stdio.h>

/**
 *string_toupper - changes lowercase letters of a string to uppercase.
 *@s: string
 *Return: Always 0.
 */

char *string_toupper(char *s)
{
	char *ptr = s;

	while (*s)
	{
		if (*s >= 97 && *s <= 122)
			*s -= 32;
		s++;
	}
	return (ptr);
}
