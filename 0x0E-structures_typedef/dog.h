#ifndef "dog.h"
#define "dog.h"

include < stdlib.h >
#include "dog.h"


/**
 * my_dog-Define a new type struct
 * dog with the following element
 * @pd: pointer to a dog structure
 *@name:name of dog
 *@age: age of dog
 *@owner: owner of the dog
 * Return void;
 */

void my_dog(struct dog *pd, char *name, float age, char *owner)
{
	if (pd != NULL)
	{
		pd->name = name;
		pd->age = age;
		pd->owner = owner;
	}
}
#endif
