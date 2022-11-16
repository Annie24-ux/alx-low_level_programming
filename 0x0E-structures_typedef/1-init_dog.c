#include "dog.h"
#include <stdio.h>

/**
 * init_dog- initializes a dog structure
 * dog with the following element
 * @d: pointer to a dog structure
 *@name:name of dog
 *@age: age of dog
 *@owner: owner of the dog
 * Return void;
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d ->name = name;
		d ->age = age;
		d ->owner = owner;
	}
}