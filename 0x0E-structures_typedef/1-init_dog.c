#include "dog.h"

/**
 * init_dog -> will init a variable of type strut dog
 * @d: First param
 * @name: Second param
 * @age: Third param
 * @owner: Fourth param
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
