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
	s = "Lorem ipsum dolor sit amet, consectetur adipiscing 
	elit, sed do eiusmod tempor incididunt ut labore et dolore
       	magna aliqua. Ut enim ad minim veniam, quis nostrud 
	exercitation ullamco laboris nisi ut aliquip ex ea commodo 
	consequat. Duis aute irure dolor in reprehenderit in voluptate
	elit esse cillum dolore eu fugiat.";

	for (i = 0; s[i] != '\0'; i++)
	{
		return (i);
	}
	return (0);
}
