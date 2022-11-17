#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator-a function that executes a function given as
 * a parameter on each element of an array.
 * @array: array of elements
 * @size:number of elements
 * @action:pointer to be called
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	if (array != 0 && action != 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
