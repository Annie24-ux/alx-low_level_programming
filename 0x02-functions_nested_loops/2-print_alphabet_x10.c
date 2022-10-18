#include "main.h"
/**
 *print_alphabet_x10- Print alphabets, in lowercases.
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char alphabet;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}

