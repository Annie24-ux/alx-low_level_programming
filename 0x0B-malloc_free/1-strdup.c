#include "main.h"

#include <stdio.h>

#include <stdlib.h>
/**
 *main - function that returns a pointer to
 * a newly allocated space in memory,
 * Return: Always 0.
 */

int main(void)
{
	char *s;

	s = _strdup("");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);

	}
	printf("%s\n", s);
	free(s);
	return (0);
}
