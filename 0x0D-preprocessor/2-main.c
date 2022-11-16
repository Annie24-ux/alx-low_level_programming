#include <stdio.h>

/**
 * main- a program that prints the name of the file it was compiled
 * from, followed by a new line.
 *@argc: number of arguments
 *@argv: a number of arguments
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	_putchar("%s\n", argv[0]);
	return (0);
}
