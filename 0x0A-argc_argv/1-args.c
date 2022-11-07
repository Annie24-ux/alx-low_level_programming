#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: number of arguments passed
 * @argv: a vector of the arguments passed into the program
 *Return: Always (0)
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%d\n", argc);

	return (0);
}
